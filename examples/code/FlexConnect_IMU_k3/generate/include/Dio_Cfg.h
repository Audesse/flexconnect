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

#ifndef DIO_CFG_H
#define DIO_CFG_H

#ifdef __cplusplus
extern "C"{
#endif


/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
#include "Std_Types.h"
#include "Siul2_Dio_Ip_Cfg.h"

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
#define DIO_VENDOR_ID_CFG_H                   43
#define DIO_AR_RELEASE_MAJOR_VERSION_CFG_H    4
#define DIO_AR_RELEASE_MINOR_VERSION_CFG_H    7
#define DIO_AR_RELEASE_REVISION_VERSION_CFG_H 0
#define DIO_SW_MAJOR_VERSION_CFG_H            6
#define DIO_SW_MINOR_VERSION_CFG_H            0
#define DIO_SW_PATCH_VERSION_CFG_H            0

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if Dio_Cfg.h and Std_Types.h file are of the same Autosar version */
    #if ((DIO_AR_RELEASE_MAJOR_VERSION_CFG_H != STD_AR_RELEASE_MAJOR_VERSION) ||   \
        (DIO_AR_RELEASE_MINOR_VERSION_CFG_H != STD_AR_RELEASE_MINOR_VERSION)       \
        )
        #error "AUTOSAR Version Numbers of Dio_Cfg.h and Std_Types.h are different"
    #endif
#endif

/* Check if Dio_Cfg.h and Siul2_Dio_Ip_Cfg.h files are of the same vendor.*/
#if (DIO_VENDOR_ID_CFG_H != SIUL2_DIO_IP_VENDOR_ID_CFG_H)
    #error "Dio_Cfg.h and Siul2_Dio_Ip_Cfg.h have different vendor ids"
#endif
/* Check if Dio_Cfg.h and Siul2_Dio_Ip_Cfg.h files are of the same Autosar version.*/
#if ((DIO_AR_RELEASE_MAJOR_VERSION_CFG_H    != SIUL2_DIO_IP_AR_RELEASE_MAJOR_VERSION_CFG_H) || \
     (DIO_AR_RELEASE_MINOR_VERSION_CFG_H    != SIUL2_DIO_IP_AR_RELEASE_MINOR_VERSION_CFG_H) || \
     (DIO_AR_RELEASE_REVISION_VERSION_CFG_H != SIUL2_DIO_IP_AR_RELEASE_REVISION_VERSION_CFG_H) \
    )
    #error "AutoSar Version Numbers of Dio_Cfg.h and Siul2_Dio_Ip_Cfg.h are different"
#endif
/* Check if Dio_Cfg.h and Siul2_Dio_Ip_Cfg.h files are of the same Software version.*/
#if ((DIO_SW_MAJOR_VERSION_CFG_H != SIUL2_DIO_IP_SW_MAJOR_VERSION_CFG_H) || \
     (DIO_SW_MINOR_VERSION_CFG_H != SIUL2_DIO_IP_SW_MINOR_VERSION_CFG_H) || \
     (DIO_SW_PATCH_VERSION_CFG_H != SIUL2_DIO_IP_SW_PATCH_VERSION_CFG_H)    \
    )
    #error "Software Version Numbers of Dio_Cfg.h and Siul2_Dio_Ip_Cfg.h are different"
#endif

/*=================================================================================================
*                                          CONSTANTS
=================================================================================================*/
/**
* @brief      Dio driver Channel Groups configuration switch.
*/
/**
* @brief          Enable or Disable Development Error Detection.
*
* @implements     DIO_DEV_ERROR_DETECT_define
*/
#define DIO_DEV_ERROR_DETECT           (STD_ON)

/**
* @brief          Function @p Dio_GetVersionInfo() enable switch.
*
* @implements     DIO_VERSION_INFO_API_define
*/
#define DIO_VERSION_INFO_API           (STD_ON)

/**
* @brief          Function @p Dio_FlipChannel() enable switch.
*/
#define DIO_FLIP_CHANNEL_API           (STD_ON)

/**
* @brief          Function @p Dio_MaskedWritePort() enable switch.
*/
#define DIO_MASKEDWRITEPORT_API           (STD_ON)
/**
* @brief          Platform specific define stating if mapping of port bits over port pins is reversed.
*/
#define DIO_REVERSED_MAPPING_OF_PORT_BITS_OVER_PORT_PINS    (STD_ON)

/**
* @brief          Reversed port functionality enable switch.
*
* @implements DIO_REVERSEPORTBITS_define
*/
#define DIO_REVERSEPORTBITS           (STD_ON)

/**
* @brief          Undefined pins masking enable switch.
*/
#define DIO_READZERO_UNDEFINEDPORTS           (STD_OFF)

/**
* @brief The number of configured partition on the platform
*/
#define DIO_MAX_PARTITION              (1U)

/**
* @brief Enable/Disable MultiPartition function from the driver
*/
#define DIO_MULTIPARTITION_ENABLED          (STD_OFF)

/**
* @brief          Number of implemented ports.
*
* @note           Used for channel, port and channel group validation.
*/
#define DIO_NUM_PORTS_U16               ((uint16)0xe)

/**
* @brief          The number of partition on the port
*
* @note           Used for port validation.
*/
#define DIO_PORT_PARTITION_U16          ((uint16)14U)

/**
* @brief          Number of channels in a port.
*
* @note           Used for channel, port and channel group validation.
*/
#define DIO_NUM_CHANNELS_PER_PORT_U16   ((uint16)((uint16)sizeof(Dio_PortLevelType) * 0x8U))

/**
* @brief          Number of channels available on the implemented ports.
*
* @note           Used for channel validation.
*/
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    #define DIO_NUM_CHANNELS_U16            ((uint16)219U)
#endif


/**
* @brief The number of partition on the channel.
*
* @note           Used for channel validation.
*/
#define DIO_CHANNEL_PARTITION_U16           ((uint16)220U)

/**
* @brief          Mask representing no available channels on a port.
*
* @note           Used for channel validation.
*/
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    #define DIO_NO_AVAILABLE_CHANNELS_U16   ((Dio_PortLevelType)0x0U)
#endif

/**
* @brief          Mask representing the maximum valid offset for a channel group.
*
* @note           Used for channel group validation.
*/
#if (STD_ON == DIO_DEV_ERROR_DETECT)
    #define DIO_MAX_VALID_OFFSET_U8         ((uint8)0xFU)
#endif

/**
*   @brief   Enables or disables the access to a hardware register from user mode
*            USER_MODE_SOFT_LOCKING:        All reads to hw registers will be done via REG_PROT, user mode access
*            SUPERVISOR_MODE_SOFT_LOCKING:  Locks the access to the registers only for supervisor mode
*
*   @note    Currently, no register protection mechanism is used for Dio driver.
*/
#define DIO_USER_MODE_SOFT_LOCKING      (STD_OFF)

/**
* @brief          Dio driver Pre-Compile configuration switch.
*/
#define DIO_PRECOMPILE_SUPPORT

/**
* @brief Support for User mode.
*        If this parameter has been configured to STD_ON, the Dio driver code can be executed from both supervisor and user mode.
*/

#define DIO_ENABLE_USER_MODE_SUPPORT   (STD_OFF)

/**
* @brief Support for REG_PROT in SIUL2 IP.
*        If the current platform implements REG_PROT for SIUL2 IP, this parameter will be defined, and will enable REG_PROT configuration for SIUL2 IP in DIO drvier
*/
#define DIO_SIUL2_REG_PROT_AVAILABLE    (STD_OFF)

#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
 #ifdef DIO_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == DIO_ENABLE_USER_MODE_SUPPORT)
    #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Dio in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
  #endif /* (STD_ON == DIO_ENABLE_USER_MODE_SUPPORT) */
 #endif /* ifdef DIO_ENABLE_USER_MODE_SUPPORT*/
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

/**
* @brief Number of SIUL2 instances on the platform.
*/
#define DIO_NUM_SIUL2_INSTANCES_U8      ((uint8)1)

/**
* @brief List of identifiers for each of the SIUL2 instances on the platform
*/
#define DIO_SIUL2_0_U8        ((uint8)0)

/*=================================================================================================
*                                      DEFINES AND MACROS
=================================================================================================*/

/**
* @brief          Symbolic name for the configuration Dio_ConfigPC.
*/
#define Dio_ConfigPC    (Dio_Config)

/* ========== DioConfig ========== */

/* ---------- PTA_L ---------- */

/**
* @brief          Symbolic name for the port PTA_L.
*/
#define DioConf_DioPort_PTA_L  ((uint8)0x00U)
/**
* @brief          Symbolic name for the channel DI10.
*
*/
#define DioConf_DioChannel_DI10  ((uint16)0x000bU)
/* ---------- PTA_H ---------- */

/**
* @brief          Symbolic name for the port PTA_H.
*/
#define DioConf_DioPort_PTA_H  ((uint8)0x01U)
/**
* @brief          Symbolic name for the channel DI9.
*
*/
#define DioConf_DioChannel_DI9  ((uint16)0x0010U)
/**
* @brief          Symbolic name for the channel DI3.
*
*/
#define DioConf_DioChannel_DI3  ((uint16)0x0011U)
/**
* @brief          Symbolic name for the channel DO9_L.
*
*/
#define DioConf_DioChannel_DO9_L  ((uint16)0x0015U)
/**
* @brief          Symbolic name for the channel IMU_INT1.
*
*/
#define DioConf_DioChannel_IMU_INT1  ((uint16)0x001bU)
/**
* @brief          Symbolic name for the channel LSO1_STAT.
*
*/
#define DioConf_DioChannel_LSO1_STAT  ((uint16)0x001cU)
/**
* @brief          Symbolic name for the channel LSO16_STAT.
*
*/
#define DioConf_DioChannel_LSO16_STAT  ((uint16)0x001fU)
/* ---------- PTB_L ---------- */

/**
* @brief          Symbolic name for the port PTB_L.
*/
#define DioConf_DioPort_PTB_L  ((uint8)0x02U)
/**
* @brief          Symbolic name for the channel DI1.
*
*/
#define DioConf_DioChannel_DI1  ((uint16)0x0023U)
/**
* @brief          Symbolic name for the channel DI8.
*
*/
#define DioConf_DioChannel_DI8  ((uint16)0x002dU)
/**
* @brief          Symbolic name for the channel DI7.
*
*/
#define DioConf_DioChannel_DI7  ((uint16)0x002eU)
/**
* @brief          Symbolic name for the channel DI6.
*
*/
#define DioConf_DioChannel_DI6  ((uint16)0x002fU)
/**
* @brief          Symbolic name for the channel RSTb.
*
*/
#define DioConf_DioChannel_RSTb  ((uint16)0x0022U)
/* ---------- PTB_H ---------- */

/**
* @brief          Symbolic name for the port PTB_H.
*/
#define DioConf_DioPort_PTB_H  ((uint8)0x03U)
/**
* @brief          Symbolic name for the channel DI5.
*
*/
#define DioConf_DioChannel_DI5  ((uint16)0x0030U)
/**
* @brief          Symbolic name for the channel DI4.
*
*/
#define DioConf_DioChannel_DI4  ((uint16)0x0031U)
/**
* @brief          Symbolic name for the channel LIN1_CMNDR_EN.
*
*/
#define DioConf_DioChannel_LIN1_CMNDR_EN  ((uint16)0x0032U)
/**
* @brief          Symbolic name for the channel LIN_EN.
*
*/
#define DioConf_DioChannel_LIN_EN  ((uint16)0x0033U)
/**
* @brief          Symbolic name for the channel CAN_STBY.
*
*/
#define DioConf_DioChannel_CAN_STBY  ((uint16)0x0034U)
/**
* @brief          Symbolic name for the channel LSO5_STAT.
*
*/
#define DioConf_DioChannel_LSO5_STAT  ((uint16)0x0035U)
/**
* @brief          Symbolic name for the channel LSO17_STAT.
*
*/
#define DioConf_DioChannel_LSO17_STAT  ((uint16)0x0036U)
/**
* @brief          Symbolic name for the channel LSO18_STAT.
*
*/
#define DioConf_DioChannel_LSO18_STAT  ((uint16)0x0037U)
/**
* @brief          Symbolic name for the channel LSO15_STAT.
*
*/
#define DioConf_DioChannel_LSO15_STAT  ((uint16)0x0038U)
/**
* @brief          Symbolic name for the channel GPIOCH_B25.
*
*/
#define DioConf_DioChannel_GPIOCH_B25  ((uint16)0x0039U)
/**
* @brief          Symbolic name for the channel GPIOCH_B26.
*
*/
#define DioConf_DioChannel_GPIOCH_B26  ((uint16)0x003aU)
/**
* @brief          Symbolic name for the channel LSO14_STAT.
*
*/
#define DioConf_DioChannel_LSO14_STAT  ((uint16)0x003bU)
/**
* @brief          Symbolic name for the channel LSO13_STAT.
*
*/
#define DioConf_DioChannel_LSO13_STAT  ((uint16)0x003cU)
/**
* @brief          Symbolic name for the channel LSO12_STAT.
*
*/
#define DioConf_DioChannel_LSO12_STAT  ((uint16)0x003dU)
/**
* @brief          Symbolic name for the channel LSO11_STAT.
*
*/
#define DioConf_DioChannel_LSO11_STAT  ((uint16)0x003eU)
/**
* @brief          Symbolic name for the channel LSO10_STAT.
*
*/
#define DioConf_DioChannel_LSO10_STAT  ((uint16)0x003fU)
/* ---------- PTC_L ---------- */

/**
* @brief          Symbolic name for the port PTC_L.
*/
#define DioConf_DioPort_PTC_L  ((uint8)0x04U)
/**
* @brief          Symbolic name for the channel DI12_CP.
*
*/
#define DioConf_DioChannel_DI12_CP  ((uint16)0x004bU)
/**
* @brief          Symbolic name for the channel DO5_L.
*
*/
#define DioConf_DioChannel_DO5_L  ((uint16)0x004dU)
/**
* @brief          Symbolic name for the channel LIN2_CMNDR_EN.
*
*/
#define DioConf_DioChannel_LIN2_CMNDR_EN  ((uint16)0x0043U)
/**
* @brief          Symbolic name for the channel LIN2_EN.
*
*/
#define DioConf_DioChannel_LIN2_EN  ((uint16)0x0042U)
/**
* @brief          Symbolic name for the channel MCU_ETH_EN.
*
*/
#define DioConf_DioChannel_MCU_ETH_EN  ((uint16)0x0047U)
/**
* @brief          Symbolic name for the channel DI11.
*
*/
#define DioConf_DioChannel_DI11  ((uint16)0x004cU)
/* ---------- PTC_H ---------- */

/**
* @brief          Symbolic name for the port PTC_H.
*/
#define DioConf_DioPort_PTC_H  ((uint8)0x05U)
/**
* @brief          Symbolic name for the channel DO10_L.
*
*/
#define DioConf_DioChannel_DO10_L  ((uint16)0x0052U)
/**
* @brief          Symbolic name for the channel DO6_L.
*
*/
#define DioConf_DioChannel_DO6_L  ((uint16)0x0056U)
/**
* @brief          Symbolic name for the channel DO7_L.
*
*/
#define DioConf_DioChannel_DO7_L  ((uint16)0x005eU)
/**
* @brief          Symbolic name for the channel LSO7_STAT.
*
*/
#define DioConf_DioChannel_LSO7_STAT  ((uint16)0x0058U)
/**
* @brief          Symbolic name for the channel LSO6_STAT.
*
*/
#define DioConf_DioChannel_LSO6_STAT  ((uint16)0x005bU)
/* ---------- PTD_L ---------- */

/**
* @brief          Symbolic name for the port PTD_L.
*/
#define DioConf_DioPort_PTD_L  ((uint8)0x06U)
/**
* @brief          Symbolic name for the channel DO4_L.
*
*/
#define DioConf_DioChannel_DO4_L  ((uint16)0x006aU)
/**
* @brief          Symbolic name for the channel DO3_L.
*
*/
#define DioConf_DioChannel_DO3_L  ((uint16)0x006dU)
/**
* @brief          Symbolic name for the channel DO2_L.
*
*/
#define DioConf_DioChannel_DO2_L  ((uint16)0x006eU)
/**
* @brief          Symbolic name for the channel DO1_L.
*
*/
#define DioConf_DioChannel_DO1_L  ((uint16)0x006fU)
/**
* @brief          Symbolic name for the channel MCU_ETH_WAKE.
*
*/
#define DioConf_DioChannel_MCU_ETH_WAKE  ((uint16)0x006cU)
/* ---------- PTD_H ---------- */

/**
* @brief          Symbolic name for the port PTD_H.
*/
#define DioConf_DioPort_PTD_H  ((uint8)0x07U)
/**
* @brief          Symbolic name for the channel DO8_L.
*
*/
#define DioConf_DioChannel_DO8_L  ((uint16)0x0079U)
/**
* @brief          Symbolic name for the channel DOL_EN.
*
*/
#define DioConf_DioChannel_DOL_EN  ((uint16)0x007fU)
/**
* @brief          Symbolic name for the channel MCU_ETH_RST.
*
*/
#define DioConf_DioChannel_MCU_ETH_RST  ((uint16)0x0071U)
/**
* @brief          Symbolic name for the channel LSO2_STAT.
*
*/
#define DioConf_DioChannel_LSO2_STAT  ((uint16)0x007cU)
/* ---------- PTE_L ---------- */

/**
* @brief          Symbolic name for the port PTE_L.
*/
#define DioConf_DioPort_PTE_L  ((uint8)0x08U)
/**
* @brief          Symbolic name for the channel DO12_L.
*
*/
#define DioConf_DioChannel_DO12_L  ((uint16)0x0084U)
/**
* @brief          Symbolic name for the channel DO11_L.
*
*/
#define DioConf_DioChannel_DO11_L  ((uint16)0x0085U)
/**
* @brief          Symbolic name for the channel DI2.
*
*/
#define DioConf_DioChannel_DI2  ((uint16)0x0087U)
/**
* @brief          Symbolic name for the channel DI_PU_EN1.
*
*/
#define DioConf_DioChannel_DI_PU_EN1  ((uint16)0x008eU)
/**
* @brief          Symbolic name for the channel DO14_L.
*
*/
#define DioConf_DioChannel_DO14_L  ((uint16)0x008cU)
/**
* @brief          Symbolic name for the channel FCCU1_MCU.
*
*/
#define DioConf_DioChannel_FCCU1_MCU  ((uint16)0x0083U)
/**
* @brief          Symbolic name for the channel FCCU2_MCU.
*
*/
#define DioConf_DioChannel_FCCU2_MCU  ((uint16)0x0089U)
/* ---------- PTE_H ---------- */

/**
* @brief          Symbolic name for the port PTE_H.
*/
#define DioConf_DioPort_PTE_H  ((uint8)0x09U)
/**
* @brief          Symbolic name for the channel DI_PU_EN2.
*
*/
#define DioConf_DioChannel_DI_PU_EN2  ((uint16)0x0091U)
/**
* @brief          Symbolic name for the channel DO13_L.
*
*/
#define DioConf_DioChannel_DO13_L  ((uint16)0x0093U)
/**
* @brief          Symbolic name for the channel DO15_L.
*
*/
#define DioConf_DioChannel_DO15_L  ((uint16)0x0094U)
/**
* @brief          Symbolic name for the channel DO16_L.
*
*/
#define DioConf_DioChannel_DO16_L  ((uint16)0x0098U)
/**
* @brief          Symbolic name for the channel DO17_L.
*
*/
#define DioConf_DioChannel_DO17_L  ((uint16)0x009bU)
/* ---------- PTF_L ---------- */

/**
* @brief          Symbolic name for the port PTF_L.
*/
#define DioConf_DioPort_PTF_L  ((uint8)0x0aU)
/**
* @brief          Symbolic name for the channel IGN_IN.
*
*/
#define DioConf_DioChannel_IGN_IN  ((uint16)0x00a3U)
/**
* @brief          Symbolic name for the channel DAC_SHTDN.
*
*/
#define DioConf_DioChannel_DAC_SHTDN  ((uint16)0x00aaU)
/**
* @brief          Symbolic name for the channel HB1_H.
*
*/
#define DioConf_DioChannel_HB1_H  ((uint16)0x00a4U)
/**
* @brief          Symbolic name for the channel HB1_L.
*
*/
#define DioConf_DioChannel_HB1_L  ((uint16)0x00a5U)
/**
* @brief          Symbolic name for the channel HB2_H.
*
*/
#define DioConf_DioChannel_HB2_H  ((uint16)0x00a6U)
/**
* @brief          Symbolic name for the channel HB2_L.
*
*/
#define DioConf_DioChannel_HB2_L  ((uint16)0x00a7U)
/**
* @brief          Symbolic name for the channel HB3_H.
*
*/
#define DioConf_DioChannel_HB3_H  ((uint16)0x00a8U)
/**
* @brief          Symbolic name for the channel HB3_L.
*
*/
#define DioConf_DioChannel_HB3_L  ((uint16)0x00a9U)
/**
* @brief          Symbolic name for the channel IMU_INT2.
*
*/
#define DioConf_DioChannel_IMU_INT2  ((uint16)0x00a1U)
/**
* @brief          Symbolic name for the channel PGOOD_FS85.
*
*/
#define DioConf_DioChannel_PGOOD_FS85  ((uint16)0x00a2U)
/**
* @brief          Symbolic name for the channel FS0B.
*
*/
#define DioConf_DioChannel_FS0B  ((uint16)0x00abU)
/* ---------- PTF_H ---------- */

/**
* @brief          Symbolic name for the port PTF_H.
*/
#define DioConf_DioPort_PTF_H  ((uint8)0x0bU)
/**
* @brief          Symbolic name for the channel DO18_L.
*
*/
#define DioConf_DioChannel_DO18_L  ((uint16)0x00b3U)
/**
* @brief          Symbolic name for the channel DO1_H.
*
*/
#define DioConf_DioChannel_DO1_H  ((uint16)0x00b6U)
/**
* @brief          Symbolic name for the channel DO2_H.
*
*/
#define DioConf_DioChannel_DO2_H  ((uint16)0x00b8U)
/**
* @brief          Symbolic name for the channel DO3_H.
*
*/
#define DioConf_DioChannel_DO3_H  ((uint16)0x00b9U)
/**
* @brief          Symbolic name for the channel DO4_H.
*
*/
#define DioConf_DioChannel_DO4_H  ((uint16)0x00baU)
/**
* @brief          Symbolic name for the channel DO5_H.
*
*/
#define DioConf_DioChannel_DO5_H  ((uint16)0x00bbU)
/**
* @brief          Symbolic name for the channel DO6_H.
*
*/
#define DioConf_DioChannel_DO6_H  ((uint16)0x00bdU)
/**
* @brief          Symbolic name for the channel DO7_H.
*
*/
#define DioConf_DioChannel_DO7_H  ((uint16)0x00beU)
/**
* @brief          Symbolic name for the channel DO8_H.
*
*/
#define DioConf_DioChannel_DO8_H  ((uint16)0x00bfU)
/**
* @brief          Symbolic name for the channel LSO8_STAT.
*
*/
#define DioConf_DioChannel_LSO8_STAT  ((uint16)0x00b1U)
/* ---------- PTG_L ---------- */

/**
* @brief          Symbolic name for the port PTG_L.
*/
#define DioConf_DioPort_PTG_L  ((uint8)0x0cU)
/**
* @brief          Symbolic name for the channel DO9_H.
*
*/
#define DioConf_DioChannel_DO9_H  ((uint16)0x00c0U)
/**
* @brief          Symbolic name for the channel DO10_H.
*
*/
#define DioConf_DioChannel_DO10_H  ((uint16)0x00c1U)
/**
* @brief          Symbolic name for the channel DO11_H.
*
*/
#define DioConf_DioChannel_DO11_H  ((uint16)0x00c2U)
/**
* @brief          Symbolic name for the channel DO12_H.
*
*/
#define DioConf_DioChannel_DO12_H  ((uint16)0x00c3U)
/**
* @brief          Symbolic name for the channel DO13_H.
*
*/
#define DioConf_DioChannel_DO13_H  ((uint16)0x00c4U)
/**
* @brief          Symbolic name for the channel DO14_H.
*
*/
#define DioConf_DioChannel_DO14_H  ((uint16)0x00c5U)
/**
* @brief          Symbolic name for the channel MCU_RB_INT.
*
*/
#define DioConf_DioChannel_MCU_RB_INT  ((uint16)0x00c6U)
/**
* @brief          Symbolic name for the channel DO15_H.
*
*/
#define DioConf_DioChannel_DO15_H  ((uint16)0x00c7U)
/**
* @brief          Symbolic name for the channel FS85_INTB.
*
*/
#define DioConf_DioChannel_FS85_INTB  ((uint16)0x00c8U)
/**
* @brief          Symbolic name for the channel MPU_GPIO_0.
*
*/
#define DioConf_DioChannel_MPU_GPIO_0  ((uint16)0x00c9U)
/**
* @brief          Symbolic name for the channel MPU_GPIO_1.
*
*/
#define DioConf_DioChannel_MPU_GPIO_1  ((uint16)0x00caU)
/**
* @brief          Symbolic name for the channel MPU_SLEEP.
*
*/
#define DioConf_DioChannel_MPU_SLEEP  ((uint16)0x00cbU)
/**
* @brief          Symbolic name for the channel MPU_RESET.
*
*/
#define DioConf_DioChannel_MPU_RESET  ((uint16)0x00ccU)
/**
* @brief          Symbolic name for the channel GPICH13_LG.
*
*/
#define DioConf_DioChannel_GPICH13_LG  ((uint16)0x00cdU)
/**
* @brief          Symbolic name for the channel GPIOCH14_LG.
*
*/
#define DioConf_DioChannel_GPIOCH14_LG  ((uint16)0x00ceU)
/**
* @brief          Symbolic name for the channel DO16_H.
*
*/
#define DioConf_DioChannel_DO16_H  ((uint16)0x00cfU)
/* ---------- PTG_H ---------- */

/**
* @brief          Symbolic name for the port PTG_H.
*/
#define DioConf_DioPort_PTG_H  ((uint8)0x0dU)
/**
* @brief          Symbolic name for the channel CAN4_EN_MCU.
*
*/
#define DioConf_DioChannel_CAN4_EN_MCU  ((uint16)0x00d0U)
/**
* @brief          Symbolic name for the channel RB_RESETN.
*
*/
#define DioConf_DioChannel_RB_RESETN  ((uint16)0x00d1U)
/**
* @brief          Symbolic name for the channel GPIOCHG18.
*
*/
#define DioConf_DioChannel_GPIOCHG18  ((uint16)0x00d2U)
/**
* @brief          Symbolic name for the channel CAN4_nSTB_MCU.
*
*/
#define DioConf_DioChannel_CAN4_nSTB_MCU  ((uint16)0x00d3U)
/**
* @brief          Symbolic name for the channel DC_Keepon.
*
*/
#define DioConf_DioChannel_DC_Keepon  ((uint16)0x00d4U)
/**
* @brief          Symbolic name for the channel EXT_Supply_EN.
*
*/
#define DioConf_DioChannel_EXT_Supply_EN  ((uint16)0x00d5U)
/**
* @brief          Symbolic name for the channel GPIOCHG22.
*
*/
#define DioConf_DioChannel_GPIOCHG22  ((uint16)0x00d6U)
/**
* @brief          Symbolic name for the channel GPIOCHG23.
*
*/
#define DioConf_DioChannel_GPIOCHG23  ((uint16)0x00d7U)
/**
* @brief          Symbolic name for the channel MCU_CP_GPIO.
*
*/
#define DioConf_DioChannel_MCU_CP_GPIO  ((uint16)0x00d8U)
/**
* @brief          Symbolic name for the channel HSO_DSEL_MCU.
*
*/
#define DioConf_DioChannel_HSO_DSEL_MCU  ((uint16)0x00d9U)
/**
* @brief          Symbolic name for the channel HB_EN_MCU.
*
*/
#define DioConf_DioChannel_HB_EN_MCU  ((uint16)0x00daU)
/**
* @brief          Symbolic name for the channel HB_DRV_EN_MCU.
*
*/
#define DioConf_DioChannel_HB_DRV_EN_MCU  ((uint16)0x00dbU)

/*=================================================================================================
*                                             ENUMS
=================================================================================================*/


/*=================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
=================================================================================================*/

/**
* @brief          Type of a DIO port representation.
*
* @implements     Dio_PortType_typedef
*/
typedef uint8 Dio_PortType;

/**
* @brief          Type of a DIO channel representation.
*
* @implements     Dio_ChannelType_typedef
*/
typedef uint16 Dio_ChannelType;

/**
* @brief          Type of a DIO port levels representation.
*
* @implements     Dio_PortLevelType_typedef
*/
typedef uint16 Dio_PortLevelType;

/**
* @brief          Type of a DIO channel levels representation.
*
* @implements     Dio_LevelType_typedef
*/
typedef uint8 Dio_LevelType;

/**
* @brief          Type of a DIO channel group representation.
*
* @implements     Dio_ChannelGroupType_struct
*/
typedef struct
{
    Dio_PortType      port;             /**< @brief Port identifier.  */
    uint8             u8offset;         /**< @brief Bit offset within the port. */
    Dio_PortLevelType mask;             /**< @brief Group mask. */
} Dio_ChannelGroupType;

/**
* @brief          Type of a DIO configuration structure.
*
* @note           In this implementation there is no need for a configuration
*                 structure there is only a dummy field, it is recommended
*                 to initialize this field to zero.
*
* @implements     Dio_ConfigType_struct
*/
typedef struct
{
    uint8 u8NumChannelGroups; /**< @brief Number of channel groups in configuration */
    const Dio_ChannelGroupType * pChannelGroupList;     /**< @brief
                                               Pointer to list of channel groups in configuration */
    const uint32 * pau32Dio_ChannelToPartitionMap;      /**< @brief Pointer to channel to partition mapping */
    const uint32 * pau32Dio_PortToPartitionMap;         /**< @brief Pointer to port to partition mapping */
} Dio_ConfigType;

/*=================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
=================================================================================================*/
#define DIO_START_SEC_CONST_8
#include "Dio_MemMap.h"

/**
* @brief Array of values storing the SIUL2 instance each port on the platform belongs to
*/
extern const uint8 Dio_au8PortSiul2Instance[DIO_NUM_PORTS_U16];

/**
* @brief Array of values storing the offset PORT0 has inside the SIUL2 instance it
*        belongs to
*/
extern const uint8 Dio_au8Port0OffsetInSiul2Instance[DIO_NUM_SIUL2_INSTANCES_U8];

#define DIO_STOP_SEC_CONST_8
#include "Dio_MemMap.h"

#define DIO_START_SEC_CONST_16
#include "Dio_MemMap.h"

/**
* @brief Array of bitmaps of output pins available per port
*/
extern const Dio_PortLevelType Dio_aAvailablePinsForWrite[DIO_NUM_PORTS_U16];

/**
* @brief Array of bitmaps of input pins available per port
*/
extern const Dio_PortLevelType Dio_aAvailablePinsForRead[DIO_NUM_PORTS_U16];

#define DIO_STOP_SEC_CONST_16
#include "Dio_MemMap.h"

/*=================================================================================================
*                                    FUNCTION PROTOTYPES
=================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif  /* DIO_CFG_H */

/** @} */

