#ifndef CANOPENNODE_ESP32_H
#define CANOPENNODE_ESP32_H

#if CONFIG_USE_CANOPENNODE

#include "CANopen.h"

bool CO_ESP32_init();
CO_t* CO_obtain(void);

#endif /* CONFIG_USE_CANOPENNODE */
#endif /* CANOPENNODE_ESP32_H */