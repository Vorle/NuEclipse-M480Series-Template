/****************************************************************************
 * @file     NuClockConfig.c
 * @version  V1.05
 * @Date     2021/03/31-10:25:07 
 * @brief    NuMicro generated code file
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Copyright (C) 2013-2021 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

/********************
MCU:M487JIDAE(LQFP144)
Base Clocks:
LIRC:10kHz
HIRC:12MHz
LXT:32.7680kHz
HXT:12MHz
PLL:192MHz
HSUSB_OTG_PHY:30MHz
HCLK:192MHz
PCLK0:96MHz
PCLK1:48MHz
Enabled-Module Frequencies:
BPWM0=Bus Clock(PCLK0):96MHz/Engine Clock:96MHz
CAN0=Bus Clock(PCLK0):96MHz
CLKO=Bus Clock(HCLK):192MHz/Engine Clock:192MHz
CRC=Bus Clock(HCLK):192MHz
DAC=Bus Clock(PCLK1):48MHz
EBI=Bus Clock(HCLK):192MHz
EMAC=Bus Clock(HCLK):192MHz/Engine Clock:192MHz
FMCIDLE=Bus Clock(HCLK):192MHz/Engine Clock:12MHz
I2C2=Bus Clock(PCLK0):96MHz
I2S0=Bus Clock(PCLK0):96MHz/Engine Clock:192MHz
ISP=Bus Clock(HCLK):192MHz/Engine Clock:12MHz
PDMA=Bus Clock(HCLK):192MHz
RTC=Bus Clock(PCLK1):48MHz/Engine Clock:32.7680kHz
SC0=Bus Clock(PCLK0):96MHz/Engine Clock:12MHz
SDH0=Bus Clock(HCLK):192MHz/Engine Clock:192MHz
SPI1=Bus Clock(PCLK0):96MHz/Engine Clock:96MHz
SPIM=Bus Clock(HCLK):192MHz
TMR0=Bus Clock(PCLK0):96MHz/Engine Clock:96MHz
TMR1=Bus Clock(PCLK0):96MHz/Engine Clock:12MHz
TMR2=Bus Clock(PCLK1):48MHz/Engine Clock:12MHz
TMR3=Bus Clock(PCLK1):48MHz/Engine Clock:48MHz
UART2=Bus Clock(PCLK0):96MHz/Engine Clock:192MHz
UART5=Bus Clock(PCLK1):48MHz/Engine Clock:192MHz
USBD=Bus Clock(PCLK0):96MHz/Engine Clock:192MHz
WDT=Bus Clock(PCLK0):96MHz/Engine Clock:10kHz
WWDT=Bus Clock(PCLK0):96MHz/Engine Clock:93.7500kHz
********************/

#include "M480.h"

void NuClockConfig_init_bpwm0(void)
{
    CLK_EnableModuleClock(BPWM0_MODULE);
    CLK_SetModuleClock(BPWM0_MODULE, CLK_CLKSEL2_BPWM0SEL_PCLK0, MODULE_NoMsk);

    return;
}

void NuClockConfig_deinit_bpwm0(void)
{
    CLK_DisableModuleClock(BPWM0_MODULE);

    return;
}

void NuClockConfig_init_can0(void)
{
    CLK_EnableModuleClock(CAN0_MODULE);

    return;
}

void NuClockConfig_deinit_can0(void)
{
    CLK_DisableModuleClock(CAN0_MODULE);

    return;
}

void NuClockConfig_init_clko(void)
{
    CLK_EnableCKO(CLK_CLKSEL1_CLKOSEL_HCLK, MODULE_NoMsk, 1);
    CLK->CLKOCTL = CLK->CLKOCTL & ~CLK_CLKOCTL_CLK1HZEN_Msk;

    return;
}

void NuClockConfig_deinit_clko(void)
{
    CLK_DisableCKO();

    return;
}

void NuClockConfig_init_crc(void)
{
    CLK_EnableModuleClock(CRC_MODULE);

    return;
}

void NuClockConfig_deinit_crc(void)
{
    CLK_DisableModuleClock(CRC_MODULE);

    return;
}

void NuClockConfig_init_dac(void)
{
    CLK_EnableModuleClock(DAC_MODULE);

    return;
}

void NuClockConfig_deinit_dac(void)
{
    CLK_DisableModuleClock(DAC_MODULE);

    return;
}

void NuClockConfig_init_ebi(void)
{
    CLK_EnableModuleClock(EBI_MODULE);

    return;
}

void NuClockConfig_deinit_ebi(void)
{
    CLK_DisableModuleClock(EBI_MODULE);

    return;
}

void NuClockConfig_init_emac(void)
{
    CLK_EnableModuleClock(EMAC_MODULE);
    CLK_SetModuleClock(EMAC_MODULE, MODULE_NoMsk, CLK_CLKDIV3_EMAC(1));

    return;
}

void NuClockConfig_deinit_emac(void)
{
    CLK_DisableModuleClock(EMAC_MODULE);

    return;
}

void NuClockConfig_init_fmcidle(void)
{
    CLK_EnableModuleClock(FMCIDLE_MODULE);

    return;
}

void NuClockConfig_deinit_fmcidle(void)
{
    CLK_DisableModuleClock(FMCIDLE_MODULE);

    return;
}

void NuClockConfig_init_i2c2(void)
{
    CLK_EnableModuleClock(I2C2_MODULE);

    return;
}

void NuClockConfig_deinit_i2c2(void)
{
    CLK_DisableModuleClock(I2C2_MODULE);

    return;
}

void NuClockConfig_init_i2s0(void)
{
    CLK_EnableModuleClock(I2S0_MODULE);
    CLK_SetModuleClock(I2S0_MODULE, CLK_CLKSEL3_I2S0SEL_PLL, MODULE_NoMsk);

    return;
}

void NuClockConfig_deinit_i2s0(void)
{
    CLK_DisableModuleClock(I2S0_MODULE);

    return;
}

void NuClockConfig_init_isp(void)
{
    CLK_EnableModuleClock(ISP_MODULE);

    return;
}

void NuClockConfig_deinit_isp(void)
{
    CLK_DisableModuleClock(ISP_MODULE);

    return;
}

void NuClockConfig_init_pdma(void)
{
    CLK_EnableModuleClock(PDMA_MODULE);

    return;
}

void NuClockConfig_deinit_pdma(void)
{
    CLK_DisableModuleClock(PDMA_MODULE);

    return;
}

void NuClockConfig_init_rtc(void)
{
    CLK_EnableModuleClock(RTC_MODULE);
    CLK_SetModuleClock(RTC_MODULE, CLK_CLKSEL3_RTCSEL_LXT, MODULE_NoMsk);

    return;
}

void NuClockConfig_deinit_rtc(void)
{
    CLK_DisableModuleClock(RTC_MODULE);

    return;
}

void NuClockConfig_init_sc0(void)
{
    CLK_EnableModuleClock(SC0_MODULE);
    CLK_SetModuleClock(SC0_MODULE, CLK_CLKSEL3_SC0SEL_HXT, CLK_CLKDIV1_SC0(1));

    return;
}

void NuClockConfig_deinit_sc0(void)
{
    CLK_DisableModuleClock(SC0_MODULE);

    return;
}

void NuClockConfig_init_sdh0(void)
{
    CLK_EnableModuleClock(SDH0_MODULE);
    CLK_SetModuleClock(SDH0_MODULE, CLK_CLKSEL0_SDH0SEL_PLL, CLK_CLKDIV0_SDH0(1));

    return;
}

void NuClockConfig_deinit_sdh0(void)
{
    CLK_DisableModuleClock(SDH0_MODULE);

    return;
}

void NuClockConfig_init_spi1(void)
{
    CLK_EnableModuleClock(SPI1_MODULE);
    CLK_SetModuleClock(SPI1_MODULE, CLK_CLKSEL2_SPI1SEL_PCLK0, MODULE_NoMsk);

    return;
}

void NuClockConfig_deinit_spi1(void)
{
    CLK_DisableModuleClock(SPI1_MODULE);

    return;
}

void NuClockConfig_init_spim(void)
{
    CLK_EnableModuleClock(SPIM_MODULE);

    return;
}

void NuClockConfig_deinit_spim(void)
{
    CLK_DisableModuleClock(SPIM_MODULE);

    return;
}

void NuClockConfig_init_tmr0(void)
{
    CLK_EnableModuleClock(TMR0_MODULE);
    CLK_SetModuleClock(TMR0_MODULE, CLK_CLKSEL1_TMR0SEL_PCLK0, MODULE_NoMsk);

    return;
}

void NuClockConfig_deinit_tmr0(void)
{
    CLK_DisableModuleClock(TMR0_MODULE);

    return;
}

void NuClockConfig_init_tmr1(void)
{
    CLK_EnableModuleClock(TMR1_MODULE);
    CLK_SetModuleClock(TMR1_MODULE, CLK_CLKSEL1_TMR1SEL_HXT, MODULE_NoMsk);

    return;
}

void NuClockConfig_deinit_tmr1(void)
{
    CLK_DisableModuleClock(TMR1_MODULE);

    return;
}

void NuClockConfig_init_tmr2(void)
{
    CLK_EnableModuleClock(TMR2_MODULE);
    CLK_SetModuleClock(TMR2_MODULE, CLK_CLKSEL1_TMR2SEL_HXT, MODULE_NoMsk);

    return;
}

void NuClockConfig_deinit_tmr2(void)
{
    CLK_DisableModuleClock(TMR2_MODULE);

    return;
}

void NuClockConfig_init_tmr3(void)
{
    CLK_EnableModuleClock(TMR3_MODULE);
    CLK_SetModuleClock(TMR3_MODULE, CLK_CLKSEL1_TMR3SEL_PCLK1, MODULE_NoMsk);

    return;
}

void NuClockConfig_deinit_tmr3(void)
{
    CLK_DisableModuleClock(TMR3_MODULE);

    return;
}

void NuClockConfig_init_uart2(void)
{
    CLK_EnableModuleClock(UART2_MODULE);
    CLK_SetModuleClock(UART2_MODULE, CLK_CLKSEL3_UART2SEL_PLL, CLK_CLKDIV4_UART2(1));

    return;
}

void NuClockConfig_deinit_uart2(void)
{
    CLK_DisableModuleClock(UART2_MODULE);

    return;
}

void NuClockConfig_init_uart5(void)
{
    CLK_EnableModuleClock(UART5_MODULE);
    CLK_SetModuleClock(UART5_MODULE, CLK_CLKSEL3_UART5SEL_PLL, CLK_CLKDIV4_UART5(1));

    return;
}

void NuClockConfig_deinit_uart5(void)
{
    CLK_DisableModuleClock(UART5_MODULE);

    return;
}

void NuClockConfig_init_usbd(void)
{
    CLK_EnableModuleClock(USBD_MODULE);
    CLK_SetModuleClock(USBD_MODULE, CLK_CLKSEL0_USBSEL_PLL, CLK_CLKDIV0_USB(1));

    return;
}

void NuClockConfig_deinit_usbd(void)
{
    CLK_DisableModuleClock(USBD_MODULE);

    return;
}

void NuClockConfig_init_wdt(void)
{
    CLK_EnableModuleClock(WDT_MODULE);
    CLK_SetModuleClock(WDT_MODULE, CLK_CLKSEL1_WDTSEL_LIRC, MODULE_NoMsk);

    return;
}

void NuClockConfig_deinit_wdt(void)
{
    CLK_DisableModuleClock(WDT_MODULE);

    return;
}

void NuClockConfig_init_wwdt(void)
{
    CLK_EnableModuleClock(WWDT_MODULE);
    CLK_SetModuleClock(WWDT_MODULE, CLK_CLKSEL1_WWDTSEL_HCLK_DIV2048, MODULE_NoMsk);

    return;
}

void NuClockConfig_deinit_wwdt(void)
{
    CLK_DisableModuleClock(WWDT_MODULE);

    return;
}

void NuClockConfig_init_base(void)
{
    /* Set XT1_OUT(PF.2) and XT1_IN(PF.3) to input mode */
    PF->MODE &= ~(GPIO_MODE_MODE2_Msk | GPIO_MODE_MODE3_Msk);

    /* Enable clock source */
    CLK_EnableXtalRC(CLK_PWRCTL_LIRCEN_Msk|CLK_PWRCTL_HIRCEN_Msk|CLK_PWRCTL_LXTEN_Msk|CLK_PWRCTL_HXTEN_Msk);

    /* Waiting for clock source ready */
    CLK_WaitClockReady(CLK_STATUS_LIRCSTB_Msk|CLK_STATUS_HIRCSTB_Msk|CLK_STATUS_LXTSTB_Msk|CLK_STATUS_HXTSTB_Msk);

    /* Disable PLL first to avoid unstable when setting PLL */
    CLK_DisablePLL();

    /* Set PLL frequency */
    CLK->PLLCTL = (CLK->PLLCTL & ~(0x000FFFFFUL)) | 0x0000421EUL;

    /* Waiting for PLL ready */
    CLK_WaitClockReady(CLK_STATUS_PLLSTB_Msk);

    /* If the defines do not exist in your project, please refer to the related clk.h in the Header folder appended to the tool package. */
    /* Set HCLK clock */
    CLK_SetHCLK(CLK_CLKSEL0_HCLKSEL_PLL, CLK_CLKDIV0_HCLK(1));

    /* Set PCLK-related clock */
    CLK->PCLKDIV = (CLK_PCLKDIV_PCLK0DIV2 | CLK_PCLKDIV_PCLK1DIV4);

    return;
}

void NuClockConfig_init(void)
{
    /*---------------------------------------------------------------------------------------------------------*/
    /* Init System Clock                                                                                       */
    /*---------------------------------------------------------------------------------------------------------*/
    //CLK->PWRCTL = (CLK->PWRCTL & ~(0x0000000FUL)) | 0x0000001FUL;
    //CLK->PLLCTL = (CLK->PLLCTL & ~(0x000FFFFFUL)) | 0x0000421EUL;
    //CLK->CLKDIV0 = (CLK->CLKDIV0 & ~(0xFFFFFFFFUL)) | 0x00000000UL;
    //CLK->CLKDIV1 = (CLK->CLKDIV1 & ~(0x00FFFFFFUL)) | 0x00000000UL;
    //CLK->CLKDIV3 = (CLK->CLKDIV3 & ~(0xFFFF0000UL)) | 0x00000000UL;
    //CLK->CLKDIV4 = (CLK->CLKDIV4 & ~(0x0000FFFFUL)) | 0x00000000UL;
    //CLK->PCLKDIV = (CLK->PCLKDIV & ~(0x00000077UL)) | 0x00000021UL;
    //CLK->CLKSEL0 = (CLK->CLKSEL0 & ~(0x00F0013FUL)) | 0x00D3013AUL;
    //CLK->CLKSEL1 = (CLK->CLKSEL1 & ~(0xFF777703UL)) | 0xA0200203UL;
    //CLK->CLKSEL2 = (CLK->CLKSEL2 & ~(0x00003FFFUL)) | 0x000003ABUL;
    //CLK->CLKSEL3 = (CLK->CLKSEL3 & ~(0xFF03013FUL)) | 0x7D01003CUL;
    //CLK->AHBCLK = (CLK->AHBCLK & ~(0x0003D4EEUL)) | 0x0000C0EEUL;
    //CLK->APBCLK0 = (CLK->APBCLK0 & ~(0x7F3FF7FFUL)) | 0x2924447FUL;
    //CLK->APBCLK1 = (CLK->APBCLK1 & ~(0x4CCF1347UL)) | 0x00041001UL;
    //CLK->CLKOCTL = (CLK->CLKOCTL & ~(0x0000007FUL)) | 0x00000030UL;
    //SysTick->CTRL = (SysTick->CTRL & ~(0x00000005UL)) | 0x00000000UL;

    /* Unlock protected registers */
    SYS_UnlockReg();

    /* Enable base clock */
    NuClockConfig_init_base();

    /* Enable module clock and set clock source */
    NuClockConfig_init_bpwm0();
    NuClockConfig_init_can0();
    NuClockConfig_init_clko();
    NuClockConfig_init_crc();
    NuClockConfig_init_dac();
    NuClockConfig_init_ebi();
    NuClockConfig_init_emac();
    NuClockConfig_init_fmcidle();
    NuClockConfig_init_i2c2();
    NuClockConfig_init_i2s0();
    NuClockConfig_init_isp();
    NuClockConfig_init_pdma();
    NuClockConfig_init_rtc();
    NuClockConfig_init_sc0();
    NuClockConfig_init_sdh0();
    NuClockConfig_init_spi1();
    NuClockConfig_init_spim();
    NuClockConfig_init_tmr0();
    NuClockConfig_init_tmr1();
    NuClockConfig_init_tmr2();
    NuClockConfig_init_tmr3();
    NuClockConfig_init_uart2();
    NuClockConfig_init_uart5();
    NuClockConfig_init_usbd();
    NuClockConfig_init_wdt();
    NuClockConfig_init_wwdt();

    /* Update System Core Clock */
    /* User can use SystemCoreClockUpdate() to calculate SystemCoreClock. */
    SystemCoreClockUpdate();

    /* Lock protected registers */
    SYS_LockReg();

    return;
}

/*** (C) COPYRIGHT 2013-2021 Nuvoton Technology Corp. ***/
