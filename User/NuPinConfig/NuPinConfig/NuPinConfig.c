/****************************************************************************
 * @file     NuPinConfig.c
 * @version  V1.21
 * @Date     2021/03/31-10:25:47 
 * @brief    NuMicro generated code file
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Copyright (C) 2013-2021 Nuvoton Technology Corp. All rights reserved.
*****************************************************************************/

/********************
MCU:M487JIDAE(LQFP144)
********************/

#include "M480.h"

void NuPinConfig_init_bpwm0(void)
{
    SYS->GPD_MFPH &= ~(SYS_GPD_MFPH_PD12MFP_Msk);
    SYS->GPD_MFPH |= (SYS_GPD_MFPH_PD12MFP_BPWM0_CH5);

    return;
}

void NuPinConfig_deinit_bpwm0(void)
{
    SYS->GPD_MFPH &= ~(SYS_GPD_MFPH_PD12MFP_Msk);

    return;
}

void NuPinConfig_init_can0(void)
{
    SYS->GPA_MFPL &= ~(SYS_GPA_MFPL_PA5MFP_Msk | SYS_GPA_MFPL_PA4MFP_Msk);
    SYS->GPA_MFPL |= (SYS_GPA_MFPL_PA5MFP_CAN0_TXD | SYS_GPA_MFPL_PA4MFP_CAN0_RXD);

    return;
}

void NuPinConfig_deinit_can0(void)
{
    SYS->GPA_MFPL &= ~(SYS_GPA_MFPL_PA5MFP_Msk | SYS_GPA_MFPL_PA4MFP_Msk);

    return;
}

void NuPinConfig_init_ebi(void)
{
    SYS->GPA_MFPH &= ~(SYS_GPA_MFPH_PA8MFP_Msk);
    SYS->GPA_MFPH |= (SYS_GPA_MFPH_PA8MFP_EBI_ALE);
    SYS->GPD_MFPH &= ~(SYS_GPD_MFPH_PD14MFP_Msk | SYS_GPD_MFPH_PD11MFP_Msk | SYS_GPD_MFPH_PD9MFP_Msk | SYS_GPD_MFPH_PD8MFP_Msk);
    SYS->GPD_MFPH |= (SYS_GPD_MFPH_PD14MFP_EBI_nCS0 | SYS_GPD_MFPH_PD11MFP_EBI_nCS1 | SYS_GPD_MFPH_PD9MFP_EBI_AD7 | SYS_GPD_MFPH_PD8MFP_EBI_AD6);
    SYS->GPE_MFPH &= ~(SYS_GPE_MFPH_PE15MFP_Msk | SYS_GPE_MFPH_PE14MFP_Msk);
    SYS->GPE_MFPH |= (SYS_GPE_MFPH_PE15MFP_EBI_AD9 | SYS_GPE_MFPH_PE14MFP_EBI_AD8);
    SYS->GPE_MFPL &= ~(SYS_GPE_MFPL_PE5MFP_Msk | SYS_GPE_MFPL_PE4MFP_Msk | SYS_GPE_MFPL_PE1MFP_Msk | SYS_GPE_MFPL_PE0MFP_Msk);
    SYS->GPE_MFPL |= (SYS_GPE_MFPL_PE5MFP_EBI_nRD | SYS_GPE_MFPL_PE4MFP_EBI_nWR | SYS_GPE_MFPL_PE1MFP_EBI_AD10 | SYS_GPE_MFPL_PE0MFP_EBI_AD11);
    SYS->GPG_MFPH &= ~(SYS_GPG_MFPH_PG14MFP_Msk | SYS_GPG_MFPH_PG13MFP_Msk | SYS_GPG_MFPH_PG12MFP_Msk | SYS_GPG_MFPH_PG11MFP_Msk | SYS_GPG_MFPH_PG10MFP_Msk | SYS_GPG_MFPH_PG9MFP_Msk | SYS_GPG_MFPH_PG8MFP_Msk);
    SYS->GPG_MFPH |= (SYS_GPG_MFPH_PG14MFP_EBI_AD5 | SYS_GPG_MFPH_PG13MFP_EBI_AD4 | SYS_GPG_MFPH_PG12MFP_EBI_AD3 | SYS_GPG_MFPH_PG11MFP_EBI_AD2 | SYS_GPG_MFPH_PG10MFP_EBI_AD1 | SYS_GPG_MFPH_PG9MFP_EBI_AD0 | SYS_GPG_MFPH_PG8MFP_EBI_nWRH);
    SYS->GPG_MFPL &= ~(SYS_GPG_MFPL_PG7MFP_Msk);
    SYS->GPG_MFPL |= (SYS_GPG_MFPL_PG7MFP_EBI_nWRL);
    SYS->GPH_MFPH &= ~(SYS_GPH_MFPH_PH11MFP_Msk | SYS_GPH_MFPH_PH10MFP_Msk | SYS_GPH_MFPH_PH9MFP_Msk | SYS_GPH_MFPH_PH8MFP_Msk);
    SYS->GPH_MFPH |= (SYS_GPH_MFPH_PH11MFP_EBI_AD15 | SYS_GPH_MFPH_PH10MFP_EBI_AD14 | SYS_GPH_MFPH_PH9MFP_EBI_AD13 | SYS_GPH_MFPH_PH8MFP_EBI_AD12);

    return;
}

void NuPinConfig_deinit_ebi(void)
{
    SYS->GPA_MFPH &= ~(SYS_GPA_MFPH_PA8MFP_Msk);
    SYS->GPD_MFPH &= ~(SYS_GPD_MFPH_PD14MFP_Msk | SYS_GPD_MFPH_PD11MFP_Msk | SYS_GPD_MFPH_PD9MFP_Msk | SYS_GPD_MFPH_PD8MFP_Msk);
    SYS->GPE_MFPH &= ~(SYS_GPE_MFPH_PE15MFP_Msk | SYS_GPE_MFPH_PE14MFP_Msk);
    SYS->GPE_MFPL &= ~(SYS_GPE_MFPL_PE5MFP_Msk | SYS_GPE_MFPL_PE4MFP_Msk | SYS_GPE_MFPL_PE1MFP_Msk | SYS_GPE_MFPL_PE0MFP_Msk);
    SYS->GPG_MFPH &= ~(SYS_GPG_MFPH_PG14MFP_Msk | SYS_GPG_MFPH_PG13MFP_Msk | SYS_GPG_MFPH_PG12MFP_Msk | SYS_GPG_MFPH_PG11MFP_Msk | SYS_GPG_MFPH_PG10MFP_Msk | SYS_GPG_MFPH_PG9MFP_Msk | SYS_GPG_MFPH_PG8MFP_Msk);
    SYS->GPG_MFPL &= ~(SYS_GPG_MFPL_PG7MFP_Msk);
    SYS->GPH_MFPH &= ~(SYS_GPH_MFPH_PH11MFP_Msk | SYS_GPH_MFPH_PH10MFP_Msk | SYS_GPH_MFPH_PH9MFP_Msk | SYS_GPH_MFPH_PH8MFP_Msk);

    return;
}

void NuPinConfig_init_emac(void)
{
    SYS->GPA_MFPL &= ~(SYS_GPA_MFPL_PA7MFP_Msk | SYS_GPA_MFPL_PA6MFP_Msk);
    SYS->GPA_MFPL |= (SYS_GPA_MFPL_PA7MFP_EMAC_RMII_CRSDV | SYS_GPA_MFPL_PA6MFP_EMAC_RMII_RXERR);
    SYS->GPC_MFPH &= ~(SYS_GPC_MFPH_PC8MFP_Msk);
    SYS->GPC_MFPH |= (SYS_GPC_MFPH_PC8MFP_EMAC_RMII_REFCLK);
    SYS->GPC_MFPL &= ~(SYS_GPC_MFPL_PC7MFP_Msk | SYS_GPC_MFPL_PC6MFP_Msk);
    SYS->GPC_MFPL |= (SYS_GPC_MFPL_PC7MFP_EMAC_RMII_RXD0 | SYS_GPC_MFPL_PC6MFP_EMAC_RMII_RXD1);
    SYS->GPE_MFPH &= ~(SYS_GPE_MFPH_PE12MFP_Msk | SYS_GPE_MFPH_PE11MFP_Msk | SYS_GPE_MFPH_PE10MFP_Msk | SYS_GPE_MFPH_PE9MFP_Msk | SYS_GPE_MFPH_PE8MFP_Msk);
    SYS->GPE_MFPH |= (SYS_GPE_MFPH_PE12MFP_EMAC_RMII_TXEN | SYS_GPE_MFPH_PE11MFP_EMAC_RMII_TXD1 | SYS_GPE_MFPH_PE10MFP_EMAC_RMII_TXD0 | SYS_GPE_MFPH_PE9MFP_EMAC_RMII_MDIO | SYS_GPE_MFPH_PE8MFP_EMAC_RMII_MDC);

    return;
}

void NuPinConfig_deinit_emac(void)
{
    SYS->GPA_MFPL &= ~(SYS_GPA_MFPL_PA7MFP_Msk | SYS_GPA_MFPL_PA6MFP_Msk);
    SYS->GPC_MFPH &= ~(SYS_GPC_MFPH_PC8MFP_Msk);
    SYS->GPC_MFPL &= ~(SYS_GPC_MFPL_PC7MFP_Msk | SYS_GPC_MFPL_PC6MFP_Msk);
    SYS->GPE_MFPH &= ~(SYS_GPE_MFPH_PE12MFP_Msk | SYS_GPE_MFPH_PE11MFP_Msk | SYS_GPE_MFPH_PE10MFP_Msk | SYS_GPE_MFPH_PE9MFP_Msk | SYS_GPE_MFPH_PE8MFP_Msk);

    return;
}

void NuPinConfig_init_i2c2(void)
{
    SYS->GPD_MFPL &= ~(SYS_GPD_MFPL_PD1MFP_Msk | SYS_GPD_MFPL_PD0MFP_Msk);
    SYS->GPD_MFPL |= (SYS_GPD_MFPL_PD1MFP_I2C2_SCL | SYS_GPD_MFPL_PD0MFP_I2C2_SDA);

    return;
}

void NuPinConfig_deinit_i2c2(void)
{
    SYS->GPD_MFPL &= ~(SYS_GPD_MFPL_PD1MFP_Msk | SYS_GPD_MFPL_PD0MFP_Msk);

    return;
}

void NuPinConfig_init_i2s0(void)
{
    SYS->GPF_MFPH &= ~(SYS_GPF_MFPH_PF10MFP_Msk | SYS_GPF_MFPH_PF9MFP_Msk | SYS_GPF_MFPH_PF8MFP_Msk);
    SYS->GPF_MFPH |= (SYS_GPF_MFPH_PF10MFP_I2S0_BCLK | SYS_GPF_MFPH_PF9MFP_I2S0_MCLK | SYS_GPF_MFPH_PF8MFP_I2S0_DI);
    SYS->GPF_MFPL &= ~(SYS_GPF_MFPL_PF7MFP_Msk | SYS_GPF_MFPL_PF6MFP_Msk);
    SYS->GPF_MFPL |= (SYS_GPF_MFPL_PF7MFP_I2S0_DO | SYS_GPF_MFPL_PF6MFP_I2S0_LRCK);

    return;
}

void NuPinConfig_deinit_i2s0(void)
{
    SYS->GPF_MFPH &= ~(SYS_GPF_MFPH_PF10MFP_Msk | SYS_GPF_MFPH_PF9MFP_Msk | SYS_GPF_MFPH_PF8MFP_Msk);
    SYS->GPF_MFPL &= ~(SYS_GPF_MFPL_PF7MFP_Msk | SYS_GPF_MFPL_PF6MFP_Msk);

    return;
}

void NuPinConfig_init_ice(void)
{
    SYS->GPF_MFPL &= ~(SYS_GPF_MFPL_PF1MFP_Msk | SYS_GPF_MFPL_PF0MFP_Msk);
    SYS->GPF_MFPL |= (SYS_GPF_MFPL_PF1MFP_ICE_CLK | SYS_GPF_MFPL_PF0MFP_ICE_DAT);

    return;
}

void NuPinConfig_deinit_ice(void)
{
    SYS->GPF_MFPL &= ~(SYS_GPF_MFPL_PF1MFP_Msk | SYS_GPF_MFPL_PF0MFP_Msk);

    return;
}

void NuPinConfig_init_pa(void)
{
    SYS->GPA_MFPH &= ~(SYS_GPA_MFPH_PA11MFP_Msk | SYS_GPA_MFPH_PA10MFP_Msk | SYS_GPA_MFPH_PA9MFP_Msk);
    SYS->GPA_MFPH |= (SYS_GPA_MFPH_PA11MFP_GPIO | SYS_GPA_MFPH_PA10MFP_GPIO | SYS_GPA_MFPH_PA9MFP_GPIO);
    SYS->GPA_MFPL &= ~(SYS_GPA_MFPL_PA3MFP_Msk | SYS_GPA_MFPL_PA2MFP_Msk | SYS_GPA_MFPL_PA1MFP_Msk | SYS_GPA_MFPL_PA0MFP_Msk);
    SYS->GPA_MFPL |= (SYS_GPA_MFPL_PA3MFP_GPIO | SYS_GPA_MFPL_PA2MFP_GPIO | SYS_GPA_MFPL_PA1MFP_GPIO | SYS_GPA_MFPL_PA0MFP_GPIO);

    return;
}

void NuPinConfig_deinit_pa(void)
{
    SYS->GPA_MFPH &= ~(SYS_GPA_MFPH_PA11MFP_Msk | SYS_GPA_MFPH_PA10MFP_Msk | SYS_GPA_MFPH_PA9MFP_Msk);
    SYS->GPA_MFPL &= ~(SYS_GPA_MFPL_PA3MFP_Msk | SYS_GPA_MFPL_PA2MFP_Msk | SYS_GPA_MFPL_PA1MFP_Msk | SYS_GPA_MFPL_PA0MFP_Msk);

    return;
}

void NuPinConfig_init_pb(void)
{
    SYS->GPB_MFPH &= ~(SYS_GPB_MFPH_PB9MFP_Msk | SYS_GPB_MFPH_PB8MFP_Msk);
    SYS->GPB_MFPH |= (SYS_GPB_MFPH_PB9MFP_GPIO | SYS_GPB_MFPH_PB8MFP_GPIO);
    SYS->GPB_MFPL &= ~(SYS_GPB_MFPL_PB7MFP_Msk | SYS_GPB_MFPL_PB6MFP_Msk | SYS_GPB_MFPL_PB3MFP_Msk);
    SYS->GPB_MFPL |= (SYS_GPB_MFPL_PB7MFP_GPIO | SYS_GPB_MFPL_PB6MFP_GPIO | SYS_GPB_MFPL_PB3MFP_GPIO);

    return;
}

void NuPinConfig_deinit_pb(void)
{
    SYS->GPB_MFPH &= ~(SYS_GPB_MFPH_PB9MFP_Msk | SYS_GPB_MFPH_PB8MFP_Msk);
    SYS->GPB_MFPL &= ~(SYS_GPB_MFPL_PB7MFP_Msk | SYS_GPB_MFPL_PB6MFP_Msk | SYS_GPB_MFPL_PB3MFP_Msk);

    return;
}

void NuPinConfig_init_pc(void)
{
    SYS->GPC_MFPH &= ~(SYS_GPC_MFPH_PC10MFP_Msk | SYS_GPC_MFPH_PC9MFP_Msk);
    SYS->GPC_MFPH |= (SYS_GPC_MFPH_PC10MFP_GPIO | SYS_GPC_MFPH_PC9MFP_GPIO);

    return;
}

void NuPinConfig_deinit_pc(void)
{
    SYS->GPC_MFPH &= ~(SYS_GPC_MFPH_PC10MFP_Msk | SYS_GPC_MFPH_PC9MFP_Msk);

    return;
}

void NuPinConfig_init_pd(void)
{
    SYS->GPD_MFPL &= ~(SYS_GPD_MFPL_PD3MFP_Msk | SYS_GPD_MFPL_PD2MFP_Msk);
    SYS->GPD_MFPL |= (SYS_GPD_MFPL_PD3MFP_GPIO | SYS_GPD_MFPL_PD2MFP_GPIO);

    return;
}

void NuPinConfig_deinit_pd(void)
{
    SYS->GPD_MFPL &= ~(SYS_GPD_MFPL_PD3MFP_Msk | SYS_GPD_MFPL_PD2MFP_Msk);

    return;
}

void NuPinConfig_init_pg(void)
{
    SYS->GPG_MFPL &= ~(SYS_GPG_MFPL_PG4MFP_Msk | SYS_GPG_MFPL_PG3MFP_Msk | SYS_GPG_MFPL_PG2MFP_Msk | SYS_GPG_MFPL_PG1MFP_Msk);
    SYS->GPG_MFPL |= (SYS_GPG_MFPL_PG4MFP_GPIO | SYS_GPG_MFPL_PG3MFP_GPIO | SYS_GPG_MFPL_PG2MFP_GPIO | SYS_GPG_MFPL_PG1MFP_GPIO);

    return;
}

void NuPinConfig_deinit_pg(void)
{
    SYS->GPG_MFPL &= ~(SYS_GPG_MFPL_PG4MFP_Msk | SYS_GPG_MFPL_PG3MFP_Msk | SYS_GPG_MFPL_PG2MFP_Msk | SYS_GPG_MFPL_PG1MFP_Msk);

    return;
}

void NuPinConfig_init_ph(void)
{
    SYS->GPH_MFPL &= ~(SYS_GPH_MFPL_PH5MFP_Msk | SYS_GPH_MFPL_PH4MFP_Msk | SYS_GPH_MFPL_PH3MFP_Msk);
    SYS->GPH_MFPL |= (SYS_GPH_MFPL_PH5MFP_GPIO | SYS_GPH_MFPL_PH4MFP_GPIO | SYS_GPH_MFPL_PH3MFP_GPIO);

    return;
}

void NuPinConfig_deinit_ph(void)
{
    SYS->GPH_MFPL &= ~(SYS_GPH_MFPL_PH5MFP_Msk | SYS_GPH_MFPL_PH4MFP_Msk | SYS_GPH_MFPL_PH3MFP_Msk);

    return;
}

void NuPinConfig_init_sd0(void)
{
    SYS->GPB_MFPL &= ~(SYS_GPB_MFPL_PB5MFP_Msk | SYS_GPB_MFPL_PB4MFP_Msk);
    SYS->GPB_MFPL |= (SYS_GPB_MFPL_PB5MFP_SD0_DAT3 | SYS_GPB_MFPL_PB4MFP_SD0_DAT2);
    SYS->GPD_MFPH &= ~(SYS_GPD_MFPH_PD13MFP_Msk);
    SYS->GPD_MFPH |= (SYS_GPD_MFPH_PD13MFP_SD0_nCD);
    SYS->GPE_MFPL &= ~(SYS_GPE_MFPL_PE7MFP_Msk | SYS_GPE_MFPL_PE6MFP_Msk | SYS_GPE_MFPL_PE3MFP_Msk | SYS_GPE_MFPL_PE2MFP_Msk);
    SYS->GPE_MFPL |= (SYS_GPE_MFPL_PE7MFP_SD0_CMD | SYS_GPE_MFPL_PE6MFP_SD0_CLK | SYS_GPE_MFPL_PE3MFP_SD0_DAT1 | SYS_GPE_MFPL_PE2MFP_SD0_DAT0);

    return;
}

void NuPinConfig_deinit_sd0(void)
{
    SYS->GPB_MFPL &= ~(SYS_GPB_MFPL_PB5MFP_Msk | SYS_GPB_MFPL_PB4MFP_Msk);
    SYS->GPD_MFPH &= ~(SYS_GPD_MFPH_PD13MFP_Msk);
    SYS->GPE_MFPL &= ~(SYS_GPE_MFPL_PE7MFP_Msk | SYS_GPE_MFPL_PE6MFP_Msk | SYS_GPE_MFPL_PE3MFP_Msk | SYS_GPE_MFPL_PE2MFP_Msk);

    return;
}

void NuPinConfig_init_spim(void)
{
    SYS->GPC_MFPL &= ~(SYS_GPC_MFPL_PC5MFP_Msk | SYS_GPC_MFPL_PC4MFP_Msk | SYS_GPC_MFPL_PC3MFP_Msk | SYS_GPC_MFPL_PC2MFP_Msk | SYS_GPC_MFPL_PC1MFP_Msk | SYS_GPC_MFPL_PC0MFP_Msk);
    SYS->GPC_MFPL |= (SYS_GPC_MFPL_PC5MFP_SPIM_D2 | SYS_GPC_MFPL_PC4MFP_SPIM_D3 | SYS_GPC_MFPL_PC3MFP_SPIM_SS | SYS_GPC_MFPL_PC2MFP_SPIM_CLK | SYS_GPC_MFPL_PC1MFP_SPIM_MISO | SYS_GPC_MFPL_PC0MFP_SPIM_MOSI);

    return;
}

void NuPinConfig_deinit_spim(void)
{
    SYS->GPC_MFPL &= ~(SYS_GPC_MFPL_PC5MFP_Msk | SYS_GPC_MFPL_PC4MFP_Msk | SYS_GPC_MFPL_PC3MFP_Msk | SYS_GPC_MFPL_PC2MFP_Msk | SYS_GPC_MFPL_PC1MFP_Msk | SYS_GPC_MFPL_PC0MFP_Msk);

    return;
}

void NuPinConfig_init_uart5(void)
{
    SYS->GPH_MFPL &= ~(SYS_GPH_MFPL_PH2MFP_Msk | SYS_GPH_MFPL_PH1MFP_Msk | SYS_GPH_MFPL_PH0MFP_Msk);
    SYS->GPH_MFPL |= (SYS_GPH_MFPL_PH2MFP_UART5_nRTS | SYS_GPH_MFPL_PH1MFP_UART5_RXD | SYS_GPH_MFPL_PH0MFP_UART5_TXD);

    return;
}

void NuPinConfig_deinit_uart5(void)
{
    SYS->GPH_MFPL &= ~(SYS_GPH_MFPL_PH2MFP_Msk | SYS_GPH_MFPL_PH1MFP_Msk | SYS_GPH_MFPL_PH0MFP_Msk);

    return;
}

void NuPinConfig_init_usb(void)
{
    SYS->GPA_MFPH &= ~(SYS_GPA_MFPH_PA15MFP_Msk | SYS_GPA_MFPH_PA14MFP_Msk | SYS_GPA_MFPH_PA13MFP_Msk | SYS_GPA_MFPH_PA12MFP_Msk);
    SYS->GPA_MFPH |= (SYS_GPA_MFPH_PA15MFP_USB_OTG_ID | SYS_GPA_MFPH_PA14MFP_USB_D_P | SYS_GPA_MFPH_PA13MFP_USB_D_N | SYS_GPA_MFPH_PA12MFP_USB_VBUS);
    SYS->GPB_MFPH &= ~(SYS_GPB_MFPH_PB15MFP_Msk);
    SYS->GPB_MFPH |= (SYS_GPB_MFPH_PB15MFP_USB_VBUS_EN);
    SYS->GPC_MFPH &= ~(SYS_GPC_MFPH_PC14MFP_Msk);
    SYS->GPC_MFPH |= (SYS_GPC_MFPH_PC14MFP_USB_VBUS_ST);

    return;
}

void NuPinConfig_deinit_usb(void)
{
    SYS->GPA_MFPH &= ~(SYS_GPA_MFPH_PA15MFP_Msk | SYS_GPA_MFPH_PA14MFP_Msk | SYS_GPA_MFPH_PA13MFP_Msk | SYS_GPA_MFPH_PA12MFP_Msk);
    SYS->GPB_MFPH &= ~(SYS_GPB_MFPH_PB15MFP_Msk);
    SYS->GPC_MFPH &= ~(SYS_GPC_MFPH_PC14MFP_Msk);

    return;
}

void NuPinConfig_init_x32(void)
{
    SYS->GPF_MFPL &= ~(SYS_GPF_MFPL_PF5MFP_Msk | SYS_GPF_MFPL_PF4MFP_Msk);
    SYS->GPF_MFPL |= (SYS_GPF_MFPL_PF5MFP_X32_IN | SYS_GPF_MFPL_PF4MFP_X32_OUT);

    return;
}

void NuPinConfig_deinit_x32(void)
{
    SYS->GPF_MFPL &= ~(SYS_GPF_MFPL_PF5MFP_Msk | SYS_GPF_MFPL_PF4MFP_Msk);

    return;
}

void NuPinConfig_init_xt1(void)
{
    SYS->GPF_MFPL &= ~(SYS_GPF_MFPL_PF3MFP_Msk | SYS_GPF_MFPL_PF2MFP_Msk);
    SYS->GPF_MFPL |= (SYS_GPF_MFPL_PF3MFP_XT1_IN | SYS_GPF_MFPL_PF2MFP_XT1_OUT);

    return;
}

void NuPinConfig_deinit_xt1(void)
{
    SYS->GPF_MFPL &= ~(SYS_GPF_MFPL_PF3MFP_Msk | SYS_GPF_MFPL_PF2MFP_Msk);

    return;
}

void NuPinConfig_init(void)
{
    //SYS->GPA_MFPH = 0xEEEE0002UL;
    //SYS->GPA_MFPL = 0x33AA0000UL;
    //SYS->GPB_MFPH = 0xE0000000UL;
    //SYS->GPB_MFPL = 0x00330000UL;
    //SYS->GPC_MFPH = 0x0E000003UL;
    //SYS->GPC_MFPL = 0x33333333UL;
    //SYS->GPD_MFPH = 0x02392022UL;
    //SYS->GPD_MFPL = 0x00000066UL;
    //SYS->GPE_MFPH = 0x22033333UL;
    //SYS->GPE_MFPL = 0x33223322UL;
    //SYS->GPF_MFPH = 0x00000444UL;
    //SYS->GPF_MFPL = 0x44AAAAEEUL;
    //SYS->GPG_MFPH = 0x02222222UL;
    //SYS->GPG_MFPL = 0x20000000UL;
    //SYS->GPH_MFPH = 0x00002222UL;
    //SYS->GPH_MFPL = 0x00000444UL;

    NuPinConfig_init_bpwm0();
    NuPinConfig_init_can0();
    NuPinConfig_init_ebi();
    NuPinConfig_init_emac();
    NuPinConfig_init_i2c2();
    NuPinConfig_init_i2s0();
    NuPinConfig_init_ice();
    NuPinConfig_init_pa();
    NuPinConfig_init_pb();
    NuPinConfig_init_pc();
    NuPinConfig_init_pd();
    NuPinConfig_init_pg();
    NuPinConfig_init_ph();
    NuPinConfig_init_sd0();
    NuPinConfig_init_spim();
    NuPinConfig_init_uart5();
    NuPinConfig_init_usb();
    NuPinConfig_init_x32();
    NuPinConfig_init_xt1();

    return;
}

void NuPinConfig_deinit(void)
{
    NuPinConfig_deinit_bpwm0();
    NuPinConfig_deinit_can0();
    NuPinConfig_deinit_ebi();
    NuPinConfig_deinit_emac();
    NuPinConfig_deinit_i2c2();
    NuPinConfig_deinit_i2s0();
    NuPinConfig_deinit_ice();
    NuPinConfig_deinit_pa();
    NuPinConfig_deinit_pb();
    NuPinConfig_deinit_pc();
    NuPinConfig_deinit_pd();
    NuPinConfig_deinit_pg();
    NuPinConfig_deinit_ph();
    NuPinConfig_deinit_sd0();
    NuPinConfig_deinit_spim();
    NuPinConfig_deinit_uart5();
    NuPinConfig_deinit_usb();
    NuPinConfig_deinit_x32();
    NuPinConfig_deinit_xt1();

    return;
}
/*** (C) COPYRIGHT 2013-2021 Nuvoton Technology Corp. ***/
