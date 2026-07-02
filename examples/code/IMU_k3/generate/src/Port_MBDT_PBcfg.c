/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : SIUL2
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 6.0.0
*   Build Version        : S32K3_RTD_6_0_0_D2506_ASR_REL_4_7_REV_0000_20250610
*
*   Copyright 2020 - 2025 NXP
*
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file    Port_PBcfg.c
*
*   @implements Port_PBcfg.c_Artifact
*   @addtogroup Port_CFG
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
#include "Port.h"

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
#define PORT_VENDOR_ID_MBDT_PBCFG_C                       43
#define PORT_AR_RELEASE_MAJOR_VERSION_MBDT_PBCFG_C        4
#define PORT_AR_RELEASE_MINOR_VERSION_MBDT_PBCFG_C        7
#define PORT_AR_RELEASE_REVISION_VERSION_MBDT_PBCFG_C     0
#define PORT_SW_MAJOR_VERSION_MBDT_PBCFG_C                6
#define PORT_SW_MINOR_VERSION_MBDT_PBCFG_C                0
#define PORT_SW_PATCH_VERSION_MBDT_PBCFG_C                0

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/
/* Check if Port_MBDT_PBcfg.c and Port.h are of the same vendor */
#if (PORT_VENDOR_ID_MBDT_PBCFG_C != PORT_VENDOR_ID)
    #error "Port_MBDT_PBcfg.c and Port.h have different vendor ids"
#endif
/* Check if Port_MBDT_PBcfg.c and Port.h are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_MBDT_PBCFG_C    != PORT_AR_RELEASE_MAJOR_VERSION) || \
     (PORT_AR_RELEASE_MINOR_VERSION_MBDT_PBCFG_C    != PORT_AR_RELEASE_MINOR_VERSION) || \
     (PORT_AR_RELEASE_REVISION_VERSION_MBDT_PBCFG_C != PORT_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Port_MBDT_PBcfg.c and Port.h are different"
#endif
/* Check if Port_MBDT_PBcfg.c and Port.h are of the same software version */
#if ((PORT_SW_MAJOR_VERSION_MBDT_PBCFG_C != PORT_SW_MAJOR_VERSION) || \
     (PORT_SW_MINOR_VERSION_MBDT_PBCFG_C != PORT_SW_MINOR_VERSION) || \
     (PORT_SW_PATCH_VERSION_MBDT_PBCFG_C != PORT_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Port_MBDT_PBcfg.c and Port.h are different"
#endif
/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/
#define PORT_START_SEC_CONFIG_DATA_8
#include "Port_MemMap.h"

/**
* @brief Array containing list of partition which used in driver
*/
static const uint8 au8Port_PartitionList_MBDT[PORT_MAX_PARTITION] =
{
    1
};

#define PORT_STOP_SEC_CONFIG_DATA_8
#include "Port_MemMap.h"

#define PORT_START_SEC_CONFIG_DATA_32
#include "Port_MemMap.h"
/**
* @brief Array containing list of mapping information for mappable elements
*/
static const uint32 au32Port_PinToPartitionMap_MBDT[PORT_MAX_CONFIGURED_PADS_U16] =
{
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001,
    (uint32)0x00000001
};

#define PORT_STOP_SEC_CONFIG_DATA_32
#include "Port_MemMap.h"

#if (PORT_MAX_UNUSED_PADS_U16 != 0U)

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/**
* @brief Array containing list of MSCRs that are not used and should be configured with values from NotUsedPortPin container
*/
static const Port_Siul2_UnUsedPinType Port_aUnusedPads_MBDT[PORT_MAX_UNUSED_PADS_U16] =
{
    /* Mscr Id, Mscr Siul Instance */
    { (uint16)5, PORT_SIUL2_0_U8 },
    { (uint16)24, PORT_SIUL2_0_U8 },
    { (uint16)25, PORT_SIUL2_0_U8 },
    { (uint16)70, PORT_SIUL2_0_U8 },
    { (uint16)84, PORT_SIUL2_0_U8 },
    { (uint16)85, PORT_SIUL2_0_U8 },
    { (uint16)141, PORT_SIUL2_0_U8 },
    { (uint16)160, PORT_SIUL2_0_U8 },
    { (uint16)174, PORT_SIUL2_0_U8 },
    { (uint16)188, PORT_SIUL2_0_U8 },
    { (uint16)210, PORT_SIUL2_0_U8 },
    { (uint16)214, PORT_SIUL2_0_U8 },
    { (uint16)215, PORT_SIUL2_0_U8 }
};

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

#endif /* (PORT_MAX_UNUSED_PADS_U16 != 0) */

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/**
 * @brief Default Configuration for Pins not initialized
 */
static const Port_Siul2_UnUsedPinConfigType Port_UnusedPinConfig_MBDT =
{
    /**
    * @note: Configuration of Default pin
    */
    (uint32)0x00080000, (uint8)0, (boolean)TRUE
};

/**
* @brief Pin default configuration data for configPB
*/
static const Port_Siul2_PinConfigType Port_aUsedPinConfigs_MBDT[PORT_MAX_CONFIGURED_PADS_U16] =
{
    /* Mscr Id, Mscr Value, Mscr Siul Instance, Output Level, Direction, IsGpio, Direction Configurable, Mode Changeable, Is Imcr Available, Imcr Id */
    { (uint16)144, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)143, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)97, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)139, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)138, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)100, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)99, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)98, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)9, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)8, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)89, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)90, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)116, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)117, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)96, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)154, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)153, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)74, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)44, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)3, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)2, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)71, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)15, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)134, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)130, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)14, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)13, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)12, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)129, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)128, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)120, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)123, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)124, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)125, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)18, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)19, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)20, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)149, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)150, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)151, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)87, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)95, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)126, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)146, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)32, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 0 },
    { (uint16)33, (uint32)0x00200005, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)22, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 1 },
    { (uint16)23, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)115, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 2 },
    { (uint16)114, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)157, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 3 },
    { (uint16)156, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)159, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 4 },
    { (uint16)158, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)206, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 5 },
    { (uint16)205, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)180, (uint32)0x00280004, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_INOUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 212 },
    { (uint16)181, (uint32)0x00280004, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_INOUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 214 },
    { (uint16)92, (uint32)0x00280005, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_INOUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 217 },
    { (uint16)93, (uint32)0x00280005, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_INOUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 219 },
    { (uint16)35, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 57 },
    { (uint16)135, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 55 },
    { (uint16)49, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 53 },
    { (uint16)48, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 52 },
    { (uint16)47, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 51 },
    { (uint16)46, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 50 },
    { (uint16)45, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 49 },
    { (uint16)16, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 59 },
    { (uint16)11, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 61 },
    { (uint16)76, (uint32)0x00084000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 82 },
    { (uint16)75, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 81 },
    { (uint16)17, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 54 },
    { (uint16)176, (uint32)0x00200005, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)178, (uint32)0x00200005, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)183, (uint32)0x00200005, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)172, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 253 },
    { (uint16)175, (uint32)0x00200004, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)173, (uint32)0x00200004, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)40, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 255 },
    { (uint16)43, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 260 },
    { (uint16)41, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)42, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 259 },
    { (uint16)66, (uint32)0x00204003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)1, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)0, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)29, (uint32)0x00200004, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)30, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 189 },
    { (uint16)7, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)6, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 190 },
    { (uint16)57, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)58, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 202 },
    { (uint16)112, (uint32)0x00280003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_INOUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 291 },
    { (uint16)136, (uint32)0x00204005, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)37, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)36, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)102, (uint32)0x00204005, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)101, (uint32)0x00204005, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)107, (uint32)0x00204003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)65, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 300 },
    { (uint16)64, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 296 },
    { (uint16)105, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 294 },
    { (uint16)104, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 295 },
    { (uint16)81, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 292 },
    { (uint16)80, (uint32)0x00084000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 293 },
    { (uint16)79, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 301 },
    { (uint16)78, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 302 },
    { (uint16)26, (uint32)0x00280007, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_INOUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 144 },
    { (uint16)185, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)133, (uint32)0x00200004, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)132, (uint32)0x00200004, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)111, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)110, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)109, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)106, (uint32)0x00204002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)86, (uint32)0x00200001, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)140, (uint32)0x00200004, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)94, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)148, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)152, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)155, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)179, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)182, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)184, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)186, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)187, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)189, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)190, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)191, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)192, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)193, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)194, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)195, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)196, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)197, (uint32)0x00200003, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)21, (uint32)0x00200006, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)82, (uint32)0x00200004, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)164, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)165, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)166, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)167, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)168, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)169, (uint32)0x00200002, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)207, (uint32)0x00200005, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)73, (uint32)0x00200007, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)72, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 164 },
    { (uint16)52, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)162, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)203, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)204, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)201, (uint32)0x00280000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_INOUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)202, (uint32)0x00280000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_INOUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)212, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)163, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)142, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)127, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)145, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)216, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)217, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)219, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)218, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)67, (uint32)0x00204000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)50, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)51, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)213, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)77, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)147, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)199, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)131, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 19 },
    { (uint16)113, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)137, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)103, (uint32)0x00204000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)108, (uint32)0x00204000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)34, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 26 },
    { (uint16)27, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)28, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)31, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)53, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)54, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)55, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)56, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)59, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)60, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)61, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)62, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)63, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)83, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)88, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)91, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)118, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)119, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)122, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)161, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)170, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)171, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 35 },
    { (uint16)177, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)198, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 30 },
    { (uint16)200, (uint32)0x00080000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_IN, (boolean)FALSE, (boolean)FALSE, (boolean)TRUE, (boolean)TRUE, 40 },
    { (uint16)208, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)211, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)121, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)0, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 },
    { (uint16)209, (uint32)0x00200000, (uint8)PORT_SIUL2_0_U8, (uint8)1, PORT_PIN_OUT, (boolean)TRUE, (boolean)TRUE, (boolean)TRUE, (boolean)FALSE, 65535 }
};

#ifdef PORT_CODE_SIZE_OPTIMIZATION
#if (STD_OFF == PORT_CODE_SIZE_OPTIMIZATION)

/* SIUL2_0 */
/**
* @brief IMCR configuration set by Port_Init() for SIUL2 instance: SIUL2_0
*/
static const Port_Siul2_ImcrConfigType Port_aSIUL2_0_ImcrInitConfig_MBDT[PORT_SIUL2_0_NUM_IMCRS_U16] =
{
    { (uint8)0x03, (uint8)0 },
    { (uint8)0x03, (uint8)0 },
    { (uint8)0x04, (uint8)0 },
    { (uint8)0x04, (uint8)0 },
    { (uint8)0x04, (uint8)0 },
    { (uint8)0x04, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x04, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x01, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x05, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x04, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x04, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x03, (uint8)0 },
    { (uint8)0x01, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x01, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x07, (uint8)0 },
    { (uint8)0x01, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0x03, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x03, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x04, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x01, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x03, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x03, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x04, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x03, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x04, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x01, (uint8)0 },
    { (uint8)0x01, (uint8)0 },
    { (uint8)0x03, (uint8)0 },
    { (uint8)0x03, (uint8)0 },
    { (uint8)0x04, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0x03, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0x02, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0xFFU, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
    { (uint8)0x00, (uint8)0 },
};

#endif /* (STD_OFF == PORT_CODE_SIZE_OPTIMIZATION) */
#endif /* PORT_CODE_SIZE_OPTIMIZATION */

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/**
* @brief This table contains all the Configured Port Pin parameters and the
*        number of Port Pins configured by the tool for the post-build mode
*/
const Port_ConfigType Port_Config =
{
    PORT_MAX_CONFIGURED_PADS_U16,
    PORT_MAX_UNUSED_PADS_U16,
    {
        PORT_SIUL2_0_NUM_IMCRS_U16
    },
#if (PORT_MAX_UNUSED_PADS_U16 != 0U)
    Port_aUnusedPads_MBDT,
#else
    NULL_PTR,
#endif
    &Port_UnusedPinConfig_MBDT,
    Port_aUsedPinConfigs_MBDT,
#ifdef PORT_CODE_SIZE_OPTIMIZATION
#if (STD_OFF == PORT_CODE_SIZE_OPTIMIZATION)
    {
        Port_aSIUL2_0_ImcrInitConfig_MBDT
    },
#else
    {
        NULL_PTR
    },
#endif /* (STD_OFF == PORT_CODE_SIZE_OPTIMIZATION) */
#endif /* PORT_CODE_SIZE_OPTIMIZATION */
    au32Port_PinToPartitionMap_MBDT,
    au8Port_PartitionList_MBDT,
    g_pin_mux_InitConfigArr_MBDT,
    aTspc_InitConfigArr_MBDT
    };

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

/* End of File */
