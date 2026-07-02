/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : Emios Flexio FlexPwm eTpu
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

#ifndef EMIOS_PWM_IP_MBDT_PBCFG_H
#define EMIOS_PWM_IP_MBDT_PBCFG_H

/**
*   @file       Emios_Pwm_Ip_MBDT_PBcfg.h
*
*   @addtogroup emios_pwm_ip Emios Pwm IPL
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Emios_Pwm_Ip_Types.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMIOS_PWM_IP_MBDT_PB_CFG_VENDOR_ID                       43
#define EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_MAJOR_VERSION        4
#define EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_MINOR_VERSION        7
#define EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_REVISION_VERSION     0
#define EMIOS_PWM_IP_MBDT_PB_CFG_SW_MAJOR_VERSION                6
#define EMIOS_PWM_IP_MBDT_PB_CFG_SW_MINOR_VERSION                0
#define EMIOS_PWM_IP_MBDT_PB_CFG_SW_PATCH_VERSION                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Emios_Pwm_Ip_Types header file are of the same vendor */
#if (EMIOS_PWM_IP_MBDT_PB_CFG_VENDOR_ID != EMIOS_PWM_IP_TYPES_VENDOR_ID)
    #error "Vendor IDs of Emios_Pwm_Ip_MBDT_PBcfg.h and Emios_Pwm_Ip_Types.h are different."
#endif

/* Check if header file and Emios_Pwm_Ip_Types header file are of the same AUTOSAR version */
#if ((EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_MAJOR_VERSION    != EMIOS_PWM_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_MINOR_VERSION    != EMIOS_PWM_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_REVISION_VERSION != EMIOS_PWM_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Emios_Pwm_Ip_MBDT_PBcfg.h and Emios_Pwm_Ip_Types.h are different."
#endif

/* Check if header file and Emios_Pwm_Ip_Types header file are of the same software version */
#if ((EMIOS_PWM_IP_MBDT_PB_CFG_SW_MAJOR_VERSION != EMIOS_PWM_IP_TYPES_SW_MAJOR_VERSION) || \
     (EMIOS_PWM_IP_MBDT_PB_CFG_SW_MINOR_VERSION != EMIOS_PWM_IP_TYPES_SW_MINOR_VERSION) || \
     (EMIOS_PWM_IP_MBDT_PB_CFG_SW_PATCH_VERSION != EMIOS_PWM_IP_TYPES_SW_PATCH_VERSION))
    #error "Software version numbers of Emios_Pwm_Ip_MBDT_PBcfg.h and Emios_Pwm_Ip_Types.h are different."
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/
/* Emios instance index for configuration PwmEmios_0/PwmEmios0Channels_0 */
#define EMIOS_PWM_IP_MBDT_I0_CH0_CFG      (0U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_0/PwmEmios0Channels_8 */
#define EMIOS_PWM_IP_MBDT_I0_CH8_CFG      (0U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_0/PwmEmios0Channels_16 */
#define EMIOS_PWM_IP_MBDT_I0_CH16_CFG      (0U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_0/PwmEmios0Channels_18 */
#define EMIOS_PWM_IP_MBDT_I0_CH18_CFG      (0U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_0/PwmEmios0Channels_19 */
#define EMIOS_PWM_IP_MBDT_I0_CH19_CFG      (0U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_0/PwmEmios0Channels_20 */
#define EMIOS_PWM_IP_MBDT_I0_CH20_CFG      (0U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_0/PwmEmios0Channels_21 */
#define EMIOS_PWM_IP_MBDT_I0_CH21_CFG      (0U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_0 */
#define EMIOS_PWM_IP_MBDT_I1_CH0_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_3 */
#define EMIOS_PWM_IP_MBDT_I1_CH3_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_4 */
#define EMIOS_PWM_IP_MBDT_I1_CH4_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_5 */
#define EMIOS_PWM_IP_MBDT_I1_CH5_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_8 */
#define EMIOS_PWM_IP_MBDT_I1_CH8_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_10 */
#define EMIOS_PWM_IP_MBDT_I1_CH10_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_12 */
#define EMIOS_PWM_IP_MBDT_I1_CH12_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_13 */
#define EMIOS_PWM_IP_MBDT_I1_CH13_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_16 */
#define EMIOS_PWM_IP_MBDT_I1_CH16_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_17 */
#define EMIOS_PWM_IP_MBDT_I1_CH17_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_18 */
#define EMIOS_PWM_IP_MBDT_I1_CH18_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_19 */
#define EMIOS_PWM_IP_MBDT_I1_CH19_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_20 */
#define EMIOS_PWM_IP_MBDT_I1_CH20_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_21 */
#define EMIOS_PWM_IP_MBDT_I1_CH21_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_6 */
#define EMIOS_PWM_IP_MBDT_I1_CH6_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_7 */
#define EMIOS_PWM_IP_MBDT_I1_CH7_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_9 */
#define EMIOS_PWM_IP_MBDT_I1_CH9_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_11 */
#define EMIOS_PWM_IP_MBDT_I1_CH11_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_14 */
#define EMIOS_PWM_IP_MBDT_I1_CH14_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_1/PwmEmios1Channels_15 */
#define EMIOS_PWM_IP_MBDT_I1_CH15_CFG      (1U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_2/PwmEmios2Channels_3 */
#define EMIOS_PWM_IP_MBDT_I2_CH3_CFG      (2U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_2/PwmEmios2Channels_4 */
#define EMIOS_PWM_IP_MBDT_I2_CH4_CFG      (2U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_2/PwmEmios2Channels_5 */
#define EMIOS_PWM_IP_MBDT_I2_CH5_CFG      (2U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_2/PwmEmios2Channels_6 */
#define EMIOS_PWM_IP_MBDT_I2_CH6_CFG      (2U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_2/PwmEmios2Channels_7 */
#define EMIOS_PWM_IP_MBDT_I2_CH7_CFG      (2U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_2/PwmEmios2Channels_8 */
#define EMIOS_PWM_IP_MBDT_I2_CH8_CFG      (2U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_2/PwmEmios2Channels_9 */
#define EMIOS_PWM_IP_MBDT_I2_CH9_CFG      (2U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_2/PwmEmios2Channels_12 */
#define EMIOS_PWM_IP_MBDT_I2_CH12_CFG      (2U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif

/* Emios instance index for configuration PwmEmios_2/PwmEmios2Channels_15 */
#define EMIOS_PWM_IP_MBDT_I2_CH15_CFG      (2U)
/* Macro to enable the mode operations. */
#ifndef EMIOS_PWM_IP_MODE_OPWMB_USED
#define EMIOS_PWM_IP_MODE_OPWMB_USED
#endif


/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#ifndef EMIOS_PWM_IP_PRECOMPILE_SUPPORT
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"

/* Channel configurations for Emios instance 0 */
/* Emios channel 0 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch0;

/* Emios channel 8 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch8;

/* Emios channel 16 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch16;

/* Emios channel 18 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch18;

/* Emios channel 19 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch19;

/* Emios channel 20 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch20;

/* Emios channel 21 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch21;


/* Channel configurations for Emios instance 1 */
/* Emios channel 0 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch0;

/* Emios channel 3 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch3;

/* Emios channel 4 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch4;

/* Emios channel 5 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch5;

/* Emios channel 8 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch8;

/* Emios channel 10 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch10;

/* Emios channel 12 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch12;

/* Emios channel 13 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch13;

/* Emios channel 16 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch16;

/* Emios channel 17 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch17;

/* Emios channel 18 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch18;

/* Emios channel 19 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch19;

/* Emios channel 20 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch20;

/* Emios channel 21 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch21;

/* Emios channel 6 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch6;

/* Emios channel 7 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch7;

/* Emios channel 9 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch9;

/* Emios channel 11 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch11;

/* Emios channel 14 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch14;

/* Emios channel 15 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch15;


/* Channel configurations for Emios instance 2 */
/* Emios channel 3 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch3;

/* Emios channel 4 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch4;

/* Emios channel 5 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch5;

/* Emios channel 6 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch6;

/* Emios channel 7 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch7;

/* Emios channel 8 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch8;

/* Emios channel 9 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch9;

/* Emios channel 12 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch12;

/* Emios channel 15 configuration */
extern const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch15;

#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"
#endif  /* EMIOS_PWM_IP_PRECOMPILE_SUPPORT */

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* EMIOS_PWM_IP_MBDT_PBCFG_H */

