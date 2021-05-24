/*************************************************************************//**
 * @file     main.c
 * @version  V1.00
 * @brief    A project template for M480 MCU.
 *
 * @copyright (C) 2016 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/
#include <stdio.h>
#include "NuMicro.h"
#include "NuPinConfig.h"
#include "NuClockConfig.h"
#include "NK_M487.h"

#define PLL_CLOCK           192000000

/*
 * This is a template project for M480 series MCU. Users could based on this project to create their
 * own application without worry about the IAR/Keil project settings.
 *
 * This template application uses external crystal as HCLK source and configures UART0 to print out
 * "Hello World", users may need to do extra system configuration based on their system design.
 */

int main()
{
	/* Unlock protected registers */
	/*SYS_UnlockReg();

	/* Init System, IP clock and multi-function I/O */
	//SYS_Init();

	/* Lock protected registers */
	//SYS_LockReg();

	NuClockConfig_init();
	NuPinConfig_init();

	GPIO_SetMode(PH, BIT7, GPIO_MODE_OPEN_DRAIN);//LED1
	GPIO_SetMode(PH, BIT6, GPIO_MODE_OPEN_DRAIN);//LED0
	GPIO_SetMode(PB, BIT7, GPIO_MODE_OUTPUT);//LCD_BL


    /* Init UART to 115200-8n1 for print message */
    UART_Open(UART0, 115200);

    //BPWM_ConfigOutputChannel(BPWM0, BPWM_CH_5_MASK, 10, 50);

	/* Enable output of BPWM0 channel 0~5 */
	//BPWM_EnableOutput(BPWM0, BPWM_CH_5_MASK);

	/* Start BPWM0 counter */
	//BPWM_Start(BPWM0,BPWM_CH_5_MASK);

	/* Start BPWM0 counter */
	//

    /* Connect UART to PC, and open a terminal tool to receive following message */
    printf("Hello World\n");

    LED1 = 1;
    LED2 = 0;
    LCD_BL = 1;

    /* Got no where to go, just loop forever */
    while(1)
    {
    	if(!PA0)
    	{
    		LED1 = ~LED1;
    		LED2 = ~LED2;
    		while(!PA0);
    		//BPWM_ForceStop(BPWM0, BPWM_CH_5_MASK);
    		//BPWM_ConfigOutputChannel(BPWM0, 5, 1000, 50);
    	}
    	else if(!PA1)
    	{
    		LCD_BL = ~LCD_BL;
    		while(!PA1);
    		//BPWM_Start(BPWM0, BPWM_CH_5_MASK);
    		//BPWM_ConfigOutputChannel(BPWM0, 5, 3000, 60);
    	}
    	//else BPWM_ConfigOutputChannel(BPWM0, 5, 1000, 50);
    	//CLK_SysTickDelay(time);
    }

}

/*** (C) COPYRIGHT 2016 Nuvoton Technology Corp. ***/
