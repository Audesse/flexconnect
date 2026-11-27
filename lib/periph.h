#ifndef PERIPH_H
#define PERIPH_H

#include "S32K344_MC_ME.h"
#include "IntCtrl_Ip.h"
#include "IntCtrl_Ip_Cfg.h"
#include "Clock_Ip.h"
#include "Lpi2c_Ip.h"
#include <stdbool.h>

#ifdef ETH_TEMPLATE
#include "eth_svc.h"
#endif

void flx_k3JumpToBL(void);
uint8_t flx_k3ExtWdog_refresh(void);

#endif // PERIPH_H