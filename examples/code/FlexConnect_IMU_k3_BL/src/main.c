
/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/* Including necessary configuration files. */
#include "Mcal.h"
#include "Port.h"
#include "Mcu.h"
#include "Gpt.h"
#include "Spi.h"
#include "Dio.h"
#include "Platform.h"
#include "OsIf.h"
#include "Adc.h"
#include "Can_43_FLEXCAN.h"
#include "SchM_Can_43_FLEXCAN.h"
#include "Pwm.h"
#include "Mcl.h"
#include "Icu.h"
#include "CDD_Uart.h"
#include "Lin_43_LPUART_FLEXIO.h"
#include "CDD_I2C.h"
#include "Mem_43_INFLS.h"
#include "MemAcc.h"
#include "Fee.h"
#include "SchM_Fee.h"
#include "SchM_MemAcc.h"
/* User includes */
#include "string.h"
#include "flexconnect.h"
#include "periph.h"

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
#define STEP_TIMER_FREQ 40000000u
#define STEP_10MS_TICKS (Gpt_ValueType)((float)STEP_TIMER_FREQ*0.01F)
#define CAN_NUMBER_OF_MSG 2U
#define IMU_Bytes_A_ID 0x9CFF3A65
#define IMU_Bytes_B_ID 0x9CFF3B65
#define FLX_TransferSize 217U

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
volatile int exit_code = 0;
volatile uint32 base_tick = 0u;
uint8 IMU_Bytes_A[8] = {0x40, 0x40, 0, 0, 0, 0, 0, 0};
uint8 IMU_Bytes_B[8] = {0};
uint8 SPI_IMU_TxData_Config[7] = {0x10, 0x40, 0x40, 0x04, 0x02, 0x00, 0x00};
uint8 SPI_IMU_TxData_Read[15] = {0xa0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
uint8 SPI_IMU_RxData_Read[15] = {0};
uint8 FLX_TxData[256] = {0};
uint8 FLX_RxData[256] = {0};
uint32 FLX_Rx_ID;
uint8 FLX_Rx_Payload[16] = {0};
uint16 FLX_Rx_DLC = 8U;
uint8 FLX_Rx_Channel = 0U;
bool FLX_Rx_DataValid = false;
/* "Enter bootloader" code sent by the SBC host tool (FLXmcuFlash.py, format audesseblocks_noCheck):
 * payload length (7) followed by 0x31 0x83 'F' 'l' 'e' 'x' 'C' */
const uint8 FLX_ENTER_BL_CODE[8] = {0x07, 0x31, 0x83, 0x46, 0x6C, 0x65, 0x78, 0x43};
volatile bool FLX_EnterBL_Request = false;
bool IMU_ConfigComplete = false;
uint8 LEDlevel = 0u;

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
int main(void)
{

    /* Init clock */
	Mcu_Init(NULL_PTR);
	Mcu_InitClock(McuClockSettingConfig_0);
#if (MCU_NO_PLL==STD_OFF)
	while ( MCU_PLL_LOCKED != Mcu_GetPllStatus() )
	{
	    ;/* wait until all enabled PLLs are locked */
	}
	/* switch system clock tree to PLL */
	Mcu_DistributePllClock();
#endif
	Mcu_SetMode(McuModeSettingConf_0);

	/* Init BaseNXP */
	OsIf_Init(NULL_PTR);

    /* Initialize all pins using the Port driver */
	Port_Init(NULL_PTR);

	/* Initialize the high level configuration structure of Gpt driver */
#if (STD_ON == GPT_PRECOMPILE_SUPPORT)
	Gpt_Init(NULL_PTR);
#else
	Gpt_Init(&Gpt_Config_MBDT);
#endif

	/* Initialize ADC */
	Adc_Init(&Adc_Config_MBDT);

	/* Initialize CAN */
	Can_43_FLEXCAN_Init(NULL_PTR);

	/* Initialize SPI */
	Spi_Init(&Spi_Config_MBDT);

	/* Initialize Mcl */
	Mcl_Init(&Mcl_Config_MBDT);

	/* Initialize Pwm */
	Pwm_Init(&Pwm_Config_MBDT);

	/* Initialize Icu */
	Icu_Init(&Icu_Config_MBDT);

	/* Initialize UART */
	Icu_Init(&Icu_Config_MBDT);

	/* Initialize LIN */
	Lin_43_LPUART_FLEXIO_Init(&Lin_43_LPUART_FLEXIO_xConfig_MBDT);

	/* Initialize I2C */
	I2c_Init(&I2c_Config_MBDT);

	/* Initialize Mem_43_INFLS */
	Mem_43_INFLS_Init(NULL_PTR);

	/* Initialize MemAcc */
	MemAcc_Init(NULL_PTR);

	/* Initialize Fee */
	MemIf_StatusType status = MEMIF_IDLE;
	Fee_Init(NULL_PTR);
	do
	{
	    Fee_MainFunction();
	    MemAcc_MainFunction();
	    status = Fee_GetStatus();
	} while (status != MEMIF_IDLE);

	/* Initialize Platform */
	Platform_Init(NULL_PTR);

	/* Set SPI async mode to interrupt */
	Spi_SetAsyncMode(SPI_INTERRUPT_MODE);

	/* Start main loop timer */
	Gpt_StartTimer(GptConf_GptChannelConfiguration_StepTimer, STEP_10MS_TICKS); // 10 ms base rate
	Gpt_EnableNotification(GptConf_GptChannelConfiguration_StepTimer);

	/* Start CAN Controller */
    Can_43_FLEXCAN_SetControllerMode(Can_43_FLEXCANConf_CanController_CanController_2, CAN_CS_STARTED);
	Can_43_FLEXCAN_DisableControllerInterrupts(Can_43_FLEXCANConf_CanController_CanController_2);
	Can_43_FLEXCAN_EnableControllerInterrupts(Can_43_FLEXCANConf_CanController_CanController_2);

	// Main loop
    for(;;)
    {
        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

/* Scheduled tasks */
void Exec_10ms(void)
{
	// Reset into the bootloader if requested over SPI (does not return)
	if (FLX_EnterBL_Request)
	{
		flx_k3JumpToBL();
	}

	if (IMU_ConfigComplete)
	{
		// Read IMU data over SPI
		Spi_SetupEB(SpiConf_SpiChannel_SPI_IMU, SPI_IMU_TxData_Read, SPI_IMU_RxData_Read, 15U);
	}
	else
	{
		// Configure IMU over SPI
		Spi_SetupEB(SpiConf_SpiChannel_SPI_IMU, SPI_IMU_TxData_Config, NULL_PTR, 7U);
		IMU_ConfigComplete = true;
	}

	Spi_SyncTransmit(SpiConf_SpiSequence_SpiSequence_IMU);

	// Copy IMU data to CAN Tx data buffers
	memcpy(&IMU_Bytes_A[2], &SPI_IMU_RxData_Read[9], 6);
	memcpy(IMU_Bytes_B, &SPI_IMU_RxData_Read[1], 8);


	Spi_SetupEB(SpiConf_SpiChannel_SpiChannel_MPU, FLX_TxData, FLX_RxData, FLX_TransferSize);

	// Transmit data over SPI
	Spi_AsyncTransmit(SpiConf_SpiSequence_SpiSequence_MPU);
}

void Exec_100ms(void){}

/* Base step handler */
void MBDT_Step_Handler(void){
	Exec_10ms(); // 10 ms

	if (base_tick%10U == 0){
		Exec_100ms();
	}

	base_tick++;

}

void MBDT_SPI_end_job_MPU_callback(void){
	Spi_JobResultType MPU_Job_Result = Spi_GetJobResult(SpiConf_SpiJob_SpiJob_MPU);
	if (MPU_Job_Result == SPI_JOB_OK){
		// Push SPI data to Flexconnect Tx buffer
		flx_pushToBuffer(7u, IMU_Bytes_A_ID, 8u, IMU_Bytes_A);
		flx_pushToBuffer(7u, IMU_Bytes_B_ID, 8u, IMU_Bytes_B);

		// Prepare Tx data
		flx_txDataPrep(FLX_TxData, FLX_TransferSize);

		// Process Rx data
		FLX_Rx_DataValid = flx_rxDataPrep(FLX_RxData, &FLX_Rx_Channel, &FLX_Rx_ID, &FLX_Rx_DLC, FLX_Rx_Payload, FLX_TransferSize);

		// Request reset into bootloader if the enter-bootloader code was received
		if (FLX_Rx_DataValid && (memcmp(FLX_RxData, FLX_ENTER_BL_CODE, sizeof(FLX_ENTER_BL_CODE)) == 0))
		{
			FLX_EnterBL_Request = true;
		}

		// Flash LED if valid data received from MPU
		if (FLX_Rx_DataValid)
		{
			LEDlevel = 1U - LEDlevel;
		}
		else
		{
			LEDlevel = 0U;
		}
		Dio_WriteChannel(DioConf_DioChannel_EXT_Supply_EN, LEDlevel);
	}
}

// Unused Notification Handlers
void MBDT_SPI_end_job_IMU_callback(void){}
void MBDT_SPI_end_job_DAC_callback(void){}
void MBDT_SPI_end_job_HB_callback(void){}
void MBDT_SPI_end_job_RB_callback(void){}
void MBDT_SPI_end_sequence1_callback(void){}
void MBDT_Uart_Callback(void){}
void Gpt_PitNotification(void){}
void Adc_Adc0Group0Notification(void){}
void Adc_Adc0Group1Notification(void){}
void Adc_Adc1Group0Notification(void){}
void Adc_Adc1Group1Notification(void){}
void Adc_Adc1WdogNotification(void){}
void Adc_Adc2Group0Notification(void){}
void Adc_Adc2Group1Notification(void){}
void Adc0_CtuNewDataNotification(void){}
void Adc0_CtuDataOverrunNotification(void){}
void Adc0_CtuListLastNotification(void){}
void Adc1_CtuNewDataNotification(void){}
void Adc1_CtuDataOverrunNotification(void){}
void Adc1_ListLastNotification(void){}
void Adc_Fifo1_WaterMarkNotification(void){}
void Adc_Fifo1_UnderrunNotification(void){}
void Adc_Fifo1_OverrunNotification(void){}
void MBDT_FlexCAN0_FifoOverflowNotif(void){}
void MBDT_FlexCAN1_FifoWarnNotif(void){}
void MBDT_FlexCAN1_FifoOverflowNotif(void){}
void MBDT_FlexCAN2_FifoWarnNotif(void){}
void MBDT_FlexCAN2_FifoOverflowNotif(void){}
void MBDT_FlexCAN3_FifoWarnNotif(void){}
void MBDT_FlexCAN3_FifoOverflowNotif(void){}
void MBDT_FlexCAN4_FifoWarnNotif(void){}
void MBDT_FlexCAN4_FifoOverflowNotif(void){}
void MBDT_FlexCAN5_FifoWarnNotif(void){}
void MBDT_FlexCAN5_FifoOverflowNotif(void){}
void DI1_EdgeDetect(void){}
void DI2_EdgeDetect(void){}
void DI3_EdgeDetect(void){}
void DI4_EdgeDetect(void){}
