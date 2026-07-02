/**
*   @file    Spi_PBcfg.c
*   @implements Spi_PBcfg.c_Artifact
*   @version 6.0.0
*
*   @brief   AUTOSAR Spi - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup SPI_DRIVER_CONFIGURATION Spi Driver Configuration
*   @{
*/
/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : LPSPI
*   Dependencies         : 
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

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Spi.h"
#include "Spi_Ipw_MBDT_PBcfg.h"

#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif

/*==================================================================================================
*                                    SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SPI_MBDT_VENDOR_ID_PBCFG_C                        43
#define SPI_MBDT_AR_RELEASE_MAJOR_VERSION_PBCFG_C         4
#define SPI_MBDT_AR_RELEASE_MINOR_VERSION_PBCFG_C         7

#define SPI_MBDT_AR_RELEASE_REVISION_VERSION_PBCFG_C      0
#define SPI_MBDT_SW_MAJOR_VERSION_PBCFG_C                 6
#define SPI_MBDT_SW_MINOR_VERSION_PBCFG_C                 0
#define SPI_MBDT_SW_PATCH_VERSION_PBCFG_C                 0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and SPI header file are of the same vendor */
#if (SPI_MBDT_VENDOR_ID_PBCFG_C != SPI_VENDOR_ID)
    #error "Spi_PBCfg.c and Spi.h have different vendor ids"
#endif
/* Check if current file and SPI header file are of the same Autosar version */
#if ((SPI_MBDT_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != SPI_AR_RELEASE_MAJOR_VERSION) || \
     (SPI_MBDT_AR_RELEASE_MINOR_VERSION_PBCFG_C    != SPI_AR_RELEASE_MINOR_VERSION) || \
     (SPI_MBDT_AR_RELEASE_REVISION_VERSION_PBCFG_C != SPI_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Spi_PBCfg.c and Spi.h are different"
#endif
/* Check if current file and SPI header file are of the same Software version */
#if ((SPI_MBDT_SW_MAJOR_VERSION_PBCFG_C != SPI_SW_MAJOR_VERSION) || \
     (SPI_MBDT_SW_MINOR_VERSION_PBCFG_C != SPI_SW_MINOR_VERSION) || \
     (SPI_MBDT_SW_PATCH_VERSION_PBCFG_C != SPI_SW_PATCH_VERSION))
    #error "Software Version Numbers of Spi_PBCfg.c and Spi.h are different"
#endif

/* Check if current file and SPI header file are of the same vendor */
#if (SPI_MBDT_VENDOR_ID_PBCFG_C != SPI_IPW_VENDOR_ID_MBDT_PBCFG_H)
    #error "Spi_PBCfg.c and Spi_Ipw_PBCfg.h have different vendor ids"
#endif
/* Check if current file and SPI header file are of the same Autosar version */
#if ((SPI_MBDT_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != SPI_IPW_AR_RELEASE_MAJOR_VERSION_MBDT_PBCFG_H) || \
     (SPI_MBDT_AR_RELEASE_MINOR_VERSION_PBCFG_C    != SPI_IPW_AR_RELEASE_MINOR_VERSION_MBDT_PBCFG_H) || \
     (SPI_MBDT_AR_RELEASE_REVISION_VERSION_PBCFG_C != SPI_IPW_AR_RELEASE_REVISION_VERSION_MBDT_PBCFG_H ))
    #error "AutoSar Version Numbers of Spi_PBCfg.c and Spi_Ipw_PBCfg.h are different"
#endif
/* Check if current file and SPI header file are of the same Software version */
#if ((SPI_MBDT_SW_MAJOR_VERSION_PBCFG_C != SPI_IPW_SW_MAJOR_VERSION_MBDT_PBCFG_H) || \
     (SPI_MBDT_SW_MINOR_VERSION_PBCFG_C != SPI_IPW_SW_MINOR_VERSION_MBDT_PBCFG_H) || \
     (SPI_MBDT_SW_PATCH_VERSION_PBCFG_C != SPI_IPW_SW_PATCH_VERSION_MBDT_PBCFG_H))
    #error "Software Version Numbers of Spi_PBCfg.c and Spi_Ipw_PBCfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
/* Check if current file and Dem.h file are of the same Autosar version */
#if ((SPI_MBDT_AR_RELEASE_MAJOR_VERSION_PBCFG_C    != DEM_AR_RELEASE_MAJOR_VERSION) || \
     (SPI_MBDT_AR_RELEASE_MINOR_VERSION_PBCFG_C    != DEM_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Spi_PBCfg.c and Dem.h are different"
#endif
#endif
#endif

/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/
#define SPI_START_SEC_CODE
#include "Spi_MemMap.h"

/* List Of Notification Functions */
/* Job start/end Notifications */
extern void MBDT_SPI_end_job_IMU_callback(void); /* End Notification for Job SpiJob_IMU */
extern void MBDT_SPI_end_job_MPU_callback(void); /* End Notification for Job SpiJob_MPU */
extern void MBDT_SPI_end_job_DAC_callback(void); /* End Notification for Job SpiJob_DAC */
extern void MBDT_SPI_end_job_HB_callback(void); /* End Notification for Job SpiJob_HB */
extern void MBDT_SPI_end_job_RB_callback(void); /* End Notification for Job SpiJob_RB */
/* Sequence End Notifications */
extern void MBDT_SPI_end_sequence1_callback(void); /* End Notification for Sequence SpiSequence_MPU */

#define SPI_STOP_SEC_CODE
#include "Spi_MemMap.h"
/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/
#if ((SPI_DMA_USED == STD_ON) && \
    ((SPI_LEVEL_DELIVERED == SPI_LEVEL1) || (SPI_LEVEL_DELIVERED == SPI_LEVEL2)))
    #define SPI_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_START_SEC_VAR_CLEARED_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && ((SPI_LEVEL_DELIVERED == SPI_LEVEL1) ||
        (SPI_LEVEL_DELIVERED == SPI_LEVEL2))) */
#include "Spi_MemMap.h"

/* Buffers Descriptors for EB Channels and Allocate Buffers for IB Channels */
static Spi_BufferDescriptorType Spi_Buffer_MBDT_SPI_IMU;
static Spi_BufferDescriptorType Spi_Buffer_MBDT_SpiChannel_MPU;
static Spi_BufferDescriptorType Spi_Buffer_MBDT_SPIChannel_DAC;
static Spi_BufferDescriptorType Spi_Buffer_MBDT_SPIChannel_HB;
#if (CPU_TYPE == CPU_TYPE_64)
VAR_ALIGN(static Spi_BufferDescriptorType Spi_Buffer_MBDT_SPI_RB, 8)
#else
/** Compiler_Warning: It is intended for aligning memory. */
VAR_ALIGN(static Spi_BufferDescriptorType Spi_Buffer_MBDT_SPI_RB, 4)
#endif

#if ((SPI_DMA_USED == STD_ON) && \
    ((SPI_LEVEL_DELIVERED == SPI_LEVEL1) || (SPI_LEVEL_DELIVERED == SPI_LEVEL2)))
    #define SPI_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
#else
    #define SPI_STOP_SEC_VAR_CLEARED_UNSPECIFIED
#endif /* ((SPI_DMA_USED == STD_ON) && ((SPI_LEVEL_DELIVERED == SPI_LEVEL1) ||
        (SPI_LEVEL_DELIVERED == SPI_LEVEL2))) */
#include "Spi_MemMap.h"

#define SPI_START_SEC_VAR_INIT_UNSPECIFIED
#include "Spi_MemMap.h"

/* Buffers Descriptors for IB Channels */

#define SPI_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Spi_MemMap.h"
/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define SPI_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Spi_MemMap.h"

/* Channel Configuration */
/* Channel Configuration for SPI_IMU */
static const Spi_ChannelConfigType Spi_ChannelConfig_SPI_IMU_MBDT =
{
        EB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bit order, 1:LSB, 0: MSB */
        (boolean)FALSE, /* Byte Swap */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
              #endif
#endif

        (uint32)1U,  /* DefaultTransmitValue (configured) */
        1000U, /* length of buffer */
        &Spi_Buffer_MBDT_SPI_IMU, /* BufferDescriptor */
        (uint32)SPI_SPURIOUS_ID_U32,  /* User Id */
#if (SPI_SERIALIZATION_SUPPORT == STD_ON)
        (boolean)FALSE, /* IsSerialized */
#endif
};
/* Channel Configuration for SpiChannel_MPU */
static const Spi_ChannelConfigType Spi_ChannelConfig_SpiChannel_MPU_MBDT =
{
        EB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bit order, 1:LSB, 0: MSB */
        (boolean)FALSE, /* Byte Swap */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
              #endif
#endif

        (uint32)1U,  /* DefaultTransmitValue (configured) */
        1000U, /* length of buffer */
        &Spi_Buffer_MBDT_SpiChannel_MPU, /* BufferDescriptor */
        (uint32)SPI_SPURIOUS_ID_U32,  /* User Id */
#if (SPI_SERIALIZATION_SUPPORT == STD_ON)
        (boolean)FALSE, /* IsSerialized */
#endif
};
/* Channel Configuration for SPIChannel_DAC */
static const Spi_ChannelConfigType Spi_ChannelConfig_SPIChannel_DAC_MBDT =
{
        EB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bit order, 1:LSB, 0: MSB */
        (boolean)FALSE, /* Byte Swap */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
              #endif
#endif

        (uint32)1U,  /* DefaultTransmitValue (configured) */
        1000U, /* length of buffer */
        &Spi_Buffer_MBDT_SPIChannel_DAC, /* BufferDescriptor */
        (uint32)SPI_SPURIOUS_ID_U32,  /* User Id */
#if (SPI_SERIALIZATION_SUPPORT == STD_ON)
        (boolean)FALSE, /* IsSerialized */
#endif
};
/* Channel Configuration for SPIChannel_HB */
static const Spi_ChannelConfigType Spi_ChannelConfig_SPIChannel_HB_MBDT =
{
        EB,  /* BufferType IB or EB */
        8U,   /* Frame size */
        (boolean)FALSE, /* Bit order, 1:LSB, 0: MSB */
        (boolean)FALSE, /* Byte Swap */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
              #endif
#endif

        (uint32)1U,  /* DefaultTransmitValue (configured) */
        1000U, /* length of buffer */
        &Spi_Buffer_MBDT_SPIChannel_HB, /* BufferDescriptor */
        (uint32)SPI_SPURIOUS_ID_U32,  /* User Id */
#if (SPI_SERIALIZATION_SUPPORT == STD_ON)
        (boolean)FALSE, /* IsSerialized */
#endif
};
/* Channel Configuration for SPI_RB */
static const Spi_ChannelConfigType Spi_ChannelConfig_SPI_RB_MBDT =
{
        EB,  /* BufferType IB or EB */
        16U,   /* Frame size */
        (boolean)FALSE, /* Bit order, 1:LSB, 0: MSB */
        (boolean)FALSE, /* Byte Swap */
#ifdef SPI_HALF_DUPLEX_MODE_SUPPORT
  #if (STD_ON == SPI_HALF_DUPLEX_MODE_SUPPORT)
            SPI_FULL_DUPLEX,
              #endif
#endif

        (uint32)1U,  /* DefaultTransmitValue (configured) */
        1000U, /* length of buffer */
        &Spi_Buffer_MBDT_SPI_RB, /* BufferDescriptor */
        (uint32)SPI_SPURIOUS_ID_U32,  /* User Id */
#if (SPI_SERIALIZATION_SUPPORT == STD_ON)
        (boolean)FALSE, /* IsSerialized */
#endif
};
/* Spi_aChannelConfigList_MBDT Channel Configuration */
static const Spi_ChannelsCfgType Spi_aChannelConfigList_MBDT[5] =
{
    /* SPI_IMU */
    {
        &Spi_ChannelConfig_SPI_IMU_MBDT
    },
    /* SpiChannel_MPU */
    {
        &Spi_ChannelConfig_SpiChannel_MPU_MBDT
    },
    /* SPIChannel_DAC */
    {
        &Spi_ChannelConfig_SPIChannel_DAC_MBDT
    },
    /* SPIChannel_HB */
    {
        &Spi_ChannelConfig_SPIChannel_HB_MBDT
    },
    /* SPI_RB */
    {
        &Spi_ChannelConfig_SPI_RB_MBDT
    }
};

/* Channel Assignment of Jobs */
/* SpiJob_IMU */
static const Spi_ChannelType Spi_SpiJob_IMU_ChannelAssignment_MBDT[1] =
{
    SpiConf_SpiChannel_SPI_IMU
};
/* SpiJob_MPU */
static const Spi_ChannelType Spi_SpiJob_MPU_ChannelAssignment_MBDT[1] =
{
    SpiConf_SpiChannel_SpiChannel_MPU
};
/* SpiJob_DAC */
static const Spi_ChannelType Spi_SpiJob_DAC_ChannelAssignment_MBDT[1] =
{
    SpiConf_SpiChannel_SPIChannel_DAC
};
/* SpiJob_HB */
static const Spi_ChannelType Spi_SpiJob_HB_ChannelAssignment_MBDT[1] =
{
    SpiConf_SpiChannel_SPIChannel_HB
};
/* SpiJob_RB */
static const Spi_ChannelType Spi_SpiJob_RB_ChannelAssignment_MBDT[1] =
{
    SpiConf_SpiChannel_SPI_RB
};

/* Configuration of Jobs */
/* Job Configuration for SpiJob_IMU */
static const Spi_JobConfigType Spi_JobConfig_SpiJob_IMU_MBDT =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_SpiJob_IMU_ChannelAssignment_MBDT, /* List of Channels */
        &MBDT_SPI_end_job_IMU_callback, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        (uint32)SPI_SPURIOUS_ID_U32,    /* User Id */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_IMU, /* External Device */
        &Spi_aExternalDeviceConfigList_MBDT[SPI_SpiExternalDevice_IMU] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for SpiJob_MPU */
static const Spi_JobConfigType Spi_JobConfig_SpiJob_MPU_MBDT =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_SpiJob_MPU_ChannelAssignment_MBDT, /* List of Channels */
        &MBDT_SPI_end_job_MPU_callback, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        (uint32)SPI_SPURIOUS_ID_U32,    /* User Id */
        CSIB1, /* HWUnit index */
        SPI_SpiExternalDevice_MPU, /* External Device */
        &Spi_aExternalDeviceConfigList_MBDT[SPI_SpiExternalDevice_MPU] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for SpiJob_DAC */
static const Spi_JobConfigType Spi_JobConfig_SpiJob_DAC_MBDT =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_SpiJob_DAC_ChannelAssignment_MBDT, /* List of Channels */
        &MBDT_SPI_end_job_DAC_callback, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        (uint32)SPI_SPURIOUS_ID_U32,    /* User Id */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_DAC, /* External Device */
        &Spi_aExternalDeviceConfigList_MBDT[SPI_SpiExternalDevice_DAC] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for SpiJob_HB */
static const Spi_JobConfigType Spi_JobConfig_SpiJob_HB_MBDT =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_SpiJob_HB_ChannelAssignment_MBDT, /* List of Channels */
        &MBDT_SPI_end_job_HB_callback, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        (uint32)SPI_SPURIOUS_ID_U32,    /* User Id */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_HB, /* External Device */
        &Spi_aExternalDeviceConfigList_MBDT[SPI_SpiExternalDevice_HB] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Job Configuration for SpiJob_RB */
static const Spi_JobConfigType Spi_JobConfig_SpiJob_RB_MBDT =
{
        (Spi_ChannelType)1U, /* NumChannels field */
        Spi_SpiJob_RB_ChannelAssignment_MBDT, /* List of Channels */
        &MBDT_SPI_end_job_RB_callback, /* End Notification */
        NULL_PTR, /* Start Notification */
        (sint8)0, /* Priority */
        (uint32)SPI_SPURIOUS_ID_U32,    /* User Id */
        CSIB0, /* HWUnit index */
        SPI_SpiExternalDevice_RB, /* External Device */
        &Spi_aExternalDeviceConfigList_MBDT[SPI_SpiExternalDevice_RB] /* ExternalDeviceConfig - pointer to the external device configuration */
};
/* Spi_aJobConfigList_MBDT Job Configuration*/
static const Spi_JobsCfgType Spi_aJobConfigList_MBDT[5] =
{
    /* SpiJob_IMU */
    {
        &Spi_JobConfig_SpiJob_IMU_MBDT
    },
    /* SpiJob_MPU */
    {
        &Spi_JobConfig_SpiJob_MPU_MBDT
    },
    /* SpiJob_DAC */
    {
        &Spi_JobConfig_SpiJob_DAC_MBDT
    },
    /* SpiJob_HB */
    {
        &Spi_JobConfig_SpiJob_HB_MBDT
    },
    /* SpiJob_RB */
    {
        &Spi_JobConfig_SpiJob_RB_MBDT
    }
};

/* Job Assignment of Sequences  */
/* SpiSequence_IMU */
static const Spi_JobType Spi_SpiSequence_IMU_JobAssignment_MBDT[1] =
{
    SpiConf_SpiJob_SpiJob_IMU
};
/* SpiSequence_MPU */
static const Spi_JobType Spi_SpiSequence_MPU_JobAssignment_MBDT[1] =
{
    SpiConf_SpiJob_SpiJob_MPU
};
/* SpiSequence_DAC */
static const Spi_JobType Spi_SpiSequence_DAC_JobAssignment_MBDT[1] =
{
    SpiConf_SpiJob_SpiJob_DAC
};
/* SpiSequence_HB */
static const Spi_JobType Spi_SpiSequence_HB_JobAssignment_MBDT[1] =
{
    SpiConf_SpiJob_SpiJob_HB
};
/* SpiSequence_IMU_DAC */
static const Spi_JobType Spi_SpiSequence_IMU_DAC_JobAssignment_MBDT[2] =
{
    SpiConf_SpiJob_SpiJob_IMU,
    SpiConf_SpiJob_SpiJob_DAC
};
/* SpiSequence_RB */
static const Spi_JobType Spi_SpiSequence_RB_JobAssignment_MBDT[1] =
{
    SpiConf_SpiJob_SpiJob_RB
};

/* Configuration of Sequences */
/* Sequence Configuration for SpiSequence_IMU */
static const Spi_SequenceConfigType Spi_SequenceConfig_SpiSequence_IMU_MBDT =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        (uint32)SPI_SPURIOUS_ID_U32,
        Spi_SpiSequence_IMU_JobAssignment_MBDT, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable Dma fast transfer */
        #endif
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMA_CONT_MEM_TRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable ContMemTransferSequence */
        ,NULL_PTR
        #endif
};
/* Sequence Configuration for SpiSequence_MPU */
static const Spi_SequenceConfigType Spi_SequenceConfig_SpiSequence_MPU_MBDT =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        (uint32)SPI_SPURIOUS_ID_U32,
        Spi_SpiSequence_MPU_JobAssignment_MBDT, /* List of Jobs */
        &MBDT_SPI_end_sequence1_callback, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable Dma fast transfer */
        #endif
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMA_CONT_MEM_TRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable ContMemTransferSequence */
        ,NULL_PTR
        #endif
};
/* Sequence Configuration for SpiSequence_DAC */
static const Spi_SequenceConfigType Spi_SequenceConfig_SpiSequence_DAC_MBDT =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        (uint32)SPI_SPURIOUS_ID_U32,
        Spi_SpiSequence_DAC_JobAssignment_MBDT, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable Dma fast transfer */
        #endif
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMA_CONT_MEM_TRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable ContMemTransferSequence */
        ,NULL_PTR
        #endif
};
/* Sequence Configuration for SpiSequence_HB */
static const Spi_SequenceConfigType Spi_SequenceConfig_SpiSequence_HB_MBDT =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        (uint32)SPI_SPURIOUS_ID_U32,
        Spi_SpiSequence_HB_JobAssignment_MBDT, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable Dma fast transfer */
        #endif
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMA_CONT_MEM_TRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable ContMemTransferSequence */
        ,NULL_PTR
        #endif
};
/* Sequence Configuration for SpiSequence_IMU_DAC */
static const Spi_SequenceConfigType Spi_SequenceConfig_SpiSequence_IMU_DAC_MBDT =
{
        (Spi_JobType)2U,  /* Number of Job in Seq */
        (uint32)SPI_SPURIOUS_ID_U32,
        Spi_SpiSequence_IMU_DAC_JobAssignment_MBDT, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable Dma fast transfer */
        #endif
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMA_CONT_MEM_TRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable ContMemTransferSequence */
        ,NULL_PTR
        #endif
};
/* Sequence Configuration for SpiSequence_RB */
static const Spi_SequenceConfigType Spi_SequenceConfig_SpiSequence_RB_MBDT =
{
        (Spi_JobType)1U,  /* Number of Job in Seq */
        (uint32)SPI_SPURIOUS_ID_U32,
        Spi_SpiSequence_RB_JobAssignment_MBDT, /* List of Jobs */
        NULL_PTR, /* End Notification */
        (uint8)FALSE  /* Interruptible */
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMAFASTTRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable Dma fast transfer */
        #endif
        #if ((SPI_DMA_USED == STD_ON) && (SPI_ENABLE_DMA_CONT_MEM_TRANSFER_SUPPORT == STD_ON))
        ,(boolean)FALSE /* Enable ContMemTransferSequence */
        ,NULL_PTR
        #endif
};
/* Spi_aSequenceConfigList_MBDT Sequence Configuration */
static const Spi_SeqsConfigType Spi_aSequenceConfigList_MBDT[6] =
{
    /* SpiSequence_IMU */
    {
        &Spi_SequenceConfig_SpiSequence_IMU_MBDT
    },
    /* SpiSequence_MPU */
    {
        &Spi_SequenceConfig_SpiSequence_MPU_MBDT
    },
    /* SpiSequence_DAC */
    {
        &Spi_SequenceConfig_SpiSequence_DAC_MBDT
    },
    /* SpiSequence_HB */
    {
        &Spi_SequenceConfig_SpiSequence_HB_MBDT
    },
    /* SpiSequence_IMU_DAC */
    {
        &Spi_SequenceConfig_SpiSequence_IMU_DAC_MBDT
    },
    /* SpiSequence_RB */
    {
        &Spi_SequenceConfig_SpiSequence_RB_MBDT
    }
};
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/* Spi Configuration */
 const Spi_ConfigType Spi_Config_MBDT=
{
    5U,  /* MaxExternalDevice - number of external devices */
    4U, /* SpiMaxChannel - number of channels */
    4U, /* SpiMaxJob - number of jobs */
    5U, /* SpiMaxSequence - number of sequences */
    (uint32)SPI_SPURIOUS_ID_U32,   /* SpiPartitionUse - used partition */
    Spi_aChannelConfigList_MBDT, /* ChannelConfig */
    Spi_aJobConfigList_MBDT, /* JobConfig */
    Spi_aSequenceConfigList_MBDT, /* SequenceConfig */
    Spi_aExternalDeviceConfigList_MBDT, /* ExternalDeviceConfig */
    Spi_aHwUnitConfigList_MBDT /* HWUnitConfig */
#if (SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    ,{ (uint32)STD_OFF, (uint32)0U} /* SPI_E_HARDWARE_ERROR parameters*/
#endif /* SPI_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */
};


#define SPI_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Spi_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */


