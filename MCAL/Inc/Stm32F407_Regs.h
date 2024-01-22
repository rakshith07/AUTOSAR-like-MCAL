/*
 * Stm32F407_Regs.h
 *
 *  Created on: Jan 10, 2024
 *      Author: Rakshith
 */

#ifndef STM32F407_REGS_H_
#define STM32F407_REGS_H_

#include "Std_Types.h"
#include "Platform_Types.h"

/*-------------Typedef Structures for Registers-------------*/
//RCC
typedef struct
{
	uint32 gpioa_en		:1;
	uint32 gpiob_en		:1;
	uint32 gpioc_en		:1;
	uint32 gpiod_en		:1;
	uint32 gpioe_en		:1;
	uint32 gpiof_en		:1;
	uint32 gpiog_en		:1;
	uint32 gpioh_en		:1;
	uint32 gpioi_en		:1;
	uint32 reserved1	:3;
	uint32 crc_en		:1;
	uint32 reserved2	:3;
	uint32 reserved3	:2;
	uint32 bkpsram_en	:1;
	uint32 reserved4	:1;
	uint32 ccmdat_en	:1;
	uint32 dma1_en		:1;
	uint32 dma2_en		:1;
	uint32 reserved5	:2;
	uint32 ethmac_en	:1;
	uint32 ethmactx_en	:1;
	uint32 ethmacrx_en	:1;
	uint32 ethmacptp_en	:1;
	uint32 otghs_en		:1;
	uint32 otghsulpi_en	:1;
}RCC_AHB1ENR_ts;
//GPIO
typedef struct
{
   uint32 pin_0		:2;
   uint32 pin_1		:2;
   uint32 pin_2		:2;
   uint32 pin_3		:2;
   uint32 pin_4		:2;
   uint32 pin_5		:2;
   uint32 pin_6		:2;
   uint32 pin_7		:2;
   uint32 pin_8		:2;
   uint32 pin_9		:2;
   uint32 pin_10	:2;
   uint32 pin_11	:2;
   uint32 pin_12	:2;
   uint32 pin_13	:2;
   uint32 pin_14	:2;
   uint32 pin_15	:2;
}GPIOx_MODER_ts;
typedef struct
{
   uint32 pin_0		:1;
   uint32 pin_1		:1;
   uint32 pin_2		:1;
   uint32 pin_3		:1;
   uint32 pin_4		:1;
   uint32 pin_5		:1;
   uint32 pin_6		:1;
   uint32 pin_7		:1;
   uint32 pin_8		:1;
   uint32 pin_9		:1;
   uint32 pin_10	:1;
   uint32 pin_11	:1;
   uint32 pin_12	:1;
   uint32 pin_13	:1;
   uint32 pin_14	:1;
   uint32 pin_15	:1;
   uint32 reserved	:16;
}GPIOx_OTYPER_ts;
typedef struct
{
   uint32 pin_0		:2;
   uint32 pin_1		:2;
   uint32 pin_2		:2;
   uint32 pin_3		:2;
   uint32 pin_4		:2;
   uint32 pin_5		:2;
   uint32 pin_6		:2;
   uint32 pin_7		:2;
   uint32 pin_8		:2;
   uint32 pin_9		:2;
   uint32 pin_10	:2;
   uint32 pin_11	:2;
   uint32 pin_12	:2;
   uint32 pin_13	:2;
   uint32 pin_14	:2;
   uint32 pin_15	:2;
}GPIOx_OSPEEDR_ts;
typedef struct
{
   uint32 pin_0		:2;
   uint32 pin_1		:2;
   uint32 pin_2		:2;
   uint32 pin_3		:2;
   uint32 pin_4		:2;
   uint32 pin_5		:2;
   uint32 pin_6		:2;
   uint32 pin_7		:2;
   uint32 pin_8		:2;
   uint32 pin_9		:2;
   uint32 pin_10	:2;
   uint32 pin_11	:2;
   uint32 pin_12	:2;
   uint32 pin_13	:2;
   uint32 pin_14	:2;
   uint32 pin_15	:2;
}GPIOx_PUPDR_ts;
typedef struct
{
   uint32 pin_0		:1;
   uint32 pin_1		:1;
   uint32 pin_2		:1;
   uint32 pin_3		:1;
   uint32 pin_4		:1;
   uint32 pin_5		:1;
   uint32 pin_6		:1;
   uint32 pin_7		:1;
   uint32 pin_8		:1;
   uint32 pin_9		:1;
   uint32 pin_10	:1;
   uint32 pin_11	:1;
   uint32 pin_12	:1;
   uint32 pin_13	:1;
   uint32 pin_14	:1;
   uint32 pin_15	:1;
   uint32 reserved	:16;
}GPIOx_IDR_ts;
typedef struct
{
   uint32 pin_0		:1;
   uint32 pin_1		:1;
   uint32 pin_2		:1;
   uint32 pin_3		:1;
   uint32 pin_4		:1;
   uint32 pin_5		:1;
   uint32 pin_6		:1;
   uint32 pin_7		:1;
   uint32 pin_8		:1;
   uint32 pin_9		:1;
   uint32 pin_10	:1;
   uint32 pin_11	:1;
   uint32 pin_12	:1;
   uint32 pin_13	:1;
   uint32 pin_14	:1;
   uint32 pin_15	:1;
   uint32 reserved	:16;
}GPIOx_ODR_ts;
typedef struct
{
   uint32 Setpin_0		:1;
   uint32 Setpin_1		:1;
   uint32 Setpin_2		:1;
   uint32 Setpin_3		:1;
   uint32 Setpin_4		:1;
   uint32 Setpin_5		:1;
   uint32 Setpin_6		:1;
   uint32 Setpin_7		:1;
   uint32 Setpin_8		:1;
   uint32 Setpin_9		:1;
   uint32 Setpin_10		:1;
   uint32 Setpin_11		:1;
   uint32 Setpin_12		:1;
   uint32 Setpin_13		:1;
   uint32 Setpin_14		:1;
   uint32 Setpin_15		:1;
   uint32 Rstpin_0		:1;
   uint32 Rstpin_1		:1;
   uint32 Rstpin_2		:1;
   uint32 Rstpin_3		:1;
   uint32 Rstpin_4		:1;
   uint32 Rstpin_5		:1;
   uint32 Rstpin_6		:1;
   uint32 Rstpin_7		:1;
   uint32 Rstpin_8		:1;
   uint32 Rstpin_9		:1;
   uint32 Rstpin_10		:1;
   uint32 Rstpin_11		:1;
   uint32 Rstpin_12		:1;
   uint32 Rstpin_13		:1;
   uint32 Rstpin_14		:1;
   uint32 Rstpin_15		:1;
}GPIOx_BSRR_ts;
typedef struct
{
   uint32 pin_0		:1;
   uint32 pin_1		:1;
   uint32 pin_2		:1;
   uint32 pin_3		:1;
   uint32 pin_4		:1;
   uint32 pin_5		:1;
   uint32 pin_6		:1;
   uint32 pin_7		:1;
   uint32 pin_8		:1;
   uint32 pin_9		:1;
   uint32 pin_10	:1;
   uint32 pin_11	:1;
   uint32 pin_12	:1;
   uint32 pin_13	:1;
   uint32 pin_14	:1;
   uint32 pin_15	:1;
   uint32 LCKK	    :1;
   uint32 reserved	:15;
}GPIOx_LCKR_ts;
typedef struct
{
   uint32 pin_0		:4;
   uint32 pin_1		:4;
   uint32 pin_2		:4;
   uint32 pin_3		:4;
   uint32 pin_4		:4;
   uint32 pin_5		:4;
   uint32 pin_6		:4;
   uint32 pin_7		:4;
}GPIOx_AFRL_ts;
typedef struct
{
   uint32 pin_8		:4;
   uint32 pin_9		:4;
   uint32 pin_10	:4;
   uint32 pin_11	:4;
   uint32 pin_12	:4;
   uint32 pin_13	:4;
   uint32 pin_14	:4;
   uint32 pin_15	:4;
}GPIOx_AFRH_ts;

/*-------------Register base Address-------------*/
#define RCC_RegBaseAddr             0x40023800u
#define CRC_RegBaseAddr             0x40023000u
#define GPIO_I_RegBaseAddr          0x40022000u
#define GPIO_H_RegBaseAddr          0x40021C00u
#define GPIO_G_RegBaseAddr          0x40021800u
#define GPIO_F_RegBaseAddr          0x40021400u
#define GPIO_E_RegBaseAddr          0x40021000u
#define GPIO_D_RegBaseAddr          0x40020C00u
#define GPIO_C_RegBaseAddr          0x40020800u
#define GPIO_B_RegBaseAddr          0x40020400u
#define GPIO_A_RegBaseAddr          0x40020000u

/*-------------Register Offset-------------*/
//RCC
#define RCC_CR_Ofs				 	0x00u
#define RCC_PLLCFGR_Ofs			 	0x04u
#define RCC_CFGR_Ofs				0x08u
#define RCC_CIR_Ofs				 	0x0Cu
#define RCC_AHB1RSTR_Ofs			0x10u
#define RCC_AHB2RSTR_Ofs			0x14u
#define RCC_AHB3RSTR_Ofs			0x18u
#define RCC_APB1RSTR_Ofs			0x20u
#define RCC_APB2RSTR_Ofs			0x24u
#define RCC_AHB1ENR_Ofs			 	0x30u
#define RCC_AHB2ENR_Ofs			 	0x34u
#define RCC_AHB3ENR_Ofs			 	0x38u
#define RCC_APB1ENR_Ofs			 	0x40u
#define RCC_APB2ENR_Ofs			 	0x44u
#define RCC_AHB1LPENR_Ofs			0x50u
#define RCC_AHB2LPENR_Ofs			0x54u
#define RCC_AHB3LPENR_Ofs			0x58u
#define RCC_APB1LPENR_Ofs			0x60u
#define RCC_APB2LPENR_Ofs			0x64u
#define RCC_BDCR_Ofs				0x70u
#define RCC_CSR_Ofs				 	0x74u
#define RCC_SSCGR_Ofs				0x80u
#define RCC_PLLI2SCFGR_Ofs		 	0x84u
//GPIO
#define GPIOx_MODER_Ofs				0x00u
#define GPIOx_OTYPER_Ofs			0x04u
#define GPIOx_OSPEEDR_Ofs			0x08u
#define GPIOx_PUPDR_Ofs				0x0Cu
#define GPIOx_IDR_Ofs				0x10u
#define GPIOx_ODR_Ofs				0x14u
#define GPIOx_BSSR_Ofs				0x18u
#define GPIOx_LCKR_Ofs				0x1Cu
#define GPIOx_AFRL_Ofs				0x20u
#define GPIOx_AFRH_Ofs				0x24u

/*-------------Register Offset-------------*/



//Structure pointers
RCC_AHB1ENR_ts     *spRCC_AHB1ENR     = (RCC_AHB1ENR_ts    *)(RCC_RegBaseAddr       + RCC_AHB1ENR_Ofs);


GPIOx_MODER_ts     *spGPIOA_MODER     = (GPIOx_MODER_ts    *)(GPIO_A_RegBaseAddr    + GPIOx_MODER_Ofs);
GPIOx_OTYPER_ts    *spGPIOA_OTYPER    = (GPIOx_OTYPER_ts   *)(GPIO_A_RegBaseAddr    + GPIOx_OTYPER_Ofs);
GPIOx_OSPEEDR_ts   *spGPIOA_OSPEEDR   = (GPIOx_OSPEEDR_ts  *)(GPIO_A_RegBaseAddr    + GPIOx_OSPEEDR_Ofs);
GPIOx_PUPDR_ts     *spGPIOA_PUPDR     = (GPIOx_PUPDR_ts    *)(GPIO_A_RegBaseAddr    + GPIOx_PUPDR_Ofs);
GPIOx_IDR_ts       *spGPIOA_IDR       = (GPIOx_IDR_ts      *)(GPIO_A_RegBaseAddr    + GPIOx_IDR_Ofs);
GPIOx_ODR_ts       *spGPIOA_ODR       = (GPIOx_ODR_ts      *)(GPIO_A_RegBaseAddr    + GPIOx_ODR_Ofs);
GPIOx_BSRR_ts      *spGPIOA_BSSR      = (GPIOx_BSRR_ts     *)(GPIO_A_RegBaseAddr    + GPIOx_BSSR_Ofs);
GPIOx_LCKR_ts      *spGPIOA_LCKR      = (GPIOx_LCKR_ts     *)(GPIO_A_RegBaseAddr    + GPIOx_LCKR_Ofs);
GPIOx_AFRL_ts      *spGPIOA_AFRL      = (GPIOx_AFRL_ts     *)(GPIO_A_RegBaseAddr    + GPIOx_AFRL_Ofs);
GPIOx_AFRH_ts      *spGPIOA_AFRH      = (GPIOx_AFRH_ts     *)(GPIO_A_RegBaseAddr    + GPIOx_AFRH_Ofs);

GPIOx_MODER_ts     *spGPIOB_MODER     = (GPIOx_MODER_ts    *)(GPIO_B_RegBaseAddr    + GPIOx_MODER_Ofs);
GPIOx_OTYPER_ts    *spGPIOB_OTYPER    = (GPIOx_OTYPER_ts   *)(GPIO_B_RegBaseAddr    + GPIOx_OTYPER_Ofs);
GPIOx_OSPEEDR_ts   *spGPIOB_OSPEEDR   = (GPIOx_OSPEEDR_ts  *)(GPIO_B_RegBaseAddr    + GPIOx_OSPEEDR_Ofs);
GPIOx_PUPDR_ts     *spGPIOB_PUPDR     = (GPIOx_PUPDR_ts    *)(GPIO_B_RegBaseAddr    + GPIOx_PUPDR_Ofs);
GPIOx_IDR_ts       *spGPIOB_IDR       = (GPIOx_IDR_ts      *)(GPIO_B_RegBaseAddr    + GPIOx_IDR_Ofs);
GPIOx_ODR_ts       *spGPIOB_ODR       = (GPIOx_ODR_ts      *)(GPIO_B_RegBaseAddr    + GPIOx_ODR_Ofs);
GPIOx_BSRR_ts      *spGPIOB_BSSR      = (GPIOx_BSRR_ts     *)(GPIO_B_RegBaseAddr    + GPIOx_BSSR_Ofs);
GPIOx_LCKR_ts      *spGPIOB_LCKR      = (GPIOx_LCKR_ts     *)(GPIO_B_RegBaseAddr    + GPIOx_LCKR_Ofs);
GPIOx_AFRL_ts      *spGPIOB_AFRL      = (GPIOx_AFRL_ts     *)(GPIO_B_RegBaseAddr    + GPIOx_AFRL_Ofs);
GPIOx_AFRH_ts      *spGPIOB_AFRH      = (GPIOx_AFRH_ts     *)(GPIO_B_RegBaseAddr    + GPIOx_AFRH_Ofs);

GPIOx_MODER_ts     *spGPIOC_MODER     = (GPIOx_MODER_ts    *)(GPIO_C_RegBaseAddr    + GPIOx_MODER_Ofs);
GPIOx_OTYPER_ts    *spGPIOC_OTYPER    = (GPIOx_OTYPER_ts   *)(GPIO_C_RegBaseAddr    + GPIOx_OTYPER_Ofs);
GPIOx_OSPEEDR_ts   *spGPIOC_OSPEEDR   = (GPIOx_OSPEEDR_ts  *)(GPIO_C_RegBaseAddr    + GPIOx_OSPEEDR_Ofs);
GPIOx_PUPDR_ts     *spGPIOC_PUPDR     = (GPIOx_PUPDR_ts    *)(GPIO_C_RegBaseAddr    + GPIOx_PUPDR_Ofs);
GPIOx_IDR_ts       *spGPIOC_IDR       = (GPIOx_IDR_ts      *)(GPIO_C_RegBaseAddr    + GPIOx_IDR_Ofs);
GPIOx_ODR_ts       *spGPIOC_ODR       = (GPIOx_ODR_ts      *)(GPIO_C_RegBaseAddr    + GPIOx_ODR_Ofs);
GPIOx_BSRR_ts      *spGPIOC_BSSR      = (GPIOx_BSRR_ts     *)(GPIO_C_RegBaseAddr    + GPIOx_BSSR_Ofs);
GPIOx_LCKR_ts      *spGPIOC_LCKR      = (GPIOx_LCKR_ts     *)(GPIO_C_RegBaseAddr    + GPIOx_LCKR_Ofs);
GPIOx_AFRL_ts      *spGPIOC_AFRL      = (GPIOx_AFRL_ts     *)(GPIO_C_RegBaseAddr    + GPIOx_AFRL_Ofs);
GPIOx_AFRH_ts      *spGPIOC_AFRH      = (GPIOx_AFRH_ts     *)(GPIO_C_RegBaseAddr    + GPIOx_AFRH_Ofs);

GPIOx_MODER_ts     *spGPIOD_MODER     = (GPIOx_MODER_ts    *)(GPIO_D_RegBaseAddr    + GPIOx_MODER_Ofs);
GPIOx_OTYPER_ts    *spGPIOD_OTYPER    = (GPIOx_OTYPER_ts   *)(GPIO_D_RegBaseAddr    + GPIOx_OTYPER_Ofs);
GPIOx_OSPEEDR_ts   *spGPIOD_OSPEEDR   = (GPIOx_OSPEEDR_ts  *)(GPIO_D_RegBaseAddr    + GPIOx_OSPEEDR_Ofs);
GPIOx_PUPDR_ts     *spGPIOD_PUPDR     = (GPIOx_PUPDR_ts    *)(GPIO_D_RegBaseAddr    + GPIOx_PUPDR_Ofs);
GPIOx_IDR_ts       *spGPIOD_IDR       = (GPIOx_IDR_ts      *)(GPIO_D_RegBaseAddr    + GPIOx_IDR_Ofs);
GPIOx_ODR_ts       *spGPIOD_ODR       = (GPIOx_ODR_ts      *)(GPIO_D_RegBaseAddr    + GPIOx_ODR_Ofs);
GPIOx_BSRR_ts      *spGPIOD_BSSR      = (GPIOx_BSRR_ts     *)(GPIO_D_RegBaseAddr    + GPIOx_BSSR_Ofs);
GPIOx_LCKR_ts      *spGPIOD_LCKR      = (GPIOx_LCKR_ts     *)(GPIO_D_RegBaseAddr    + GPIOx_LCKR_Ofs);
GPIOx_AFRL_ts      *spGPIOD_AFRL      = (GPIOx_AFRL_ts     *)(GPIO_D_RegBaseAddr    + GPIOx_AFRL_Ofs);
GPIOx_AFRH_ts      *spGPIOD_AFRH      = (GPIOx_AFRH_ts     *)(GPIO_D_RegBaseAddr    + GPIOx_AFRH_Ofs);

GPIOx_MODER_ts     *spGPIOE_MODER     = (GPIOx_MODER_ts    *)(GPIO_E_RegBaseAddr    + GPIOx_MODER_Ofs);
GPIOx_OTYPER_ts    *spGPIOE_OTYPER    = (GPIOx_OTYPER_ts   *)(GPIO_E_RegBaseAddr    + GPIOx_OTYPER_Ofs);
GPIOx_OSPEEDR_ts   *spGPIOE_OSPEEDR   = (GPIOx_OSPEEDR_ts  *)(GPIO_E_RegBaseAddr    + GPIOx_OSPEEDR_Ofs);
GPIOx_PUPDR_ts     *spGPIOE_PUPDR     = (GPIOx_PUPDR_ts    *)(GPIO_E_RegBaseAddr    + GPIOx_PUPDR_Ofs);
GPIOx_IDR_ts       *spGPIOE_IDR       = (GPIOx_IDR_ts      *)(GPIO_E_RegBaseAddr    + GPIOx_IDR_Ofs);
GPIOx_ODR_ts       *spGPIOE_ODR       = (GPIOx_ODR_ts      *)(GPIO_E_RegBaseAddr    + GPIOx_ODR_Ofs);
GPIOx_BSRR_ts      *spGPIOE_BSSR      = (GPIOx_BSRR_ts     *)(GPIO_E_RegBaseAddr    + GPIOx_BSSR_Ofs);
GPIOx_LCKR_ts      *spGPIOE_LCKR      = (GPIOx_LCKR_ts     *)(GPIO_E_RegBaseAddr    + GPIOx_LCKR_Ofs);
GPIOx_AFRL_ts      *spGPIOE_AFRL      = (GPIOx_AFRL_ts     *)(GPIO_E_RegBaseAddr    + GPIOx_AFRL_Ofs);
GPIOx_AFRH_ts      *spGPIOE_AFRH      = (GPIOx_AFRH_ts     *)(GPIO_E_RegBaseAddr    + GPIOx_AFRH_Ofs);

GPIOx_MODER_ts     *spGPIOF_MODER     = (GPIOx_MODER_ts    *)(GPIO_F_RegBaseAddr    + GPIOx_MODER_Ofs);
GPIOx_OTYPER_ts    *spGPIOF_OTYPER    = (GPIOx_OTYPER_ts   *)(GPIO_F_RegBaseAddr    + GPIOx_OTYPER_Ofs);
GPIOx_OSPEEDR_ts   *spGPIOF_OSPEEDR   = (GPIOx_OSPEEDR_ts  *)(GPIO_F_RegBaseAddr    + GPIOx_OSPEEDR_Ofs);
GPIOx_PUPDR_ts     *spGPIOF_PUPDR     = (GPIOx_PUPDR_ts    *)(GPIO_F_RegBaseAddr    + GPIOx_PUPDR_Ofs);
GPIOx_IDR_ts       *spGPIOF_IDR       = (GPIOx_IDR_ts      *)(GPIO_F_RegBaseAddr    + GPIOx_IDR_Ofs);
GPIOx_ODR_ts       *spGPIOF_ODR       = (GPIOx_ODR_ts      *)(GPIO_F_RegBaseAddr    + GPIOx_ODR_Ofs);
GPIOx_BSRR_ts      *spGPIOF_BSSR      = (GPIOx_BSRR_ts     *)(GPIO_F_RegBaseAddr    + GPIOx_BSSR_Ofs);
GPIOx_LCKR_ts      *spGPIOF_LCKR      = (GPIOx_LCKR_ts     *)(GPIO_F_RegBaseAddr    + GPIOx_LCKR_Ofs);
GPIOx_AFRL_ts      *spGPIOF_AFRL      = (GPIOx_AFRL_ts     *)(GPIO_F_RegBaseAddr    + GPIOx_AFRL_Ofs);
GPIOx_AFRH_ts      *spGPIOF_AFRH      = (GPIOx_AFRH_ts     *)(GPIO_F_RegBaseAddr    + GPIOx_AFRH_Ofs);

GPIOx_MODER_ts     *spGPIOG_MODER     = (GPIOx_MODER_ts    *)(GPIO_G_RegBaseAddr    + GPIOx_MODER_Ofs);
GPIOx_OTYPER_ts    *spGPIOG_OTYPER    = (GPIOx_OTYPER_ts   *)(GPIO_G_RegBaseAddr    + GPIOx_OTYPER_Ofs);
GPIOx_OSPEEDR_ts   *spGPIOG_OSPEEDR   = (GPIOx_OSPEEDR_ts  *)(GPIO_G_RegBaseAddr    + GPIOx_OSPEEDR_Ofs);
GPIOx_PUPDR_ts     *spGPIOG_PUPDR     = (GPIOx_PUPDR_ts    *)(GPIO_G_RegBaseAddr    + GPIOx_PUPDR_Ofs);
GPIOx_IDR_ts       *spGPIOG_IDR       = (GPIOx_IDR_ts      *)(GPIO_G_RegBaseAddr    + GPIOx_IDR_Ofs);
GPIOx_ODR_ts       *spGPIOG_ODR       = (GPIOx_ODR_ts      *)(GPIO_G_RegBaseAddr    + GPIOx_ODR_Ofs);
GPIOx_BSRR_ts      *spGPIOG_BSSR      = (GPIOx_BSRR_ts     *)(GPIO_G_RegBaseAddr    + GPIOx_BSSR_Ofs);
GPIOx_LCKR_ts      *spGPIOG_LCKR      = (GPIOx_LCKR_ts     *)(GPIO_G_RegBaseAddr    + GPIOx_LCKR_Ofs);
GPIOx_AFRL_ts      *spGPIOG_AFRL      = (GPIOx_AFRL_ts     *)(GPIO_G_RegBaseAddr    + GPIOx_AFRL_Ofs);
GPIOx_AFRH_ts      *spGPIOG_AFRH      = (GPIOx_AFRH_ts     *)(GPIO_G_RegBaseAddr    + GPIOx_AFRH_Ofs);

GPIOx_MODER_ts     *spGPIOH_MODER     = (GPIOx_MODER_ts    *)(GPIO_H_RegBaseAddr    + GPIOx_MODER_Ofs);
GPIOx_OTYPER_ts    *spGPIOH_OTYPER    = (GPIOx_OTYPER_ts   *)(GPIO_H_RegBaseAddr    + GPIOx_OTYPER_Ofs);
GPIOx_OSPEEDR_ts   *spGPIOH_OSPEEDR   = (GPIOx_OSPEEDR_ts  *)(GPIO_H_RegBaseAddr    + GPIOx_OSPEEDR_Ofs);
GPIOx_PUPDR_ts     *spGPIOH_PUPDR     = (GPIOx_PUPDR_ts    *)(GPIO_H_RegBaseAddr    + GPIOx_PUPDR_Ofs);
GPIOx_IDR_ts       *spGPIOH_IDR       = (GPIOx_IDR_ts      *)(GPIO_H_RegBaseAddr    + GPIOx_IDR_Ofs);
GPIOx_ODR_ts       *spGPIOH_ODR       = (GPIOx_ODR_ts      *)(GPIO_H_RegBaseAddr    + GPIOx_ODR_Ofs);
GPIOx_BSRR_ts      *spGPIOH_BSSR      = (GPIOx_BSRR_ts     *)(GPIO_H_RegBaseAddr    + GPIOx_BSSR_Ofs);
GPIOx_LCKR_ts      *spGPIOH_LCKR      = (GPIOx_LCKR_ts     *)(GPIO_H_RegBaseAddr    + GPIOx_LCKR_Ofs);
GPIOx_AFRL_ts      *spGPIOH_AFRL      = (GPIOx_AFRL_ts     *)(GPIO_H_RegBaseAddr    + GPIOx_AFRL_Ofs);
GPIOx_AFRH_ts      *spGPIOH_AFRH      = (GPIOx_AFRH_ts     *)(GPIO_H_RegBaseAddr    + GPIOx_AFRH_Ofs);

GPIOx_MODER_ts     *spGPIOI_MODER     = (GPIOx_MODER_ts    *)(GPIO_I_RegBaseAddr    + GPIOx_MODER_Ofs);
GPIOx_OTYPER_ts    *spGPIOI_OTYPER    = (GPIOx_OTYPER_ts   *)(GPIO_I_RegBaseAddr    + GPIOx_OTYPER_Ofs);
GPIOx_OSPEEDR_ts   *spGPIOI_OSPEEDR   = (GPIOx_OSPEEDR_ts  *)(GPIO_I_RegBaseAddr    + GPIOx_OSPEEDR_Ofs);
GPIOx_PUPDR_ts     *spGPIOI_PUPDR     = (GPIOx_PUPDR_ts    *)(GPIO_I_RegBaseAddr    + GPIOx_PUPDR_Ofs);
GPIOx_IDR_ts       *spGPIOI_IDR       = (GPIOx_IDR_ts      *)(GPIO_I_RegBaseAddr    + GPIOx_IDR_Ofs);
GPIOx_ODR_ts       *spGPIOI_ODR       = (GPIOx_ODR_ts      *)(GPIO_I_RegBaseAddr    + GPIOx_ODR_Ofs);
GPIOx_BSRR_ts      *spGPIOI_BSSR      = (GPIOx_BSRR_ts     *)(GPIO_I_RegBaseAddr    + GPIOx_BSSR_Ofs);
GPIOx_LCKR_ts      *spGPIOI_LCKR      = (GPIOx_LCKR_ts     *)(GPIO_I_RegBaseAddr    + GPIOx_LCKR_Ofs);
GPIOx_AFRL_ts      *spGPIOI_AFRL      = (GPIOx_AFRL_ts     *)(GPIO_I_RegBaseAddr    + GPIOx_AFRL_Ofs);
GPIOx_AFRH_ts      *spGPIOI_AFRH      = (GPIOx_AFRH_ts     *)(GPIO_I_RegBaseAddr    + GPIOx_AFRH_Ofs);


/*------------GPIO Types---------------*/
//MODER
#define Input_mode 						0x00u
#define General_Purpose_output_mode 	0x01u
#define Alternate_function_mode 		0x02u
#define Analog_mode 					0x03u
//OTYPER
#define Output_push_pull				0x00u
#define Output_open_drain				0x01u
//OSPEEDR
#define Low_speed 						0x00u
#define Medium_speed				 	0x01u
#define High_speed				 		0x02u
#define Very_high_speed 				0x03u
//PUPDR
#define No_pull_up_No_pull_down 		0x00u
#define Pull_up				 			0x01u
#define Pull_down				 		0x02u
//ODR
#define Pin_High						0x01u
#define Pin_ON							0x01u
#define Pin_True						0x01u
#define Pin_Low							0x00u
#define Pin_OFF							0x00u
#define Pin_False						0x00u
//BSSR
#define Pin_Set							0x01u
#define Pin_Reset						0x01u
//AFRL & AFRH
#define AF0								0x00u
#define AF1								0x01u
#define AF2								0x02u
#define AF3								0x03u
#define AF4								0x04u
#define AF5								0x05u
#define AF6								0x06u
#define AF7								0x07u
#define AF8								0x08u
#define AF9								0x09u
#define AF10							0x0Au
#define AF11							0x0Bu
#define AF12							0x0Cu
#define AF13							0x0Du
#define AF14							0x0Eu
#define AF15							0x0Fu



#endif /* STM32F407_REGS_H_ */
