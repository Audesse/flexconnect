/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : FLEXCAN
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

/**
*   @file    Can_43_FLEXCAN_PBcfg_MBDT.c
*   @version 6.0.0
*
*   @brief   AUTOSAR Can_43_FLEXCAN - module interface
*   @details Configuration Structures for PostBuild
*
*   @addtogroup CAN_43_FLEXCAN_DRIVER
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/**
* @page misra_violations MISRA-C:2012 violations
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.1, External identifiers shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.2, Identifiers declared in the same scope and name space shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.4, Macro identifiers shall be distinct.
* The used compilers use more than 31 chars for identifiers.
*
* @section [global]
* Violates MISRA 2012 Required Rule 5.5, Identifiers shall be distinct from macro names.
* The used compilers use more than 31 chars for identifiers.
*
* @section Can_43_FLEXCAN_PBcfg_MBDT_c_REF_1
* Violates MISRA 2012 Required Directive 4.10, Precautions shall be taken in order to prevent the contents
* of a header file being included more than once
* This violation is not fixed since the inclusion of <MA>_MemMap.h is as per AUTOSAR requirement [SWS_MemMap_00003].
*
* @section Can_43_FLEXCAN_PBcfg_MBDT_c_REF_2
* Violates MISRA 2012 Advisory Rule 20.1, #include directives should only be preceded by preprocessor directives or comments.
* AUTOSAR imposes the specification of the sections in which certain parts of the driver must be placed.
*
* @section Can_43_FLEXCAN_PBcfg_MBDT_c_REF_3
* Violates MISRA 2012 Advisory Rule 8.7, Function and objects should not be defined with external linkage if they
* are referenced in only one translation unit.
* This constant variable will be called by higher layer.
*
* @section Can_43_FLEXCAN_PBcfg_MBDT_c_REF_4
* Violates MISRA 2012 Advisory Rule 8.9, An object should be defined at block scope if identifier only appears in a single function.
* These objects are used when Precompile is supported.
*
* @section Can_43_FLEXCAN_PBcfg_MBDT_c_REF_5
* Violates MISRA 2012 Required Rule 8.4, A compatible declaration shall be visible when an object or function with external linkage is defined.
*
*/
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Can_43_FLEXCAN.h"
#include "Can_43_FLEXCAN_Ipw_Types.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CAN_43_FLEXCAN_VENDOR_ID_PBCFG_MBDT_C                      43
#define CAN_43_FLEXCAN_AR_RELEASE_MAJOR_VERSION_PBCFG_MBDT_C       4
#define CAN_43_FLEXCAN_AR_RELEASE_MINOR_VERSION_PBCFG_MBDT_C       7
#define CAN_43_FLEXCAN_AR_RELEASE_REVISION_VERSION_PBCFG_MBDT_C    0
#define CAN_43_FLEXCAN_SW_MAJOR_VERSION_PBCFG_MBDT_C               6
#define CAN_43_FLEXCAN_SW_MINOR_VERSION_PBCFG_MBDT_C               0
#define CAN_43_FLEXCAN_SW_PATCH_VERSION_PBCFG_MBDT_C               0
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Can_43_FLEXCAN.h are of the same vendor */
#if (CAN_43_FLEXCAN_VENDOR_ID_PBCFG_MBDT_C != CAN_43_FLEXCAN_VENDOR_ID)
    #error "Can_43_FLEXCAN_PBcfg_MBDT.c and Can_43_FLEXCAN.h have different vendor ids"
#endif
/* Check if current file and Can_43_FLEXCAN.h are of the same Autosar version */
#if ((CAN_43_FLEXCAN_AR_RELEASE_MAJOR_VERSION_PBCFG_MBDT_C != CAN_43_FLEXCAN_AR_RELEASE_MAJOR_VERSION) || \
     (CAN_43_FLEXCAN_AR_RELEASE_MINOR_VERSION_PBCFG_MBDT_C != CAN_43_FLEXCAN_AR_RELEASE_MINOR_VERSION) || \
     (CAN_43_FLEXCAN_AR_RELEASE_REVISION_VERSION_PBCFG_MBDT_C != CAN_43_FLEXCAN_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Can_43_FLEXCAN_PBcfg_MBDT.c and Can_43_FLEXCAN.h are different"
#endif
/* Check if current file and Can_43_FLEXCAN.h are of the same Software version */
#if ((CAN_43_FLEXCAN_SW_MAJOR_VERSION_PBCFG_MBDT_C != CAN_43_FLEXCAN_SW_MAJOR_VERSION) || \
     (CAN_43_FLEXCAN_SW_MINOR_VERSION_PBCFG_MBDT_C != CAN_43_FLEXCAN_SW_MINOR_VERSION) || \
     (CAN_43_FLEXCAN_SW_PATCH_VERSION_PBCFG_MBDT_C != CAN_43_FLEXCAN_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Can_43_FLEXCAN_PBcfg_MBDT.c and Can_43_FLEXCAN.h are different"
#endif

/* Check if current file and Can_43_FLEXCAN_Ipw_Types.h are of the same vendor */
#if (CAN_43_FLEXCAN_VENDOR_ID_PBCFG_MBDT_C != CAN_43_FLEXCAN_IPW_TYPES_VENDOR_ID_H)
    #error "Can_43_FLEXCAN_PBcfg_MBDT.c and Can_43_FLEXCAN_Ipw_Types.h have different vendor ids"
#endif
/* Check if current file and Can_43_FLEXCAN_Ipw_Types.h are of the same Autosar version */
#if ((CAN_43_FLEXCAN_AR_RELEASE_MAJOR_VERSION_PBCFG_MBDT_C != CAN_43_FLEXCAN_IPW_TYPES_AR_RELEASE_MAJOR_VERSION_H) || \
     (CAN_43_FLEXCAN_AR_RELEASE_MINOR_VERSION_PBCFG_MBDT_C !=  CAN_43_FLEXCAN_IPW_TYPES_AR_RELEASE_MINOR_VERSION_H) || \
     (CAN_43_FLEXCAN_AR_RELEASE_REVISION_VERSION_PBCFG_MBDT_C != CAN_43_FLEXCAN_IPW_TYPES_AR_RELEASE_REVISION_VERSION_H) \
    )
    #error "AutoSar Version Numbers of Can_43_FLEXCAN_PBcfg_MBDT.c and Can_43_FLEXCAN_Ipw_Types.h are different"
#endif
/* Check if current file and Can_43_FLEXCAN_Ipw_Types.h are of the same software version */
#if ((CAN_43_FLEXCAN_SW_MAJOR_VERSION_PBCFG_MBDT_C != CAN_43_FLEXCAN_IPW_TYPES_SW_MAJOR_VERSION_H) || \
     (CAN_43_FLEXCAN_SW_MINOR_VERSION_PBCFG_MBDT_C != CAN_43_FLEXCAN_IPW_TYPES_SW_MINOR_VERSION_H) || \
     (CAN_43_FLEXCAN_SW_PATCH_VERSION_PBCFG_MBDT_C != CAN_43_FLEXCAN_IPW_TYPES_SW_PATCH_VERSION_H) \
    )
    #error "Software Version Numbers of Can_43_FLEXCAN_PBcfg_MBDT.c and Can_43_FLEXCAN_Ipw_Types.h are different"
#endif
/*==================================================================================================
*                                   GLOBAL VARIABLES
==================================================================================================*/
#if (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
    /* CAN_43_FLEXCAN_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE */
    #define CAN_43_FLEXCAN_START_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
    #include "Can_43_FLEXCAN_MemMap.h"


    #define CAN_43_FLEXCAN_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE
    #include "Can_43_FLEXCAN_MemMap.h"
    /* CAN_43_FLEXCAN_STOP_SEC_VAR_CLEARED_UNSPECIFIED_NO_CACHEABLE */
#endif /* (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
/*==================================================================================================
*                                   GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
#define CAN_43_FLEXCAN_START_SEC_CODE
/* @violates @ref Can_43_FLEXCAN_PBcfg_MBDT_c_REF_1 MISRA 2012 Required Directive 4.10 */
#include "Can_43_FLEXCAN_MemMap.h"
extern void MBDT_FlexCAN0_FifoOverflowNotif(void);
extern void MBDT_FlexCAN1_FifoWarnNotif(void);
extern void MBDT_FlexCAN1_FifoOverflowNotif(void);
extern void MBDT_FlexCAN2_FifoWarnNotif(void);
extern void MBDT_FlexCAN2_FifoOverflowNotif(void);
#define CAN_43_FLEXCAN_STOP_SEC_CODE
/* @violates @ref Can_43_FLEXCAN_PBcfg_MBDT_c_REF_1 MISRA 2012 Required Directive 4.10 */
/* @violates @ref Can_43_FLEXCAN_PBcfg_MBDT_c_REF_2 MISRA 2012 Advisory Rule 20.1 */
#include "Can_43_FLEXCAN_MemMap.h"
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/
#define CAN_43_FLEXCAN_START_SEC_CONFIG_DATA_32
#include "Can_43_FLEXCAN_MemMap.h"

/**
*   @brief  Hardware Buffer Address of CanController_0
*/
static const uint32 Can_au32HwBufferAddr_Ctrl0[4U]=
{
    (FLEXCAN_0_BASE + (uint32)0x0098U),
    (FLEXCAN_0_BASE + (uint32)0x00b0U),
    (FLEXCAN_0_BASE + (uint32)0x00c8U),
    (FLEXCAN_0_BASE + (uint32)0x00e0U)
};

/**
*   @brief  Hardware Buffer Address of CanController_1
*/
static const uint32 Can_au32HwBufferAddr_Ctrl1[6U]=
{
    (FLEXCAN_1_BASE + (uint32)0x0080U),
    (FLEXCAN_1_BASE + (uint32)0x0100U),
    (FLEXCAN_1_BASE + (uint32)0x0110U),
    (FLEXCAN_1_BASE + (uint32)0x0120U),
    (FLEXCAN_1_BASE + (uint32)0x0130U),
    (FLEXCAN_1_BASE + (uint32)0x0140U)
};

/**
*   @brief  Hardware Buffer Address of CanController_2
*/
static const uint32 Can_au32HwBufferAddr_Ctrl2[7U]=
{
    (FLEXCAN_2_BASE + (uint32)0x0080U),
    (FLEXCAN_2_BASE + (uint32)0x0100U),
    (FLEXCAN_2_BASE + (uint32)0x0110U),
    (FLEXCAN_2_BASE + (uint32)0x0120U),
    (FLEXCAN_2_BASE + (uint32)0x0130U),
    (FLEXCAN_2_BASE + (uint32)0x0140U),
    (FLEXCAN_2_BASE + (uint32)0x0150U)
};

/**
*   @brief  Hardware Buffer Address of CanController_3
*/
static const uint32 Can_au32HwBufferAddr_Ctrl3[5U]=
{
    (FLEXCAN_3_BASE + (uint32)0x0080U),
    (FLEXCAN_3_BASE + (uint32)0x0100U),
    (FLEXCAN_3_BASE + (uint32)0x0110U),
    (FLEXCAN_3_BASE + (uint32)0x0120U),
    (FLEXCAN_3_BASE + (uint32)0x0130U)
};

/**
*   @brief  Hardware Buffer Address of CanController_4
*/
static const uint32 Can_au32HwBufferAddr_Ctrl4[5U]=
{
    (FLEXCAN_4_BASE + (uint32)0x0080U),
    (FLEXCAN_4_BASE + (uint32)0x0100U),
    (FLEXCAN_4_BASE + (uint32)0x0110U),
    (FLEXCAN_4_BASE + (uint32)0x0120U),
    (FLEXCAN_4_BASE + (uint32)0x0130U)
};

/**
*   @brief  Hardware Buffer Address of CanController_5
*/
static const uint32 Can_au32HwBufferAddr_Ctrl5[5U]=
{
    (FLEXCAN_5_BASE + (uint32)0x0080U),
    (FLEXCAN_5_BASE + (uint32)0x0100U),
    (FLEXCAN_5_BASE + (uint32)0x0110U),
    (FLEXCAN_5_BASE + (uint32)0x0120U),
    (FLEXCAN_5_BASE + (uint32)0x0130U)
};

/**
*   @brief  Hardware Filter of CanHardwareObject_Can0_Rx_FIFO
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object0[8U]=
{
    /* ID Filter Element_0 of Enhanced FIFO with EXTENDED Id and scheme type MASK_FILTER_SCHEME */
    {
        (uint32)0x000003f0U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_1 of Enhanced FIFO with EXTENDED Id and scheme type MASK_FILTER_SCHEME */
    {
        (uint32)0x000003f1U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_2 of Enhanced FIFO with EXTENDED Id and scheme type MASK_FILTER_SCHEME */
    {
        (uint32)0x000003f2U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_3 of Enhanced FIFO with EXTENDED Id and scheme type MASK_FILTER_SCHEME */
    {
        (uint32)0x000003f3U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_4 of Enhanced FIFO with EXTENDED Id and scheme type MASK_FILTER_SCHEME */
    {
        (uint32)0x000003f4U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_5 of Enhanced FIFO with EXTENDED Id and scheme type MASK_FILTER_SCHEME */
    {
        (uint32)0x000003f5U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_6 of Enhanced FIFO with EXTENDED Id and scheme type MASK_FILTER_SCHEME */
    {
        (uint32)0x000003f6U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_7 of Enhanced FIFO with EXTENDED Id and scheme type MASK_FILTER_SCHEME */
    {
        (uint32)0x000003f7U,
        (uint32)0x1fffffffU
    }
};
/**
*   @brief  Hardware Filter of CanHardwareObject_Can0_Rx_Ext_Interrupt
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object1[1U]=
{
    /* ID Filter Element_0 of Rx MB with EXTENDED Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHardwareObject_Can0_Rx_Std_Interrupt
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object2[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHardwareObject_Can1_Rx_FIFO
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object3[8U]=
{
    /* ID Filter Element_0 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f0U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_1 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f1U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_2 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f2U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_3 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f3U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_4 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f4U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_5 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f5U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_6 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f6U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_7 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f7U,
        (uint32)0x1fffffffU
    }
};
/**
*   @brief  Hardware Filter of CanHardwareObject_Can1_Rx_Ext_Interrupt
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object4[1U]=
{
    /* ID Filter Element_0 of Rx MB with EXTENDED Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHardwareObject_Can1_Rx_Std_Interrupt
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object5[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can2_Rx_FIFO
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object6[8U]=
{
    /* ID Filter Element_0 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f0U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_1 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f1U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_2 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f2U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_3 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f3U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_4 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f4U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_5 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f5U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_6 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f6U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_7 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f7U,
        (uint32)0x1fffffffU
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can2_Rx_Std_Interrupt
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object7[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can2_Rx_Ext_Interrupt
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object8[1U]=
{
    /* ID Filter Element_0 of Rx MB with EXTENDED Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can2_Rx_Std_Polling
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object9[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can3_Rx_FIFO
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object10[8U]=
{
    /* ID Filter Element_0 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f0U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_1 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f1U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_2 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f2U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_3 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f3U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_4 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f4U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_5 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f5U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_6 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f6U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_7 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f7U,
        (uint32)0x1fffffffU
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can3_Rx_Std_Polling
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object11[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can3_Rx_Ext_Interrupt
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object12[1U]=
{
    /* ID Filter Element_0 of Rx MB with EXTENDED Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can4_Rx_FIFO
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object13[8U]=
{
    /* ID Filter Element_0 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f0U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_1 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f1U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_2 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f2U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_3 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f3U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_4 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f4U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_5 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f5U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_6 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f6U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_7 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f7U,
        (uint32)0x1fffffffU
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can4_Rx_Std_Polling
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object14[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can4_Rx_Ext_Interrupt
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object15[1U]=
{
    /* ID Filter Element_0 of Rx MB with EXTENDED Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can5_Rx_FIFO
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object16[8U]=
{
    /* ID Filter Element_0 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f0U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_1 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f1U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_2 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f2U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_3 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f3U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_4 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f4U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_5 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f5U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_6 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f6U,
        (uint32)0x1fffffffU
    },
    /* ID Filter Element_7 of Legacy FIFO with EXTENDED Id and the Acceptance Mode FORMAT_A */
    {
        (uint32)0x000003f7U,
        (uint32)0x1fffffffU
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can5_Rx_Std_Polling
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object17[1U]=
{
    /* ID Filter Element_0 of Rx MB with STANDARD Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};
/**
*   @brief  Hardware Filter of CanHO_Can5_Rx_Ext_Interrupt
*/
static const Can_43_FLEXCAN_HwFilterType Can_aHwFilter_Object18[1U]=
{
    /* ID Filter Element_0 of Rx MB with EXTENDED Id */
    {
        (uint32)0x00000000U,
        (uint32)0xc0000000U
    }
};

#define CAN_43_FLEXCAN_STOP_SEC_CONFIG_DATA_32
#include "Can_43_FLEXCAN_MemMap.h"

#define CAN_43_FLEXCAN_START_SEC_CONFIG_DATA_8
#include "Can_43_FLEXCAN_MemMap.h"

/**
*   @brief  Hardware Buffer Index of CanController_0
*/
static const uint8 Can_au8HwBufferIndex_Ctrl0[4U]=
{
    (uint8)1U,
    (uint8)2U,
    (uint8)3U,
    (uint8)4U
};

/**
*   @brief  Hardware Buffer Index of CanController_1
*/
static const uint8 Can_au8HwBufferIndex_Ctrl1[6U]=
{
    (uint8)0U,
    (uint8)8U,
    (uint8)9U,
    (uint8)10U,
    (uint8)11U,
    (uint8)12U
};

/**
*   @brief  Hardware Buffer Index of CanController_2
*/
static const uint8 Can_au8HwBufferIndex_Ctrl2[7U]=
{
    (uint8)0U,
    (uint8)8U,
    (uint8)9U,
    (uint8)10U,
    (uint8)11U,
    (uint8)12U,
    (uint8)13U
};

/**
*   @brief  Hardware Buffer Index of CanController_3
*/
static const uint8 Can_au8HwBufferIndex_Ctrl3[5U]=
{
    (uint8)0U,
    (uint8)8U,
    (uint8)9U,
    (uint8)10U,
    (uint8)11U
};

/**
*   @brief  Hardware Buffer Index of CanController_4
*/
static const uint8 Can_au8HwBufferIndex_Ctrl4[5U]=
{
    (uint8)0U,
    (uint8)8U,
    (uint8)9U,
    (uint8)10U,
    (uint8)11U
};

/**
*   @brief  Hardware Buffer Index of CanController_5
*/
static const uint8 Can_au8HwBufferIndex_Ctrl5[5U]=
{
    (uint8)0U,
    (uint8)8U,
    (uint8)9U,
    (uint8)10U,
    (uint8)11U
};

/**
*   @brief  Mapping Controller ID to Controller hardware offset
*/
static const uint8 Can_aCtrlOffsetToCtrlIDMap[CAN_43_FLEXCAN_HWCONTROLLER_SUPPORT]=
{
    (uint8)0U,
    (uint8)1U,
    (uint8)2U,
    (uint8)3U,
    (uint8)4U,
    (uint8)5U
};
/**
*   @brief  Mapping Controller ID to Hardware Object ID
*/
static const uint8 Can_aHwObjIDToCtrlIDMap[CAN_43_FLEXCAN_HWOBJECT_CONFIG_COUNT]=
{
    (uint8)0U,
    (uint8)0U,
    (uint8)0U,
    (uint8)1U,
    (uint8)1U,
    (uint8)1U,
    (uint8)2U,
    (uint8)2U,
    (uint8)2U,
    (uint8)2U,
    (uint8)3U,
    (uint8)3U,
    (uint8)3U,
    (uint8)4U,
    (uint8)4U,
    (uint8)4U,
    (uint8)5U,
    (uint8)5U,
    (uint8)5U,
    (uint8)0U,
    (uint8)0U,
    (uint8)1U,
    (uint8)1U,
    (uint8)1U,
    (uint8)2U,
    (uint8)2U,
    (uint8)2U,
    (uint8)3U,
    (uint8)3U,
    (uint8)4U,
    (uint8)4U,
    (uint8)5U,
    (uint8)5U
};

#define CAN_43_FLEXCAN_STOP_SEC_CONFIG_DATA_8
#include "Can_43_FLEXCAN_MemMap.h"

#define CAN_43_FLEXCAN_START_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Can_43_FLEXCAN_PBcfg_MBDT_c_REF_1 MISRA 2012 Required Directive 4.10 */
/* @violates @ref Can_43_FLEXCAN_PBcfg_MBDT_c_REF_2 MISRA 2012 Advisory Rule 20.1 */
#include "Can_43_FLEXCAN_MemMap.h"

/**
*   @brief  Can Hardware Object Config
*/
/* @violates @ref Can_43_FLEXCAN_PBcfg_MBDT_c_REF_5 MISRA 2012 Required Rule 8.4*/
static const Can_43_FLEXCAN_HwObjectConfigType Can_aHwObjectConfig[CAN_43_FLEXCAN_HWOBJECT_CONFIG_COUNT]=
{
    /* CanHardwareObject_Can0_Rx_FIFO of CanController_0 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)0U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)6U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)64U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)8U,
        /* Hw Filter Config */
        Can_aHwFilter_Object0,
        /* Message Buffer is RX_ENHANCED_FIFO */
        CAN_43_FLEXCAN_RX_ENHANCED_FIFO,
        /* Buffer Index in Message buffer ram */
        NULL_PTR,
        /* Message buffer address */
        NULL_PTR
    },
    /* CanHardwareObject_Can0_Rx_Ext_Interrupt of CanController_0 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)1U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)16U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object1,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl0[0U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[0U]
    },
    /* CanHardwareObject_Can0_Rx_Std_Interrupt of CanController_0 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)2U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)16U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object2,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl0[1U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[1U]
    },
    /* CanHardwareObject_Can1_Rx_FIFO of CanController_1 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)3U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)6U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)8U,
        /* Hw Filter Config */
        Can_aHwFilter_Object3,
        /* Message Buffer is RX_LEGACY_FIFO */
        CAN_43_FLEXCAN_RX_LEGACY_FIFO,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[0U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[0U]
    },
    /* CanHardwareObject_Can1_Rx_Ext_Interrupt of CanController_1 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)4U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object4,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[1U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[1U]
    },
    /* CanHardwareObject_Can1_Rx_Std_Interrupt of CanController_1 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)5U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object5,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[2U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[2U]
    },
    /* CanHO_Can2_Rx_FIFO of CanController_2 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)6U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)6U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)8U,
        /* Hw Filter Config */
        Can_aHwFilter_Object6,
        /* Message Buffer is RX_LEGACY_FIFO */
        CAN_43_FLEXCAN_RX_LEGACY_FIFO,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[0U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[0U]
    },
    /* CanHO_Can2_Rx_Std_Interrupt of CanController_2 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)7U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object7,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[1U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[1U]
    },
    /* CanHO_Can2_Rx_Ext_Interrupt of CanController_2 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)8U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object8,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[2U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[2U]
    },
    /* CanHO_Can2_Rx_Std_Polling of CanController_2 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)9U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object9,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[3U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[3U]
    },
    /* CanHO_Can3_Rx_FIFO of CanController_3 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)10U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)6U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)8U,
        /* Hw Filter Config */
        Can_aHwFilter_Object10,
        /* Message Buffer is RX_LEGACY_FIFO */
        CAN_43_FLEXCAN_RX_LEGACY_FIFO,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl3[0U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl3[0U]
    },
    /* CanHO_Can3_Rx_Std_Polling of CanController_3 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)11U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object11,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl3[1U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl3[1U]
    },
    /* CanHO_Can3_Rx_Ext_Interrupt of CanController_3 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)12U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object12,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl3[2U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl3[2U]
    },
    /* CanHO_Can4_Rx_FIFO of CanController_4 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)13U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)6U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)8U,
        /* Hw Filter Config */
        Can_aHwFilter_Object13,
        /* Message Buffer is RX_LEGACY_FIFO */
        CAN_43_FLEXCAN_RX_LEGACY_FIFO,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl4[0U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl4[0U]
    },
    /* CanHO_Can4_Rx_Std_Polling of CanController_4 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)14U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object14,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl4[1U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl4[1U]
    },
    /* CanHO_Can4_Rx_Ext_Interrupt of CanController_4 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)15U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object15,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl4[2U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl4[2U]
    },
    /* CanHO_Can5_Rx_FIFO of CanController_5 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)16U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)6U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)8U,
        /* Hw Filter Config */
        Can_aHwFilter_Object16,
        /* Message Buffer is RX_LEGACY_FIFO */
        CAN_43_FLEXCAN_RX_LEGACY_FIFO,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl5[0U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl5[0U]
    },
    /* CanHO_Can5_Rx_Std_Polling of CanController_5 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)17U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_STANDARD,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object17,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl5[1U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl5[1U]
    },
    /* CanHO_Can5_Rx_Ext_Interrupt of CanController_5 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)18U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_RECEIVE,
        /* ID Message type */
        CAN_43_FLEXCAN_EXTENDED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)1U,
        /* Hw Filter Config */
        Can_aHwFilter_Object18,
        /* Message Buffer is RX_NORMAL */
        CAN_43_FLEXCAN_RX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl5[2U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl5[2U]
    },
    /* CanHO_Can0_Tx_Polling of CanController_0 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)19U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)16U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl0[2U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[2U]
    },
    /* CanHO_Can0_Tx_Interrupt of CanController_0 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)20U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)16U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl0[3U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl0[3U]
    },
    /* CanHO_Can1_Tx_Polling of CanController_1 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)21U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[3U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[3U]
    },
    /* CanHO_Can1_Tx_Interrupt0 of CanController_1 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)22U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[4U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[4U]
    },
    /* CanHO_Can1_Tx_Interrupt1 of CanController_1 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)23U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl1[5U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl1[5U]
    },
    /* CanHO_Can2_Tx_Polling of CanController_2 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)24U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[4U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[4U]
    },
    /* CanHO_Can2_Tx_Interrupt0 of CanController_2 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)25U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[5U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[5U]
    },
    /* CanHO_Can2_Tx_Interrupt1 of CanController_2 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)26U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl2[6U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl2[6U]
    },
    /* CanHO_Can3_Tx_Polling of CanController_3 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)27U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl3[3U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl3[3U]
    },
    /* CanHO_Can3_Tx_Interrupt of CanController_3 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)28U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl3[4U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl3[4U]
    },
    /* CanHO_Can4_Tx_Polling of CanController_4 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)29U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl4[3U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl4[3U]
    },
    /* CanHO_Can4_Tx_Interrupt of CanController_4 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)30U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl4[4U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl4[4U]
    },
    /* CanHO_Can5_Tx_Polling of CanController_5 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)31U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)TRUE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)CanMainFunctionRWPeriods_0,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl5[3U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl5[3U]
    },
    /* CanHO_Can5_Tx_Interrupt of CanController_5 */
    {
        /* Hardware Object ID */
        (Can_HwHandleType)32U,
        /* Hardware Object handle type */
        CAN_43_FLEXCAN_TRANSMIT,
        /* ID Message type */
        CAN_43_FLEXCAN_MIXED,
        /* Object uses polling */
        (boolean)FALSE,
        /* Object enable trigger transmit */
        (boolean)FALSE,
        /* Number of Hw Object used in one Hoh */
        (uint8)1U,
        /* MainFunction RW period reference */
        (uint8)0xFFU,
        /* Data Payload length */
        (uint8)8U,
        /* Padding value */
        (uint8)0U,
        /* Hardware Filter Count */
        (uint8)0U,
        /* Hw Filter Config */
        NULL_PTR,
        /* Message Buffer is TX_NORMAL */
        CAN_43_FLEXCAN_TX_NORMAL,
        /* Buffer Index in Message buffer ram */
        &Can_au8HwBufferIndex_Ctrl5[4U],
        /* Message buffer address */
        &Can_au32HwBufferAddr_Ctrl5[4U]
    }
};


/**
*   @brief  Can Baudrate Config of CanController_0
*/
static const Can_43_FLEXCAN_BaudrateConfigType Can_aBaudrateConfig_Ctrl0[1U]=
{
    { /* Start BaudConfig Struct 0 */
        /*Can_bEnhanceCBTEnable*/
        (boolean)FALSE,
            /* Tx Bit Rate Switch - Can_bBitRateSwitch */
        (boolean)TRUE,
        /* FD Enable - Can_bFDFrame*/
        (boolean)TRUE,
            /*Nominal Bit Rate - Can_TimeSegmentType Can_NominalBitRate*/
        {
            (uint8)10U,
            (uint8)17U,
            (uint8)9U,
            /* BaudratePrescaler -Can_u16Prescaler  */
            (uint16)1U,
        #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Prescaler  Can_u16PrescalerAlternate*/
            (uint16)9U,
        #endif
            (uint8)9U
        },
        /* Data bit rate - Can_TimeSegmentType Can_DataBitRate */
        {
            (uint8)5U,
            (uint8)1U,
            (uint8)1U,
            (uint16)1U,
        #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Prescaler  Can_u16PrescalerAlternate*/
            (uint16)0U,
        #endif
            (uint8)1U
        },
        /* Tx Arbitration Start delay - Can_u8TxArbitrationStartDelay */
        (uint8)12U,
        /*Transmiter Delay Compensation Enable */
        (boolean)FALSE,
        /*Specifies the Transmiter Delay Compensation Offset - Can_u8TrcvDelayCompOffset */
        (uint8)0U
    } /* End BaudConfig Struct 0 */
};
/**
*   @brief  HwObjects pointer structure of CanController_0
*/
static const Can_43_FLEXCAN_HwObjectConfigType * const Can_apHwObject_Ctrl0[5U]=
{
    &Can_aHwObjectConfig[0U],
    &Can_aHwObjectConfig[1U],
    &Can_aHwObjectConfig[2U],
    &Can_aHwObjectConfig[19U],
    &Can_aHwObjectConfig[20U]
};

/**
*   @brief  Can Baudrate Config of CanController_1
*/
static const Can_43_FLEXCAN_BaudrateConfigType Can_aBaudrateConfig_Ctrl1[1U]=
{
    { /* Start BaudConfig Struct 0 */
        /*Can_bEnhanceCBTEnable*/
        (boolean)FALSE,
            /* Tx Bit Rate Switch - Can_bBitRateSwitch */
        (boolean)FALSE,
        /* FD Enable - Can_bFDFrame*/
        (boolean)FALSE,
        /*Nominal Bit Rate - Can_TimeSegmentType Can_NominalBitRate*/
        {
            (uint8)5U,
            (uint8)7U,
            (uint8)4U,
            /* BaudratePrescaler -Can_u16Prescaler  */
            (uint16)3U,
        #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Prescaler  Can_u16PrescalerAlternate*/
            (uint16)9U,
        #endif
            (uint8)3U
        },
        /* Data bit rate - Can_TimeSegmentType Can_DataBitRate */
        {
            (uint8)0U,
            (uint8)0U,
            (uint8)0U,
            (uint16)0U,
            #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            (uint16)0U,
            #endif
            (uint8)0U
        },
        /* Tx Arbitration Start delay - Can_u8TxArbitrationStartDelay */
        (uint8)12U,
        /*Transmiter Delay Compensation Enable */
        (boolean)FALSE,
        /*Specifies the Transmiter Delay Compensation Offset - Can_u8TrcvDelayCompOffset */
        (uint8)0U
    } /* End BaudConfig Struct 0 */
};
/**
*   @brief  HwObjects pointer structure of CanController_1
*/
static const Can_43_FLEXCAN_HwObjectConfigType * const Can_apHwObject_Ctrl1[6U]=
{
    &Can_aHwObjectConfig[3U],
    &Can_aHwObjectConfig[4U],
    &Can_aHwObjectConfig[5U],
    &Can_aHwObjectConfig[21U],
    &Can_aHwObjectConfig[22U],
    &Can_aHwObjectConfig[23U]
};

/**
*   @brief  Can Baudrate Config of CanController_2
*/
static const Can_43_FLEXCAN_BaudrateConfigType Can_aBaudrateConfig_Ctrl2[1U]=
{
    { /* Start BaudConfig Struct 0 */
        /*Can_bEnhanceCBTEnable*/
        (boolean)FALSE,
            /* Tx Bit Rate Switch - Can_bBitRateSwitch */
        (boolean)FALSE,
        /* FD Enable - Can_bFDFrame*/
        (boolean)FALSE,
        /*Nominal Bit Rate - Can_TimeSegmentType Can_NominalBitRate*/
        {
            (uint8)5U,
            (uint8)7U,
            (uint8)4U,
            /* BaudratePrescaler -Can_u16Prescaler  */
            (uint16)3U,
        #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Prescaler  Can_u16PrescalerAlternate*/
            (uint16)9U,
        #endif
            (uint8)3U
        },
        /* Data bit rate - Can_TimeSegmentType Can_DataBitRate */
        {
            (uint8)0U,
            (uint8)0U,
            (uint8)0U,
            (uint16)0U,
            #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            (uint16)0U,
            #endif
            (uint8)0U
        },
        /* Tx Arbitration Start delay - Can_u8TxArbitrationStartDelay */
        (uint8)12U,
        /*Transmiter Delay Compensation Enable */
        (boolean)FALSE,
        /*Specifies the Transmiter Delay Compensation Offset - Can_u8TrcvDelayCompOffset */
        (uint8)0U
    } /* End BaudConfig Struct 0 */
};
/**
*   @brief  HwObjects pointer structure of CanController_2
*/
static const Can_43_FLEXCAN_HwObjectConfigType * const Can_apHwObject_Ctrl2[7U]=
{
    &Can_aHwObjectConfig[6U],
    &Can_aHwObjectConfig[7U],
    &Can_aHwObjectConfig[8U],
    &Can_aHwObjectConfig[9U],
    &Can_aHwObjectConfig[24U],
    &Can_aHwObjectConfig[25U],
    &Can_aHwObjectConfig[26U]
};

/**
*   @brief  Can Baudrate Config of CanController_3
*/
static const Can_43_FLEXCAN_BaudrateConfigType Can_aBaudrateConfig_Ctrl3[1U]=
{
    { /* Start BaudConfig Struct 0 */
        /*Can_bEnhanceCBTEnable*/
        (boolean)FALSE,
            /* Tx Bit Rate Switch - Can_bBitRateSwitch */
        (boolean)FALSE,
        /* FD Enable - Can_bFDFrame*/
        (boolean)FALSE,
        /*Nominal Bit Rate - Can_TimeSegmentType Can_NominalBitRate*/
        {
            (uint8)5U,
            (uint8)7U,
            (uint8)4U,
            /* BaudratePrescaler -Can_u16Prescaler  */
            (uint16)3U,
        #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Prescaler  Can_u16PrescalerAlternate*/
            (uint16)9U,
        #endif
            (uint8)3U
        },
        /* Data bit rate - Can_TimeSegmentType Can_DataBitRate */
        {
            (uint8)0U,
            (uint8)0U,
            (uint8)0U,
            (uint16)0U,
            #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            (uint16)0U,
            #endif
            (uint8)0U
        },
        /* Tx Arbitration Start delay - Can_u8TxArbitrationStartDelay */
        (uint8)12U,
        /*Transmiter Delay Compensation Enable */
        (boolean)FALSE,
        /*Specifies the Transmiter Delay Compensation Offset - Can_u8TrcvDelayCompOffset */
        (uint8)0U
    } /* End BaudConfig Struct 0 */
};
/**
*   @brief  HwObjects pointer structure of CanController_3
*/
static const Can_43_FLEXCAN_HwObjectConfigType * const Can_apHwObject_Ctrl3[5U]=
{
    &Can_aHwObjectConfig[10U],
    &Can_aHwObjectConfig[11U],
    &Can_aHwObjectConfig[12U],
    &Can_aHwObjectConfig[27U],
    &Can_aHwObjectConfig[28U]
};

/**
*   @brief  Can Baudrate Config of CanController_4
*/
static const Can_43_FLEXCAN_BaudrateConfigType Can_aBaudrateConfig_Ctrl4[1U]=
{
    { /* Start BaudConfig Struct 0 */
        /*Can_bEnhanceCBTEnable*/
        (boolean)FALSE,
            /* Tx Bit Rate Switch - Can_bBitRateSwitch */
        (boolean)FALSE,
        /* FD Enable - Can_bFDFrame*/
        (boolean)FALSE,
        /*Nominal Bit Rate - Can_TimeSegmentType Can_NominalBitRate*/
        {
            (uint8)5U,
            (uint8)7U,
            (uint8)4U,
            /* BaudratePrescaler -Can_u16Prescaler  */
            (uint16)3U,
        #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Prescaler  Can_u16PrescalerAlternate*/
            (uint16)9U,
        #endif
            (uint8)3U
        },
        /* Data bit rate - Can_TimeSegmentType Can_DataBitRate */
        {
            (uint8)0U,
            (uint8)0U,
            (uint8)0U,
            (uint16)0U,
            #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            (uint16)0U,
            #endif
            (uint8)0U
        },
        /* Tx Arbitration Start delay - Can_u8TxArbitrationStartDelay */
        (uint8)12U,
        /*Transmiter Delay Compensation Enable */
        (boolean)FALSE,
        /*Specifies the Transmiter Delay Compensation Offset - Can_u8TrcvDelayCompOffset */
        (uint8)0U
    } /* End BaudConfig Struct 0 */
};
/**
*   @brief  HwObjects pointer structure of CanController_4
*/
static const Can_43_FLEXCAN_HwObjectConfigType * const Can_apHwObject_Ctrl4[5U]=
{
    &Can_aHwObjectConfig[13U],
    &Can_aHwObjectConfig[14U],
    &Can_aHwObjectConfig[15U],
    &Can_aHwObjectConfig[29U],
    &Can_aHwObjectConfig[30U]
};

/**
*   @brief  Can Baudrate Config of CanController_5
*/
static const Can_43_FLEXCAN_BaudrateConfigType Can_aBaudrateConfig_Ctrl5[1U]=
{
    { /* Start BaudConfig Struct 0 */
        /*Can_bEnhanceCBTEnable*/
        (boolean)FALSE,
            /* Tx Bit Rate Switch - Can_bBitRateSwitch */
        (boolean)FALSE,
        /* FD Enable - Can_bFDFrame*/
        (boolean)FALSE,
        /*Nominal Bit Rate - Can_TimeSegmentType Can_NominalBitRate*/
        {
            (uint8)5U,
            (uint8)7U,
            (uint8)4U,
            /* BaudratePrescaler -Can_u16Prescaler  */
            (uint16)3U,
        #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            /* Alternative Baudrate Prescaler  Can_u16PrescalerAlternate*/
            (uint16)9U,
        #endif
            (uint8)3U
        },
        /* Data bit rate - Can_TimeSegmentType Can_DataBitRate */
        {
            (uint8)0U,
            (uint8)0U,
            (uint8)0U,
            (uint16)0U,
            #if (CAN_43_FLEXCAN_DUAL_CLOCK_MODE == STD_ON)
            (uint16)0U,
            #endif
            (uint8)0U
        },
        /* Tx Arbitration Start delay - Can_u8TxArbitrationStartDelay */
        (uint8)12U,
        /*Transmiter Delay Compensation Enable */
        (boolean)FALSE,
        /*Specifies the Transmiter Delay Compensation Offset - Can_u8TrcvDelayCompOffset */
        (uint8)0U
    } /* End BaudConfig Struct 0 */
};
/**
*   @brief  HwObjects pointer structure of CanController_5
*/
static const Can_43_FLEXCAN_HwObjectConfigType * const Can_apHwObject_Ctrl5[5U]=
{
    &Can_aHwObjectConfig[16U],
    &Can_aHwObjectConfig[17U],
    &Can_aHwObjectConfig[18U],
    &Can_aHwObjectConfig[31U],
    &Can_aHwObjectConfig[32U]
};

CAN_43_FLEXCAN_IPW_EXT
/**
*   @brief  Can Controller Config
*/
static const Can_43_FLEXCAN_ControllerConfigType Can_aControllerConfig[CAN_43_FLEXCAN_CONTROLLER_CONFIG_COUNT]=
{
    {   /* Start Generation of ControllerConfig_0 structure */
        /* Abstracted CanIf Controller ID */
        (uint8)0U,
        /* Controller ID */
        (uint8)0U,
        /* Controller Offset */
        (uint8)0U,
        /* Controller Base Address */
        FLEXCAN_0_BASE,
        /* Controller Activation */
        (boolean)TRUE,
        /* Bus Off uses polling */
        (boolean)TRUE,
        /* --- Default values when Legacy FIFO is not available --- */
        /* Global mask of Legacy FIFO */
        (uint32)0xFFFFFFFFU,
        /* ID Acceptance Mode */
        CAN_43_FLEXCAN_LEGACY_FIFO_FORMAT_A,
        /* Legacy FIFO Warning Notification */
        NULL_PTR,
        /* Legacy FIFO Overflow Notification */
        NULL_PTR,
        /* Enhanced FIFO Overflow Notification */
        MBDT_FlexCAN0_FifoOverflowNotif,
        #if (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* FIFO Dma Error Notification is not used */
        NULL_PTR,
        /* DMA is not enabled */
        NULL_PTR,
        #endif /* (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
        /* Default Baudrate ID */
        (uint16)0U,
        /* Baudrate config Count*/
        (uint16)1U,
        /* Baudrate config Pointer Structure */
        Can_aBaudrateConfig_Ctrl0,
        /* Pointer to IPW structure to IP config */
        &Can_43_FLEXCANIpwHwChannelConfig_MBDT0,
        /* Hw Object reference count */
        (uint8)5U,
        /* Pointer point to Group of Hw Object that refer to Controller */
        Can_apHwObject_Ctrl0
        #if (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON)
        ,(boolean)FALSE
        #endif
    },
    {   /* Start Generation of ControllerConfig_1 structure */
        /* Abstracted CanIf Controller ID */
        (uint8)1U,
        /* Controller ID */
        (uint8)1U,
        /* Controller Offset */
        (uint8)1U,
        /* Controller Base Address */
        FLEXCAN_1_BASE,
        /* Controller Activation */
        (boolean)TRUE,
        /* Bus Off uses polling */
        (boolean)TRUE,
        /* Global mask of Legacy FIFO */
        (uint32)0xc0000000U,
        /* ID Acceptance Mode */
        CAN_43_FLEXCAN_LEGACY_FIFO_FORMAT_A,
        /* Legacy FIFO Warning Notification */
        MBDT_FlexCAN1_FifoWarnNotif,
        /* Legacy FIFO Overflow Notification */
        MBDT_FlexCAN1_FifoOverflowNotif,
        /* Enhanced FIFO Overflow Notification */
        NULL_PTR,
        #if (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* FIFO Dma Error Notification is not used */
        NULL_PTR,
        /* DMA is not enabled */
        NULL_PTR,
        #endif /* (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
        /* Default Baudrate ID */
        (uint16)0U,
        /* Baudrate config Count*/
        (uint16)1U,
        /* Baudrate config Pointer Structure */
        Can_aBaudrateConfig_Ctrl1,
        /* Pointer to IPW structure to IP config */
        &Can_43_FLEXCANIpwHwChannelConfig_MBDT1,
        /* Hw Object reference count */
        (uint8)6U,
        /* Pointer point to Group of Hw Object that refer to Controller */
        Can_apHwObject_Ctrl1
        #if (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON)
        ,(boolean)FALSE
        #endif
    },
    {   /* Start Generation of ControllerConfig_2 structure */
        /* Abstracted CanIf Controller ID */
        (uint8)2U,
        /* Controller ID */
        (uint8)2U,
        /* Controller Offset */
        (uint8)2U,
        /* Controller Base Address */
        FLEXCAN_2_BASE,
        /* Controller Activation */
        (boolean)TRUE,
        /* Bus Off uses polling */
        (boolean)TRUE,
        /* Global mask of Legacy FIFO */
        (uint32)0xc0000000U,
        /* ID Acceptance Mode */
        CAN_43_FLEXCAN_LEGACY_FIFO_FORMAT_A,
        /* Legacy FIFO Warning Notification */
        MBDT_FlexCAN2_FifoWarnNotif,
        /* Legacy FIFO Overflow Notification */
        MBDT_FlexCAN2_FifoOverflowNotif,
        /* Enhanced FIFO Overflow Notification */
        NULL_PTR,
        #if (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* FIFO Dma Error Notification is not used */
        NULL_PTR,
        /* DMA is not enabled */
        NULL_PTR,
        #endif /* (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
        /* Default Baudrate ID */
        (uint16)0U,
        /* Baudrate config Count*/
        (uint16)1U,
        /* Baudrate config Pointer Structure */
        Can_aBaudrateConfig_Ctrl2,
        /* Pointer to IPW structure to IP config */
        &Can_43_FLEXCANIpwHwChannelConfig_MBDT2,
        /* Hw Object reference count */
        (uint8)7U,
        /* Pointer point to Group of Hw Object that refer to Controller */
        Can_apHwObject_Ctrl2
        #if (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON)
        ,(boolean)FALSE
        #endif
    },
    {   /* Start Generation of ControllerConfig_3 structure */
        /* Abstracted CanIf Controller ID */
        (uint8)3U,
        /* Controller ID */
        (uint8)3U,
        /* Controller Offset */
        (uint8)3U,
        /* Controller Base Address */
        FLEXCAN_3_BASE,
        /* Controller Activation */
        (boolean)TRUE,
        /* Bus Off uses polling */
        (boolean)TRUE,
        /* Global mask of Legacy FIFO */
        (uint32)0xc0000000U,
        /* ID Acceptance Mode */
        CAN_43_FLEXCAN_LEGACY_FIFO_FORMAT_A,
        /* Legacy FIFO Warning Notification */
        MBDT_FlexCAN2_FifoWarnNotif,
        /* Legacy FIFO Overflow Notification */
        MBDT_FlexCAN2_FifoOverflowNotif,
        /* Enhanced FIFO Overflow Notification */
        NULL_PTR,
        #if (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* FIFO Dma Error Notification is not used */
        NULL_PTR,
        /* DMA is not enabled */
        NULL_PTR,
        #endif /* (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
        /* Default Baudrate ID */
        (uint16)0U,
        /* Baudrate config Count*/
        (uint16)1U,
        /* Baudrate config Pointer Structure */
        Can_aBaudrateConfig_Ctrl3,
        /* Pointer to IPW structure to IP config */
        &Can_43_FLEXCANIpwHwChannelConfig_MBDT3,
        /* Hw Object reference count */
        (uint8)5U,
        /* Pointer point to Group of Hw Object that refer to Controller */
        Can_apHwObject_Ctrl3
        #if (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON)
        ,(boolean)FALSE
        #endif
    },
    {   /* Start Generation of ControllerConfig_4 structure */
        /* Abstracted CanIf Controller ID */
        (uint8)4U,
        /* Controller ID */
        (uint8)4U,
        /* Controller Offset */
        (uint8)4U,
        /* Controller Base Address */
        FLEXCAN_4_BASE,
        /* Controller Activation */
        (boolean)TRUE,
        /* Bus Off uses polling */
        (boolean)TRUE,
        /* Global mask of Legacy FIFO */
        (uint32)0xc0000000U,
        /* ID Acceptance Mode */
        CAN_43_FLEXCAN_LEGACY_FIFO_FORMAT_A,
        /* Legacy FIFO Warning Notification */
        MBDT_FlexCAN2_FifoWarnNotif,
        /* Legacy FIFO Overflow Notification */
        MBDT_FlexCAN2_FifoOverflowNotif,
        /* Enhanced FIFO Overflow Notification */
        NULL_PTR,
        #if (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* FIFO Dma Error Notification is not used */
        NULL_PTR,
        /* DMA is not enabled */
        NULL_PTR,
        #endif /* (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
        /* Default Baudrate ID */
        (uint16)0U,
        /* Baudrate config Count*/
        (uint16)1U,
        /* Baudrate config Pointer Structure */
        Can_aBaudrateConfig_Ctrl4,
        /* Pointer to IPW structure to IP config */
        &Can_43_FLEXCANIpwHwChannelConfig_MBDT4,
        /* Hw Object reference count */
        (uint8)5U,
        /* Pointer point to Group of Hw Object that refer to Controller */
        Can_apHwObject_Ctrl4
        #if (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON)
        ,(boolean)FALSE
        #endif
    },
    {   /* Start Generation of ControllerConfig_5 structure */
        /* Abstracted CanIf Controller ID */
        (uint8)5U,
        /* Controller ID */
        (uint8)5U,
        /* Controller Offset */
        (uint8)5U,
        /* Controller Base Address */
        FLEXCAN_5_BASE,
        /* Controller Activation */
        (boolean)TRUE,
        /* Bus Off uses polling */
        (boolean)TRUE,
        /* Global mask of Legacy FIFO */
        (uint32)0xc0000000U,
        /* ID Acceptance Mode */
        CAN_43_FLEXCAN_LEGACY_FIFO_FORMAT_A,
        /* Legacy FIFO Warning Notification */
        MBDT_FlexCAN2_FifoWarnNotif,
        /* Legacy FIFO Overflow Notification */
        MBDT_FlexCAN2_FifoOverflowNotif,
        /* Enhanced FIFO Overflow Notification */
        NULL_PTR,
        #if (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON)
        /* FIFO Dma Error Notification is not used */
        NULL_PTR,
        /* DMA is not enabled */
        NULL_PTR,
        #endif /* (CAN_43_FLEXCAN_FEATURE_HAS_DMA_ENABLE == STD_ON) */
        /* Default Baudrate ID */
        (uint16)0U,
        /* Baudrate config Count*/
        (uint16)1U,
        /* Baudrate config Pointer Structure */
        Can_aBaudrateConfig_Ctrl5,
        /* Pointer to IPW structure to IP config */
        &Can_43_FLEXCANIpwHwChannelConfig_MBDT5,
        /* Hw Object reference count */
        (uint8)5U,
        /* Pointer point to Group of Hw Object that refer to Controller */
        Can_apHwObject_Ctrl5
        #if (CAN_43_FLEXCAN_TIMESTAMP_ENABLE == STD_ON)
        ,(boolean)FALSE
        #endif
    }
};  /* End of generation Can_ControllerConfigType */


/**
*   @brief  Can Controller Object pointer structure
*/
static const Can_43_FLEXCAN_ControllerConfigType * const Can_apController[CAN_43_FLEXCAN_CONTROLLER_CONFIG_COUNT]=
{
    &Can_aControllerConfig[0U],
    &Can_aControllerConfig[1U],
    &Can_aControllerConfig[2U],
    &Can_aControllerConfig[3U],
    &Can_aControllerConfig[4U],
    &Can_aControllerConfig[5U]
};
/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/
/**
*   @brief  Top level structure contain all Can driver Config
*/
const Can_43_FLEXCAN_ConfigType Can_43_FLEXCAN_Config =
{
    /* Configuration Partition ID */
    (uint32)0U,
    /* The HTH first Index after HRH consecutive */
    (Can_HwHandleType)19U,
    /* Mapping Controller ID to Controller Hw Offset */
    Can_aCtrlOffsetToCtrlIDMap,
    /* Mapping Controller ID to Hardware Object ID */
    Can_aHwObjIDToCtrlIDMap,
    /* Pointer point to Can Hw Object Config */
    Can_aHwObjectConfig,
    /* Array of Pointer to Controller infomation have aligned by Controller ID */
    Can_apController
};

#define CAN_43_FLEXCAN_STOP_SEC_CONFIG_DATA_UNSPECIFIED
/* @violates @ref Can_43_FLEXCAN_PBcfg_MBDT_c_REF_1 MISRA 2012 Required Directive 4.10 */
/* @violates @ref Can_43_FLEXCAN_PBcfg_MBDT_c_REF_2 MISRA 2012 Advisory Rule 20.1 */
#include "Can_43_FLEXCAN_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

