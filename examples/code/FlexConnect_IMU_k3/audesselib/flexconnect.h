/**
 * @file flexconnect.h
 * @brief FlexConnect SPI framing API for MCU-to-MPU communication.
 */

#ifndef FLEXCONNECT_H
#define FLEXCONNECT_H
#include <stdint.h>
#include <stdbool.h>

/**
 * @defgroup flexconnect FlexConnect API
 * @{
 */

/** @brief Status of a message-buffer operation. */
typedef enum {
    FLX_BUFF_OK,    /**< Operation completed successfully. */
    FLX_BUFF_FULL,  /**< Buffer capacity exceeded; push was rejected. */
    FLX_BUFF_BUSY,  /**< Buffer is locked by another operation. */
    FLX_BUFF_ERROR,
} flx_bufferStat;

/**
 * @brief Decode a received FlexConnect SPI transfer.
 *
 * On success, writes @p channel, @p canID, @p dlc, and @p payload and
 * returns true. Returns false when no valid message is present.
 *
 * @param rxData   Raw SPI receive buffer.
 * @param channel  Output CAN channel.
 * @param canID    Output CAN identifier.
 * @param dlc      Output data length.
 * @param payload  Output message bytes.
 * @param spi_sz   Size of the SPI transfer.
 * @return true if a valid message was decoded.
 *
 * @code
 * if (flx_rxDataPrep(rxData, &channel, &canID, &dlc, payload, transferSize)) {
 *     // handle inbound message
 * }
 * @endcode
 */
bool flx_rxDataPrep(const uint8_t *rxData, uint8_t *channel, uint32_t *canID, uint16_t *dlc, uint8_t *payload, const uint16_t spi_sz);

/**
 * @brief Prepare the next FlexConnect SPI transfer.
 *
 * Writes @p txData from queued outbound messages and removes any messages
 * included in the transfer. If no messages are ready, writes an empty
 * transfer instead.
 *
 * @param txData  Output SPI transmit buffer.
 * @param spi_sz  Size of the SPI transfer.
 *
 * @code
 * flx_pushToBuffer(channel, canID, dlc, data);
 * flx_txDataPrep(txData, transferSize);
 * // transmit txData over SPI
 * @endcode
 */
void flx_txDataPrep(uint8_t *txData, const uint16_t spi_sz);

/**
 * @brief Queue a CAN message for transmission to the MPU.
 *
 * @param channel  CAN channel.
 * @param canID    CAN identifier.
 * @param dlc      Data length.
 * @param data     Message bytes.
 * @return Buffer status after the push attempt.
 */
uint8_t flx_pushToBuffer(const uint8_t channel, const uint32_t canID, const uint16_t dlc, const uint8_t *data);

/**
 * @brief Count of push attempts rejected because the buffer was full.
 * @return Rejection count since reset.
 */
uint16_t flx_getBufferFullCount(void);

/**
 * @brief Count of operations rejected because the buffer was busy.
 * @return Rejection count since reset.
 */
uint16_t flx_getBufferBusyCount(void);

/** @} */

#endif // FLEXCONNECT_H
