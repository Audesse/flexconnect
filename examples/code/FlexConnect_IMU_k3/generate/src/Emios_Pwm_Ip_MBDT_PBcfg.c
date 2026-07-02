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
*   @file       Emios_Pwm_Ip_MBDT_PBcfg.c
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
#include "Emios_Pwm_Ip_Cfg.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define EMIOS_PWM_IP_MBDT_PB_CFG_VENDOR_ID_C                       43
#define EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_MAJOR_VERSION_C        4
#define EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_MINOR_VERSION_C        7
#define EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_REVISION_VERSION_C     0
#define EMIOS_PWM_IP_MBDT_PB_CFG_SW_MAJOR_VERSION_C                6
#define EMIOS_PWM_IP_MBDT_PB_CFG_SW_MINOR_VERSION_C                0
#define EMIOS_PWM_IP_MBDT_PB_CFG_SW_PATCH_VERSION_C                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and Emios_Pwm_Ip_Cfg.h file are of the same vendor */
#if (EMIOS_PWM_IP_MBDT_PB_CFG_VENDOR_ID_C != EMIOS_PWM_IP_CFG_VENDOR_ID)
    #error "Vendor IDs of Emios_Pwm_Ip_MBDT_PBcfg.c and Emios_Pwm_Ip_Cfg.h are different."
#endif

/* Check if source file and Emios_Pwm_Ip_Cfg.h file are of the same AUTOSAR version */
#if ((EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_MAJOR_VERSION_C    != EMIOS_PWM_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_MINOR_VERSION_C    != EMIOS_PWM_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (EMIOS_PWM_IP_MBDT_PB_CFG_AR_RELEASE_REVISION_VERSION_C != EMIOS_PWM_IP_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Emios_Pwm_Ip_MBDT_PBcfg.c and Emios_Pwm_Ip_Cfg.h are different."
#endif

/* Check if source file and Emios_Pwm_Ip_Cfg.h file are of the same Software version */
#if ((EMIOS_PWM_IP_MBDT_PB_CFG_SW_MAJOR_VERSION_C != EMIOS_PWM_IP_CFG_SW_MAJOR_VERSION)  || \
     (EMIOS_PWM_IP_MBDT_PB_CFG_SW_MINOR_VERSION_C != EMIOS_PWM_IP_CFG_SW_MINOR_VERSION)  || \
     (EMIOS_PWM_IP_MBDT_PB_CFG_SW_PATCH_VERSION_C != EMIOS_PWM_IP_CFG_SW_PATCH_VERSION))
    #error "Software version numbers of Emios_Pwm_Ip_MBDT_PBcfg.c and Emios_Pwm_Ip_Cfg.h are different."
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
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"

/** @brief  Prototypes of Emios channels User Notifications */
extern void Pwm_Ipw_EmiosNotification(uint8 Channel);

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
#ifndef EMIOS_PWM_IP_PRECOMPILE_SUPPORT
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"

/*******************************************************************************
 * Emios_0 initialization configuration structures
 ******************************************************************************/

/* Emios PWM mode configuration structure for PwmEmios_0/PwmEmios0Channels_0 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch0 =
{
    /* .ChannelId */            0U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_F,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)0U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_0/PwmEmios0Channels_8 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch8 =
{
    /* .ChannelId */            8U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_F,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)8U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_0/PwmEmios0Channels_16 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch16 =
{
    /* .ChannelId */            16U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_F,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)16U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_0/PwmEmios0Channels_18 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch18 =
{
    /* .ChannelId */            18U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_F,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)18U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_0/PwmEmios0Channels_19 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch19 =
{
    /* .ChannelId */            19U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_F,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)19U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_0/PwmEmios0Channels_20 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch20 =
{
    /* .ChannelId */            20U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_F,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)20U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_0/PwmEmios0Channels_21 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I0_Ch21 =
{
    /* .ChannelId */            21U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_F,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)21U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/*******************************************************************************
 * Emios_1 initialization configuration structures
 ******************************************************************************/

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_0 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch0 =
{
    /* .ChannelId */            0U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)24U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_3 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch3 =
{
    /* .ChannelId */            3U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)27U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_4 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch4 =
{
    /* .ChannelId */            4U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)28U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_5 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch5 =
{
    /* .ChannelId */            5U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)29U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_8 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch8 =
{
    /* .ChannelId */            8U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)32U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_10 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch10 =
{
    /* .ChannelId */            10U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)34U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_12 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch12 =
{
    /* .ChannelId */            12U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)36U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_13 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch13 =
{
    /* .ChannelId */            13U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)37U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_16 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch16 =
{
    /* .ChannelId */            16U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)40U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_17 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch17 =
{
    /* .ChannelId */            17U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)41U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_18 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch18 =
{
    /* .ChannelId */            18U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)42U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_19 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch19 =
{
    /* .ChannelId */            19U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)43U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_20 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch20 =
{
    /* .ChannelId */            20U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)44U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_21 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch21 =
{
    /* .ChannelId */            21U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)45U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_6 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch6 =
{
    /* .ChannelId */            6U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)30U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_7 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch7 =
{
    /* .ChannelId */            7U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)31U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_9 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch9 =
{
    /* .ChannelId */            9U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)33U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_11 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch11 =
{
    /* .ChannelId */            11U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)35U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_14 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch14 =
{
    /* .ChannelId */            14U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)38U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_1/PwmEmios1Channels_15 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I1_Ch15 =
{
    /* .ChannelId */            15U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_1,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_INTERRUPT_REQUEST,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)39U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/*******************************************************************************
 * Emios_2 initialization configuration structures
 ******************************************************************************/

/* Emios PWM mode configuration structure for PwmEmios_2/PwmEmios2Channels_3 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch3 =
{
    /* .ChannelId */            3U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_NOTIFICATION_DISABLED,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)51U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_2/PwmEmios2Channels_4 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch4 =
{
    /* .ChannelId */            4U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_NOTIFICATION_DISABLED,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)52U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_2/PwmEmios2Channels_5 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch5 =
{
    /* .ChannelId */            5U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_NOTIFICATION_DISABLED,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)53U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_2/PwmEmios2Channels_6 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch6 =
{
    /* .ChannelId */            6U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_NOTIFICATION_DISABLED,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)54U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_2/PwmEmios2Channels_7 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch7 =
{
    /* .ChannelId */            7U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_NOTIFICATION_DISABLED,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)55U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_2/PwmEmios2Channels_8 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch8 =
{
    /* .ChannelId */            8U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_NOTIFICATION_DISABLED,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)56U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_2/PwmEmios2Channels_9 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch9 =
{
    /* .ChannelId */            9U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_NOTIFICATION_DISABLED,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)57U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_2/PwmEmios2Channels_12 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch12 =
{
    /* .ChannelId */            12U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_NOTIFICATION_DISABLED,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)60U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};

/* Emios PWM mode configuration structure for PwmEmios_2/PwmEmios2Channels_15 */
const Emios_Pwm_Ip_ChannelConfigType Emios_Pwm_Ip_MBDT_I2_Ch15 =
{
    /* .ChannelId */            15U,
    /* .Mode */                 EMIOS_PWM_IP_MODE_OPWMB_FLAG,
    /* .Timebase */             EMIOS_PWM_IP_BUS_A,
    /* .DebugMode */            (boolean)FALSE,
    /* .OutputDisableSource */  EMIOS_PWM_IP_OUTPUT_DISABLE_NONE,
    /* .InternalPs */           EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsAlternate */  EMIOS_PWM_IP_CLOCK_DIV_2,
    /* .InternalPsSrc */        EMIOS_PWM_IP_PS_SRC_MODULE_CLOCK,
    /* .OutputPolarity */       EMIOS_PWM_IP_ACTIVE_HIGH,
    /* .IrqMode */              EMIOS_PWM_IP_NOTIFICATION_DISABLED,
    /* .UserCallback */         {
            /* .CbFunction */       &Pwm_Ipw_EmiosNotification,
            /* .CbParameter */      (uint8)63U
                                },
    /* .PeriodCount */          32000U,
    /* .DutyCycle */            0U,
    /* .PhaseShift */           0U,
    /* .DeadTime */             0U,
    /* .TriggerPosition */      0U
};


#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"
#endif  /* EMIOS_PWM_IP_PRECOMPILE_SUPPORT */

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

