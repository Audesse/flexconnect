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
*   @file    Siul2_Port_Ip_MBDT_PBcfg.c
*
*   @addtogroup Port_CFG
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
#include "Siul2_Port_Ip.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SIUL2_PORT_IP_VENDOR_ID_MBDT_PBCFG_C                       43
#define SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_MBDT_PBCFG_C        4
#define SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_MBDT_PBCFG_C        7
#define SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_MBDT_PBCFG_C     0
#define SIUL2_PORT_IP_SW_MAJOR_VERSION_MBDT_PBCFG_C                6
#define SIUL2_PORT_IP_SW_MINOR_VERSION_MBDT_PBCFG_C                0
#define SIUL2_PORT_IP_SW_PATCH_VERSION_MBDT_PBCFG_C                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if Siul2_Port_Ip_MBDT_PBcfg.c and Siul2_Port_Ip.h are of the same vendor */
#if (SIUL2_PORT_IP_VENDOR_ID_MBDT_PBCFG_C != SIUL2_PORT_IP_VENDOR_ID_H)
    #error "Siul2_Port_Ip_MBDT_PBcfg.c and Siul2_Port_Ip.h have different vendor ids"
#endif
/* Check if Siul2_Port_Ip_MBDT_PBcfg.c and Siul2_Port_Ip.h are of the same Autosar version */
#if ((SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_MBDT_PBCFG_C    != SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_H) || \
     (SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_MBDT_PBCFG_C    != SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_H) || \
     (SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_MBDT_PBCFG_C != SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Siul2_Port_Ip_MBDT_PBcfg.c and Siul2_Port_Ip.h are different"
#endif

/* Check if Siul2_Port_Ip_MBDT_PBcfg.c and Siul2_Port_Ip.h are of the same software version */
#if ((SIUL2_PORT_IP_SW_MAJOR_VERSION_MBDT_PBCFG_C != SIUL2_PORT_IP_SW_MAJOR_VERSION_H) || \
     (SIUL2_PORT_IP_SW_MINOR_VERSION_MBDT_PBCFG_C != SIUL2_PORT_IP_SW_MINOR_VERSION_H) || \
     (SIUL2_PORT_IP_SW_PATCH_VERSION_MBDT_PBCFG_C != SIUL2_PORT_IP_SW_PATCH_VERSION_H)    \
    )
    #error "Software Version Numbers of Siul2_Port_Ip_MBDT_PBcfg.c and Siul2_Port_Ip.h are different"
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
#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"


const Siul2_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr_MBDT[NUM_OF_CONFIGURED_PINS] = 
{
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 144,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 143,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 97,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 139,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 138,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 100,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 99,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 98,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 9,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 8,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 89,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 90,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 116,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 117,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 96,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 154,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 153,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 74,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 44,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 3,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 2,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 71,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 15,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 134,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 130,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 14,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 13,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 12,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 129,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 128,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 120,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 123,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 124,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_EN_ADC1_S22_0,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 125,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_EN_ADC1_S23_0,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 18,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 19,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 20,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 149,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 150,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 151,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 87,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 95,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 126,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 146,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 2,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 32,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT3,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 33,
        .mux                   = PORT_MUX_ALT5,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 22,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   1
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT3,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 23,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 115,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   2
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT4,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 114,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 157,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   3
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT4,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 156,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 159,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   4
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT4,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 158,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 206,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   5
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT4,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 205,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 180,
        .mux                   = PORT_MUX_ALT4,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   212
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT3,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 181,
        .mux                   = PORT_MUX_ALT4,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   214
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT3,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 92,
        .mux                   = PORT_MUX_ALT5,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   217
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT4,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 93,
        .mux                   = PORT_MUX_ALT5,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   219
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT3,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 35,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   57
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 135,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   55
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 49,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   53
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 48,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   52
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 47,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   51
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT1,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 46,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   50
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT3,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 45,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   49
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 16,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   59
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 11,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   61
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT1,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 76,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_SLOWEST,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   82
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT1,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 75,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   81
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT7,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 17,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   54
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 176,
        .mux                   = PORT_MUX_ALT5,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 178,
        .mux                   = PORT_MUX_ALT5,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 183,
        .mux                   = PORT_MUX_ALT5,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 172,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   253
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT4,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 175,
        .mux                   = PORT_MUX_ALT4,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 173,
        .mux                   = PORT_MUX_ALT4,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 40,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   255
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 43,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   260
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 41,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 42,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   259
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 66,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_SLOWEST,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 1,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 0,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 29,
        .mux                   = PORT_MUX_ALT4,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 30,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   189
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT4,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 7,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 6,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   190
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 57,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 58,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   202
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT1,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 112,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   291
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 136,
        .mux                   = PORT_MUX_ALT5,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_SLOWEST,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 37,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 36,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 102,
        .mux                   = PORT_MUX_ALT5,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_SLOWEST,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 101,
        .mux                   = PORT_MUX_ALT5,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_SLOWEST,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 107,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_SLOWEST,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 65,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   300
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT3,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 64,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   296
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT4,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 105,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   294
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT3,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 104,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   295
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT3,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 81,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   292
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT1,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 80,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_SLOWEST,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   293
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT1,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 79,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   301
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 78,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   302
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT2,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 26,
        .mux                   = PORT_MUX_ALT7,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   144
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT3,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 185,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 133,
        .mux                   = PORT_MUX_ALT4,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 132,
        .mux                   = PORT_MUX_ALT4,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 111,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 110,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 109,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 106,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_SLOWEST,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 86,
        .mux                   = PORT_MUX_ALT1,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 140,
        .mux                   = PORT_MUX_ALT4,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 94,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 148,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 152,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 155,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 179,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 182,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 184,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 186,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 187,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 189,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 190,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 191,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 192,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 193,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 194,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 195,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 196,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 197,
        .mux                   = PORT_MUX_ALT3,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 21,
        .mux                   = PORT_MUX_ALT6,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 82,
        .mux                   = PORT_MUX_ALT4,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 164,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 165,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 166,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 167,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 168,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 169,
        .mux                   = PORT_MUX_ALT2,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 207,
        .mux                   = PORT_MUX_ALT5,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 73,
        .mux                   = PORT_MUX_ALT7,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 72,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   164
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT3,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 52,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 162,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 203,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 204,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 201,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 202,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 212,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 163,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 142,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 127,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 145,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 216,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 217,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 219,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 218,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 67,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_SLOWEST,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 50,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 51,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 213,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 77,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 147,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 199,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 131,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   19
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT4,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 113,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 137,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 103,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_SLOWEST,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 108,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_SLOWEST,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 34,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   26
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT1,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 27,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 28,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 31,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 53,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 54,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 55,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 56,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 59,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 60,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 61,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 62,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 63,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 83,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 88,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 91,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 118,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 119,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 122,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 161,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 170,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 171,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   35
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT4,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 177,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 198,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   30
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT5,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 200,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   40
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_ALT4,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 208,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 211,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 121,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_NOT_AVAILABLE,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 0,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    },
    {
        .base                  = IP_SIUL2,
        .pinPortIdx            = 209,
        .mux                   = PORT_MUX_AS_GPIO,
        .safeMode              = PORT_SAFE_MODE_DISABLED,
        .pullConfig            = PORT_INTERNAL_PULL_NOT_ENABLED,
        .driveStrength         = PORT_DRIVE_STRENTGTH_DISABLED,
        .inputFilter           = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullKeep              = PORT_PULL_KEEP_DISABLED,
        .invert                = PORT_INVERT_DISABLED,
        .slewRateCtrlSel       = PORT_SLEW_RATE_NOT_AVAILABLE,
        .inputBuffer           = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer          = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves        = {
                                   MUX_MODE_NOT_AVAILABLE,
                                   MUX_MODE_NOT_AVAILABLE
                                 },
        .initValue             = 1,
        .inputMuxReg           = {
                                   0
                                 },
        .inputMux              = {
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT,
                                   PORT_INPUT_MUX_NO_INIT
                                 }
    }
};
#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

