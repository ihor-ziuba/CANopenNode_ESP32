#ifndef CANOPENNODE_ESP32_H
#define CANOPENNODE_ESP32_H

#if CONFIG_USE_CANOPENNODE

#include "CANopen.h"

bool CO_ESP32_init();
CO_t *CO_obtain(void);

CO_SDO_abortCode_t
read_SDO(CO_SDOclient_t *SDO_C, uint8_t nodeId, uint16_t index, uint8_t subIndex, uint8_t *buf, size_t bufSize,
         size_t *readSize);
CO_SDO_abortCode_t
write_SDO(CO_SDOclient_t *SDO_C, uint8_t nodeId, uint16_t index, uint8_t subIndex, uint8_t *data, size_t dataSize);

#endif /* CONFIG_USE_CANOPENNODE */
#endif /* CANOPENNODE_ESP32_H */