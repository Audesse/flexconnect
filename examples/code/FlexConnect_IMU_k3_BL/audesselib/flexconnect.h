#ifndef FLEXCONNECT_H
#define FLEXCONNECT_H
#include <stdint.h>
#include <stdbool.h>

typedef enum {
    FLX_BUFF_OK,
    FLX_BUFF_FULL,
    FLX_BUFF_BUSY,
    FLX_BUFF_ERROR,
} flx_bufferStat;

bool flx_rxDataPrep(const uint8_t *rxData, uint8_t *channel, uint32_t *canID, uint16_t *dlc, uint8_t *payload, const uint16_t spi_sz);
void flx_txDataPrep(uint8_t *txData, const uint16_t spi_sz);
uint8_t flx_pushToBuffer(const uint8_t channel, const uint32_t canID, const uint16_t dlc, const uint8_t *data);
uint16_t flx_getBufferFullCount(void);
uint16_t flx_getBufferBusyCount(void);

#endif // FLEXCONNECT_H