---
layout: default
title: Code
---

# Code

Sample C (MCU API) and Python (MPU API) code for FlexConnect.

## FlexConnect MCU library

The FlexConnect SPI framing library is provided in the repository {% include repo_link.html path="lib/" text="lib/" tree=true %} directory:

- {% include repo_link.html path="lib/flexconnect.h" text="lib/flexconnect.h" %} — API header
- {% include repo_link.html path="lib/flexconnect.o" text="lib/flexconnect.o" %} — prebuilt object file (link at build time)

Add `lib/` to your include path and link `flexconnect.o` into your firmware project. The {% include repo_link.html path="examples/code/FlexConnect_IMU_k3/" text="FlexConnect IMU example" tree=true %} demonstrates end-to-end usage on an S32K3 MCU.

### Typical SPI exchange cycle

On each SPI transfer to the MPU:

1. Queue outbound CAN messages with `flx_pushToBuffer`.
2. Serialize the transmit buffer with `flx_txDataPrep`.
3. Run the SPI transfer (driver-specific).
4. Decode the receive buffer with `flx_rxDataPrep`.

The IMU example runs this cycle every 100 ms in {% include repo_link.html path="examples/code/FlexConnect_IMU_k3/src/main.c" text="Exec_100ms()" %}:

```c
// Push SPI data to Flexconnect Tx buffer
flx_pushToBuffer(7u, IMU_Bytes_A_ID, 8u, IMU_Bytes_A);
flx_pushToBuffer(7u, IMU_Bytes_B_ID, 8u, IMU_Bytes_B);

// Prepare Tx data
flx_txDataPrep(FLX_TxData, FLX_TransferSize);
Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_MPU, FLX_TxData, FLX_RxData, FLX_TransferSize);

// Transmit data over SPI
Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_MPU);

// Process Rx data
FLX_Rx_DataValid = flx_rxDataPrep(FLX_RxData, &FLX_Rx_Channel, &FLX_Rx_ID, &FLX_Rx_DLC, FLX_Rx_Payload, FLX_TransferSize);
```

After a successful receive, the example toggles an LED when `FLX_Rx_DataValid` is true.

### SPI transfer size (`FLX_TransferSize`)

`FLX_TransferSize` is the number of bytes exchanged on each SPI transfer between the MCU and MPU. The FlexConnect frame packs multiple CAN messages into a single transfer, plus a small header:

| Factor | Value | Description |
|--------|-------|-------------|
| Message size | 13 bytes | Space allocated per CAN message in the SPI frame |
| Messages per transfer | 16 | Maximum number of messages packed into one transfer |
| Overhead | 9 bytes | Frame header and control bytes prepended to the message block |

The transfer size is therefore **13 × 16 + 9 = 217 bytes**. The IMU example defines this as:

```c
#define FLX_MessageSize 13U
#define FLX_MessagesPerTransfer 16U
#define FLX_TransferOverhead 9U
#define FLX_TransferSize (FLX_MessageSize * FLX_MessagesPerTransfer + FLX_TransferOverhead)
```

Pass this value as `spi_sz` to `flx_txDataPrep` and `flx_rxDataPrep`, and use the same length when configuring the SPI driver for the MPU channel.

### API reference

#### `flx_pushToBuffer`

Queues a CAN message for transmission to the MPU on the next SPI exchange.

| Parameter | Description |
|-----------|-------------|
| `channel` | CAN channel number |
| `canID`   | CAN identifier |
| `dlc`     | Data length (number of payload bytes) |
| `data`    | Pointer to message payload |

Returns a `flx_bufferStat` value: `FLX_BUFF_OK`, `FLX_BUFF_FULL`, `FLX_BUFF_BUSY`, or `FLX_BUFF_ERROR`.

In the IMU example, two 8-byte IMU frames are queued on channel 7 before each transfer:

```c
flx_pushToBuffer(7u, IMU_Bytes_A_ID, 8u, IMU_Bytes_A);
flx_pushToBuffer(7u, IMU_Bytes_B_ID, 8u, IMU_Bytes_B);
```

Call this as often as needed between SPI transfers. Messages that do not fit in the next frame remain queued for later exchanges.

#### `flx_txDataPrep`

Builds the next SPI transmit buffer from queued outbound messages and removes any messages included in that buffer. If no messages are queued, writes an empty transfer.

| Parameter | Description |
|-----------|-------------|
| `txData` | Output buffer for the SPI transmit frame |
| `spi_sz` | Size of the SPI transfer in bytes |

```c
flx_txDataPrep(FLX_TxData, FLX_TransferSize);
```

`FLX_TransferSize` is 217 bytes (13 × 16 + 9) in the IMU example. Pass the resulting buffer to your SPI driver before starting the transfer.

#### `flx_rxDataPrep`

Decodes a received FlexConnect SPI transfer. On success, writes the CAN channel, identifier, data length, and payload, and returns `true`. Returns `false` when no valid message is present.

| Parameter | Description |
|-----------|-------------|
| `rxData`  | Raw SPI receive buffer |
| `channel` | Output CAN channel |
| `canID`   | Output CAN identifier |
| `dlc`     | Output data length |
| `payload` | Output message bytes |
| `spi_sz`  | Size of the SPI transfer in bytes |

```c
FLX_Rx_DataValid = flx_rxDataPrep(FLX_RxData, &FLX_Rx_Channel, &FLX_Rx_ID, &FLX_Rx_DLC, FLX_Rx_Payload, FLX_TransferSize);

if (FLX_Rx_DataValid)
{
    // handle inbound message from MPU
}
```

#### `flx_getBufferFullCount`

Returns the number of `flx_pushToBuffer` calls rejected because the outbound buffer was full since reset. Use this to detect when the MCU is producing messages faster than the SPI link can carry them.

```c
uint16_t fullCount = flx_getBufferFullCount();
```

#### `flx_getBufferBusyCount`

Returns the number of operations rejected because the buffer was locked by another operation since reset. Use this to detect concurrent access to the message buffer.

```c
uint16_t busyCount = flx_getBufferBusyCount();
```
