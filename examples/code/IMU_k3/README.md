# IMU K3

S32K3 firmware example that reads an onboard IMU over SPI and publishes the samples on the CAN bus. This project shows MCU peripheral integration without the FlexConnect library — useful as a baseline before adding MPU communication.

## Overview

| Item | Detail |
|------|--------|
| Target | NXP S32K3 (Cortex-M7), AUTOSAR RTD 4.7 |
| IDE | NXP S32 Design Studio with Model-Based Design Toolbox (MBDT) |
| Application code | [`src/main.c`](src/main.c) |
| Output path | CAN controller 2, two 8-byte frames at 10 Hz |

On each 100 ms cycle the firmware reads the latest IMU sample (updated every 10 ms), maps it into two CAN payloads, and transmits both frames on FlexCAN. An external supply enable pin is toggled as a simple activity indicator.

## Scheduling

A GPT timer drives a 10 ms base tick through [`MBDT_Step_Handler()`](src/main.c#L238-L247):

| Task | Rate | Function | Purpose |
|------|------|----------|---------|
| IMU SPI | 10 ms | [`Exec_10ms()`](src/main.c#L203-L219) | Configure or read the IMU |
| CAN publish | 100 ms | [`Exec_100ms()`](src/main.c#L221-L235) | Pack and send CAN frames, toggle LED |

The timer is started in [`main()`](src/main.c#L183-L184). `base_tick` counts 10 ms steps; [`Exec_100ms()`](src/main.c#L241-L243) runs when `base_tick % 10 == 0`.

## IMU SPI interface

The IMU is accessed on `SpiConf_SpiChannel_SPI_IMU` via [`Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_IMU)`](src/main.c#L217) inside [`Exec_10ms()`](src/main.c#L203-L219).

**Configuration (first 10 ms cycle)**

A single 7-byte write configures the sensor. No receive buffer is used ([`src/main.c:213`](src/main.c#L213)):

```c
Spi_SetupEB(SpiConf_SpiChannel_SPI_IMU, SPI_IMU_TxData_Config, NULL_PTR, 7U);
```

[`SPI_IMU_TxData_Config`](src/main.c#L80) is `{0x10, 0x40, 0x40, 0x04, 0x02, 0x00, 0x00}`.

**Read (every subsequent 10 ms cycle)**

A 15-byte full-duplex transfer requests and receives IMU data ([`src/main.c:208`](src/main.c#L208)):

```c
Spi_SetupEB(SpiConf_SpiChannel_SPI_IMU, SPI_IMU_TxData_Read, SPI_IMU_RxData_Read, 15U);
```

The read command buffer [`SPI_IMU_TxData_Read`](src/main.c#L81) starts with `0xa0`; the response lands in [`SPI_IMU_RxData_Read`](src/main.c#L82).

## CAN message mapping

Raw SPI bytes are copied into two 8-byte CAN payloads before transmission ([`src/main.c:224-225`](src/main.c#L224-L225)):

```c
memcpy(&CAN_IMU_Bytes_A[2], &SPI_IMU_RxData_Read[9], 6);
memcpy(CAN_IMU_Bytes_B, &SPI_IMU_RxData_Read[1], 8);
```

| CAN ID | Payload | Source |
|--------|---------|--------|
| [`0x9CFF3A65`](src/main.c#L69) | [`CAN_IMU_Bytes_A[8]`](src/main.c#L77) | Bytes 0–1 fixed at `0x40, 0x40`; bytes 2–7 from SPI RX offset 9 |
| [`0x9CFF3B65`](src/main.c#L70) | [`CAN_IMU_Bytes_B[8]`](src/main.c#L78) | SPI RX bytes 1–8 |

Both frames are sent on CAN controller 2 ([`src/main.c:187-189`](src/main.c#L187-L189)) using hardware transmit objects `CanHO_Can2_Tx_Interrupt0` and `CanHO_Can2_Tx_Interrupt1` ([`src/main.c:230-231`](src/main.c#L230-L231)):

```c
Can_43_FLEXCAN_Write(Can_43_FLEXCANConf_CanHardwareObject_CanHO_Can2_Tx_Interrupt0, &Can_PduInfo[0]);
Can_43_FLEXCAN_Write(Can_43_FLEXCANConf_CanHardwareObject_CanHO_Can2_Tx_Interrupt1, &Can_PduInfo[1]);
```

Define matching message entries in your DBC file so the MPU or bus analyzer can decode these IDs.

## Activity indicator

[`Dio_WriteChannel(DioConf_DioChannel_EXT_Supply_EN, LEDlevel)`](src/main.c#L234) toggles on every 100 ms cycle ([`src/main.c:233-234`](src/main.c#L233-L234)), independent of sensor or bus status.

## Project layout

| Path | Description |
|------|-------------|
| [`src/main.c`](src/main.c) | Application logic |
| `generate/` | MBDT-generated peripheral configuration |
| `RTD/` | NXP RTD driver sources |
| `Project_Settings/` | Startup, linker, and debug launch files |
| `IMU_k3.mex` | MBDT hardware configuration |

SPI, CAN, GPT, and pin mux settings are defined in the generated configuration — adjust hardware mappings through the `.mex` file in S32DS rather than editing generated sources directly.

## Building

1. Import the project into S32 Design Studio (`File → Import → Existing Projects into Workspace`).
2. Select a build configuration (Debug or Release).
3. Build and flash to your S32K3 target.

This project does not link the FlexConnect library. For the variant that forwards the same IMU data to the MPU over SPI, see [FlexConnect_IMU_k3](../FlexConnect_IMU_k3/README.md).
