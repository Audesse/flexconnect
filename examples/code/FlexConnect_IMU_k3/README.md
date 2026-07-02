# FlexConnect IMU K3

S32K3 firmware example that reads an onboard IMU over SPI and forwards the samples to the attached MPU using the FlexConnect library. It extends the [IMU K3](../IMU_k3/README.md) example by replacing the CAN transmit path with a FlexConnect SPI exchange.

## Overview

| Item | Detail |
|------|--------|
| Target | NXP S32K3 (Cortex-M7), AUTOSAR RTD 4.7 |
| IDE | NXP S32 Design Studio with Model-Based Design Toolbox (MBDT) |
| Application code | [`src/main.c`](src/main.c) |
| FlexConnect library | [`lib/flexconnect.h`](../../../lib/flexconnect.h), [`lib/flexconnect.o`](../../../lib/flexconnect.o) |
| Output path | SPI to MPU (`SpiChannel_MPU`), channel 7 |

The IMU sampling loop is identical to IMU K3. On each 100 ms cycle the firmware queues two CAN-formatted messages through the FlexConnect API, performs a 217-byte SPI transfer to the MPU, and decodes any inbound reply.

## Scheduling

A GPT timer drives a 10 ms base tick through [`MBDT_Step_Handler()`](src/main.c#L266-L273):

| Task | Rate | Function | Purpose |
|------|------|----------|---------|
| IMU SPI | 10 ms | [`Exec_10ms()`](src/main.c#L214-L230) | Configure or read the IMU |
| FlexConnect SPI | 100 ms | [`Exec_100ms()`](src/main.c#L232-L263) | Send IMU data to MPU, process reply |

The timer is started in [`main()`](src/main.c#L194-L195). `base_tick` counts 10 ms steps; [`Exec_100ms()`](src/main.c#L269-L271) runs when `base_tick % 10 == 0`.

## IMU SPI interface

Same implementation as [IMU K3](../IMU_k3/README.md#imu-spi-interface) — see that README for configuration and read transfer details. In this project:

- **First cycle:** 7-byte configuration write ([`src/main.c:224`](src/main.c#L224)) on `SpiConf_SpiChannel_SPI_IMU`.
- **Every 10 ms thereafter:** 15-byte read ([`src/main.c:219`](src/main.c#L219)) using command `0xa0` ([`SPI_IMU_TxData_Read`](src/main.c#L85)), response in [`SPI_IMU_RxData_Read`](src/main.c#L86).

Payload mapping into CAN byte arrays ([`src/main.c:235-236`](src/main.c#L235-L236)):

```c
memcpy(&IMU_Bytes_A[2], &SPI_IMU_RxData_Read[9], 6);
memcpy(IMU_Bytes_B, &SPI_IMU_RxData_Read[1], 8);
```

## FlexConnect SPI exchange

[`Exec_100ms()`](src/main.c#L232-L263) packages IMU data as FlexConnect CAN messages and exchanges them with the MPU ([`src/main.c:239-250`](src/main.c#L239-L250)):

```c
flx_pushToBuffer(7u, IMU_Bytes_A_ID, 8u, IMU_Bytes_A);
flx_pushToBuffer(7u, IMU_Bytes_B_ID, 8u, IMU_Bytes_B);

flx_txDataPrep(FLX_TxData, FLX_TransferSize);
Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_MPU, FLX_TxData, FLX_RxData, FLX_TransferSize);
Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_MPU);

FLX_Rx_DataValid = flx_rxDataPrep(FLX_RxData, &FLX_Rx_Channel, &FLX_Rx_ID,
                                   &FLX_Rx_DLC, FLX_Rx_Payload, FLX_TransferSize);
```

| Message | CAN ID | Channel | DLC |
|---------|--------|---------|-----|
| IMU frame A | [`0x9CFF3A65`](src/main.c#L70) | 7 | 8 |
| IMU frame B | [`0x9CFF3B65`](src/main.c#L71) | 7 | 8 |

The MPU parses these using your DBC file and publishes field/value pairs to the cloud.

### Transfer size

Defined in [`src/main.c:72-75`](src/main.c#L72-L75):

```c
#define FLX_MessageSize 13U
#define FLX_MessagesPerTransfer 16U
#define FLX_TransferOverhead 9U
#define FLX_TransferSize (FLX_MessageSize * FLX_MessagesPerTransfer + FLX_TransferOverhead)
```

`FLX_TransferSize` is **217 bytes** (13 × 16 + 9): 13 bytes per message slot, up to 16 messages per frame, plus 9 bytes of frame overhead. Pass this value to both the FlexConnect API and [`Spi_SetupEB`](src/main.c#L244).

SPI buffers [`FLX_TxData`](src/main.c#L87) and [`FLX_RxData`](src/main.c#L88) are sized at 256 bytes to accommodate the transfer.

## Activity indicator

Unlike IMU K3, the LED reflects MPU communication status ([`src/main.c:253-261`](src/main.c#L253-L261)):

- **Valid inbound message:** [`Dio_WriteChannel(DioConf_DioChannel_EXT_Supply_EN, …)`](src/main.c#L256) toggles.
- **No valid message:** LED is held off ([`src/main.c:260`](src/main.c#L260)).

This gives quick visual confirmation that the MPU is responding on the FlexConnect SPI link.

## Project layout

| Path | Description |
|------|-------------|
| [`src/main.c`](src/main.c) | Application logic |
| `audesselib/` | Local copy of `flexconnect.h` and `flexconnect.o` linked by the S32DS project |
| `generate/` | MBDT-generated peripheral configuration |
| `RTD/` | NXP RTD driver sources |
| `Project_Settings/` | Startup, linker, and debug launch files |
| `FlexConnect_IMU_k3.mex` | MBDT hardware configuration |

The canonical library files live in the repository [`lib/`](../../../lib/) directory. The `audesselib/` folder is a project-local copy used by [`.cproject`](.cproject) include and linker paths ([lines 46, 120, 123](.cproject#L46)).

## Building

1. Import the project into S32 Design Studio.
2. Confirm `audesselib/` is on the include path and `flexconnect.o` is linked (configured in [`.cproject`](.cproject#L123)).
3. Build and flash to your S32K3 target.

For API details on `flx_pushToBuffer`, `flx_txDataPrep`, and `flx_rxDataPrep`, see the [Code examples documentation](../index.md).
