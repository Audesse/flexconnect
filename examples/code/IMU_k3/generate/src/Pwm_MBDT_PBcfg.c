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

/**
*   @file       Pwm_MBDT_PBcfg.c
*
*   @addtogroup pwm_driver Pwm Driver
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
#include "Std_Types.h"
#include "Pwm.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PWM_MBDT_PB_CFG_VENDOR_ID_C                       43
#define PWM_MBDT_PB_CFG_AR_RELEASE_MAJOR_VERSION_C        4
#define PWM_MBDT_PB_CFG_AR_RELEASE_MINOR_VERSION_C        7
#define PWM_MBDT_PB_CFG_AR_RELEASE_REVISION_VERSION_C     0
#define PWM_MBDT_PB_CFG_SW_MAJOR_VERSION_C                6
#define PWM_MBDT_PB_CFG_SW_MINOR_VERSION_C                0
#define PWM_MBDT_PB_CFG_SW_PATCH_VERSION_C                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and Std_Types.h are of the same AUTOSAR version */
    #if ((PWM_MBDT_PB_CFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
         (PWM_MBDT_PB_CFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR version numbers of Pwm_MBDT_PBcfg.c and Std_Types.h are different."
    #endif
#endif

#if (PWM_MBDT_PB_CFG_VENDOR_ID_C != PWM_VENDOR_ID)
    #error "Pwm_MBDT_PBcfg.c and Pwm.h have different vendor ids"
#endif

#if ((PWM_MBDT_PB_CFG_AR_RELEASE_MAJOR_VERSION_C    != PWM_AR_RELEASE_MAJOR_VERSION) || \
     (PWM_MBDT_PB_CFG_AR_RELEASE_MINOR_VERSION_C    != PWM_AR_RELEASE_MINOR_VERSION) || \
     (PWM_MBDT_PB_CFG_AR_RELEASE_REVISION_VERSION_C != PWM_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Pwm_MBDT_PBcfg.c and Pwm.h are different"
#endif

#if ((PWM_MBDT_PB_CFG_SW_MAJOR_VERSION_C != PWM_SW_MAJOR_VERSION) || \
     (PWM_MBDT_PB_CFG_SW_MINOR_VERSION_C != PWM_SW_MINOR_VERSION) || \
     (PWM_MBDT_PB_CFG_SW_PATCH_VERSION_C != PWM_SW_PATCH_VERSION))
    #error "Software version numbers of Pwm_MBDT_PBcfg.c and Pwm.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"


#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"

/*============================== Channels configuration ===================================*/
/**
* @brief        Array of configured PWM channels
*
*/
static const Pwm_ChannelConfigType Pwm_Channels_MBDT_PB[PWM_MBDT_PB_CFG_CHANNELS_COUNT] =
{
    /* PWM_LSO1 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)0U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I0_Ch0),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I0_CH0_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO6 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)1U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I0_Ch8),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I0_CH8_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO4 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)2U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I0_Ch16),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I0_CH16_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO12 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)3U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I0_Ch18),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I0_CH18_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO11 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)4U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I0_Ch19),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I0_CH19_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO3 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)5U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I0_Ch20),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I0_CH20_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO2 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)6U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I0_Ch21),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I0_CH21_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO15 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)7U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch0),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH0_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO18 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)8U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch3),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH3_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO16 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)9U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch4),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH4_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO14 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)10U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch5),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH5_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO2 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)11U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch8),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH8_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO4 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)12U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch10),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH10_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO7 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)13U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch12),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH12_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO6 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)14U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch13),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH13_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO9 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)15U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch16),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH16_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO10 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)16U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch17),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH17_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO11 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)17U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch18),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH18_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO12 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)18U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch19),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH19_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO13 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)19U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch20),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH20_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO14 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)20U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch21),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH21_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO9 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)21U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I2_Ch3),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I2_CH3_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HB1_H */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)22U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I2_Ch4),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I2_CH4_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HB1_L */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)23U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I2_Ch5),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I2_CH5_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HB2_H */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)24U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I2_Ch6),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I2_CH6_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HB2_L */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)25U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I2_Ch7),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I2_CH7_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HB3_H */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)26U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I2_Ch8),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I2_CH8_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HB3_L */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)27U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I2_Ch9),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I2_CH9_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO10 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)28U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I2_Ch12),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I2_CH12_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO16 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)29U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I2_Ch15),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I2_CH15_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO1 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)30U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch6),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH6_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_LSO17 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)31U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch7),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH7_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO3 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)32U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch9),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH9_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO5 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)33U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch11),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH11_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO7 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)34U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch14),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH14_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    },
    /* PWM_HSO8 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)35U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_MBDT_I1_Ch15),
        #if (defined(PWM_FTM_USED) && (PWM_FTM_USED == STD_ON))
            /** @brief  Pointer to the Ftm ip Channel Configuration */
            NULL_PTR,
        #endif
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
            /** @brief  Alternate Clock for flexio channel */
            FLEXIO_PWM_IP_CLK_DIV_1,
        #endif
        #if (defined(PWM_FLEXPWM_USED) && (PWM_FLEXPWM_USED == STD_ON))
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETPU_USED) && (PWM_ETPU_USED == STD_ON))
            /** @brief  Pointer to the Etpu_Pwm ip channel instance structure */
            NULL_PTR,
            /** @brief  Pointer to the Etpu_Pwm ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (defined(PWM_GTM_USED) && (PWM_GTM_USED == STD_ON))
            /** @brief  Pointer to the Gtm ip channel configuration structure */
            NULL_PTR,
            /** @brief  Hardware Channel Type */
            PWM_GTM_NONE,
            /** @brief  Hardware Channel Cluster Number */
            0U,
            /** @brief  Hardware Channel Number */
            0U,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_MBDT_I1_CH15_CFG,
            /** @brief The duty cycle of this channel */
            0U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        NULL_PTR
    }
};


/*============================== High level configuration ===================================*/
const Pwm_ConfigType Pwm_Config_MBDT =
{
    /** @brief  Number of configured PWM channels */
    (Pwm_ChannelType)PWM_MBDT_PB_CFG_CHANNELS_COUNT,
    /** @brief  Pointer to array of PWM channels */
    &Pwm_Channels_MBDT_PB,
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    /** @brief  Hardware to logic channel map. Array containing a number of elements
                equal to total number of available channels on all IP. */
    {
        /*---------------------eMIOS_0---------------------------*/
        (Pwm_ChannelType)0,            /* Emios_0_0 */
        (Pwm_ChannelType)255,            /* Emios_0_1 unused */
        (Pwm_ChannelType)255,            /* Emios_0_2 unused */
        (Pwm_ChannelType)255,            /* Emios_0_3 unused */
        (Pwm_ChannelType)255,            /* Emios_0_4 unused */
        (Pwm_ChannelType)255,            /* Emios_0_5 unused */
        (Pwm_ChannelType)255,            /* Emios_0_6 unused */
        (Pwm_ChannelType)255,            /* Emios_0_7 unused */
        (Pwm_ChannelType)1,            /* Emios_0_8 */
        (Pwm_ChannelType)255,            /* Emios_0_9 unused */
        (Pwm_ChannelType)255,            /* Emios_0_10 unused */
        (Pwm_ChannelType)255,            /* Emios_0_11 unused */
        (Pwm_ChannelType)255,            /* Emios_0_12 unused */
        (Pwm_ChannelType)255,            /* Emios_0_13 unused */
        (Pwm_ChannelType)255,            /* Emios_0_14 unused */
        (Pwm_ChannelType)255,            /* Emios_0_15 unused */
        (Pwm_ChannelType)2,            /* Emios_0_16 */
        (Pwm_ChannelType)255,            /* Emios_0_17 unused */
        (Pwm_ChannelType)3,            /* Emios_0_18 */
        (Pwm_ChannelType)4,            /* Emios_0_19 */
        (Pwm_ChannelType)5,            /* Emios_0_20 */
        (Pwm_ChannelType)6,            /* Emios_0_21 */
        (Pwm_ChannelType)255,            /* Emios_0_22 unused */
        (Pwm_ChannelType)255,            /* Emios_0_23 unused */
        /*---------------------eMIOS_1---------------------------*/
        (Pwm_ChannelType)7,            /* Emios_1_0 */
        (Pwm_ChannelType)255,            /* Emios_1_1 unused */
        (Pwm_ChannelType)255,            /* Emios_1_2 unused */
        (Pwm_ChannelType)8,            /* Emios_1_3 */
        (Pwm_ChannelType)9,            /* Emios_1_4 */
        (Pwm_ChannelType)10,            /* Emios_1_5 */
        (Pwm_ChannelType)30,            /* Emios_1_6 */
        (Pwm_ChannelType)31,            /* Emios_1_7 */
        (Pwm_ChannelType)11,            /* Emios_1_8 */
        (Pwm_ChannelType)32,            /* Emios_1_9 */
        (Pwm_ChannelType)12,            /* Emios_1_10 */
        (Pwm_ChannelType)33,            /* Emios_1_11 */
        (Pwm_ChannelType)13,            /* Emios_1_12 */
        (Pwm_ChannelType)14,            /* Emios_1_13 */
        (Pwm_ChannelType)34,            /* Emios_1_14 */
        (Pwm_ChannelType)35,            /* Emios_1_15 */
        (Pwm_ChannelType)15,            /* Emios_1_16 */
        (Pwm_ChannelType)16,            /* Emios_1_17 */
        (Pwm_ChannelType)17,            /* Emios_1_18 */
        (Pwm_ChannelType)18,            /* Emios_1_19 */
        (Pwm_ChannelType)19,            /* Emios_1_20 */
        (Pwm_ChannelType)20,            /* Emios_1_21 */
        (Pwm_ChannelType)255,            /* Emios_1_22 unused */
        (Pwm_ChannelType)255,            /* Emios_1_23 unused */
        /*---------------------eMIOS_2---------------------------*/
        (Pwm_ChannelType)255,            /* Emios_2_0 unused */
        (Pwm_ChannelType)255,            /* Emios_2_1 unused */
        (Pwm_ChannelType)255,            /* Emios_2_2 unused */
        (Pwm_ChannelType)21,            /* Emios_2_3 */
        (Pwm_ChannelType)22,            /* Emios_2_4 */
        (Pwm_ChannelType)23,            /* Emios_2_5 */
        (Pwm_ChannelType)24,            /* Emios_2_6 */
        (Pwm_ChannelType)25,            /* Emios_2_7 */
        (Pwm_ChannelType)26,            /* Emios_2_8 */
        (Pwm_ChannelType)27,            /* Emios_2_9 */
        (Pwm_ChannelType)255,            /* Emios_2_10 unused */
        (Pwm_ChannelType)255,            /* Emios_2_11 unused */
        (Pwm_ChannelType)28,            /* Emios_2_12 */
        (Pwm_ChannelType)255,            /* Emios_2_13 unused */
        (Pwm_ChannelType)255,            /* Emios_2_14 unused */
        (Pwm_ChannelType)29,            /* Emios_2_15 */
        (Pwm_ChannelType)255,            /* Emios_2_16 unused */
        (Pwm_ChannelType)255,            /* Emios_2_17 unused */
        (Pwm_ChannelType)255,            /* Emios_2_18 unused */
        (Pwm_ChannelType)255,            /* Emios_2_19 unused */
        (Pwm_ChannelType)255,            /* Emios_2_20 unused */
        (Pwm_ChannelType)255,            /* Emios_2_21 unused */
        (Pwm_ChannelType)255,            /* Emios_2_22 unused */
        (Pwm_ChannelType)255,            /* Emios_2_23 unused */
        /*---------------------Flexio_0---------------------------*/
        (Pwm_ChannelType)255,            /* Flexio_0_0 unused */
        (Pwm_ChannelType)255,            /* Flexio_0_1 unused */
        (Pwm_ChannelType)255,            /* Flexio_0_2 unused */
        (Pwm_ChannelType)255,            /* Flexio_0_3 unused */
        (Pwm_ChannelType)255,            /* Flexio_0_4 unused */
        (Pwm_ChannelType)255,            /* Flexio_0_5 unused */
        (Pwm_ChannelType)255,            /* Flexio_0_6 unused */
        (Pwm_ChannelType)255            /* Flexio_0_7 unused */
    }
#endif
};


#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */

