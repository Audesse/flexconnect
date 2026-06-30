/*==================================================================================================
* Project              : RTD AUTOSAR 4.7
* Platform             : CORTEXM
* Peripheral           : none
* Dependencies         : MemAcc
*
* Autosar Version      : 4.7.0
* Autosar Revision     : ASR_REL_4_7_REV_0000
* Autosar Conf.Variant :
* SW Version           : 6.0.0
* Build Version        : S32K3_RTD_6_0_0_D2506_ASR_REL_4_7_REV_0000_20250610
*
* Copyright 2020 - 2025 NXP
*
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly
* in accordance with the applicable license terms.  By expressly accepting
* such terms or by downloading, installing, activating and/or otherwise using
* the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to
* be bound by the applicable license terms, then you may not retain,
* install, activate or otherwise use the software.
*
==================================================================================================*/

/**
*   @file
*
*   @addtogroup FEE
*   @{
*/
/*   @implements Fee_Cfg.c_Artifact*/
#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Fee.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define FEE_VENDOR_ID_CFG_C                      43
#define FEE_AR_RELEASE_MAJOR_VERSION_CFG_C       4
#define FEE_AR_RELEASE_MINOR_VERSION_CFG_C       7
#define FEE_AR_RELEASE_REVISION_VERSION_CFG_C    0
#define FEE_SW_MAJOR_VERSION_CFG_C               6
#define FEE_SW_MINOR_VERSION_CFG_C               0
#define FEE_SW_PATCH_VERSION_CFG_C               0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and Fee header file are of the same vendor */
#if (FEE_VENDOR_ID_CFG_C != FEE_VENDOR_ID)
    #error "Fee_Cfg.c and Fee.h have different vendor ids"
#endif
/* Check if current file and Fee header file are of the same Autosar version */
#if ((FEE_AR_RELEASE_MAJOR_VERSION_CFG_C    != FEE_AR_RELEASE_MAJOR_VERSION) || \
     (FEE_AR_RELEASE_MINOR_VERSION_CFG_C    != FEE_AR_RELEASE_MINOR_VERSION) || \
     (FEE_AR_RELEASE_REVISION_VERSION_CFG_C != FEE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Fee_Cfg.c and Fee.h are different"
#endif
/* Check if current file and Fee header file are of the same Software version */
#if ((FEE_SW_MAJOR_VERSION_CFG_C != FEE_SW_MAJOR_VERSION) || \
     (FEE_SW_MINOR_VERSION_CFG_C != FEE_SW_MINOR_VERSION) || \
     (FEE_SW_PATCH_VERSION_CFG_C != FEE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Fee_Cfg.c and Fee.h are different"
#endif


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/


#define FEE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

/* Configuration of cluster group FeeClusterGroup_0 */
static const Fee_ClusterType Fee_FeeClusterGroup_0[16] =
{
    /*FeeCluster_0*/
    {
        0U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_1*/
    {
        8192U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_2*/
    {
        16384U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_3*/
    {
        24576U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_4*/
    {
        32768U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_5*/
    {
        40960U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_6*/
    {
        49152U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_7*/
    {
        57344U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_8*/
    {
        65536U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_9*/
    {
        73728U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_10*/
    {
        81920U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_11*/
    {
        90112U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_12*/
    {
        98304U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_13*/
    {
        106496U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_14*/
    {
        114688U, /* Start address */
        8192U /* Size */
    },
    /*FeeCluster_15*/
    {
        122880U, /* Start address */
        8192U /* Size */
    }
};

/* Configuration of cluster group set */
const Fee_ClusterGroupType Fee_ClrGrps[FEE_NUMBER_OF_CLUSTER_GROUPS] =
{
    /*FeeClusterGroup_0*/
    {
        Fee_FeeClusterGroup_0, /* Cluster set */
        16U, /* Number of clusters */
        0U /* Size of the reserved area */
    }
};

/* Configuration of Fee blocks */
const Fee_BlockConfigType Fee_BlockConfig[FEE_CRT_CFG_NR_OF_BLOCKS] =
{
    /*FeeBlockConfiguration_0*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_0, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_1*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_1, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_2*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_2, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_3*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_3, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_4*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_4, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_5*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_5, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_6*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_6, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_7*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_7, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_8*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_8, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_9*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_9, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_10*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_10, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_11*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_11, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_12*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_12, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_13*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_13, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_14*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_14, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_15*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_15, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_16*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_16, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_17*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_17, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_18*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_18, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_19*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_19, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_20*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_20, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_21*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_21, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_22*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_22, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_23*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_23, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_24*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_24, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_25*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_25, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    },
    /*FeeBlockConfiguration_26*/
    {
        FeeConf_FeeBlockConfiguration_FeeBlockConfiguration_26, /* FeeBlockNumber symbol */
        256U, /* FeeBlockSize */
        0U, /* FeeClusterGroup */
        (boolean)FALSE, /* FeeImmediateData */
        FEE_PROJECT_RESERVED /* Fee Block Assignment to a project */
    }
};

#define FEE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Fee_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

