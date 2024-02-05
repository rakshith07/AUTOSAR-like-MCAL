/*
 * STM32F103Cxx.h
 *
 *  Created on: Feb 5, 2024
 *      Author: Rakshith Guruswamy
 */

#ifndef STM32F103CXX_H_
#define STM32F103CXX_H_


#include "Platform_Types.h"

#define assert_param(expr) ((void)0)

typedef struct
{
  volatile uint32 CR;
  volatile uint32 CFGR;
  volatile uint32 CIR;
  volatile uint32 APB2RSTR;
  volatile uint32 APB1RSTR;
  volatile uint32 AHBENR;
  volatile uint32 APB2ENR;
  volatile uint32 APB1ENR;
  volatile uint32 BDCR;
  volatile uint32 CSR;
  volatile uint32 AHBRSTR;
  volatile uint32 CFGR2;
} RCC_ts;

typedef struct
{
  volatile uint32 CRL;
  volatile uint32 CRH;
  volatile uint32 IDR;
  volatile uint32 ODR;
  volatile uint32 BSRR;
  volatile uint32 BRR;
  volatile uint32 LCKR;
} GPIO_ts;

#define FLASH_BASE            ((uint32)0x08000000)
#define SRAM_BASE             ((uint32)0x20000000)
#define PERIPH_BASE           ((uint32)0x40000000)

/* Peripheral memory map */
#define APB1PERIPH_BASE       PERIPH_BASE
#define APB2PERIPH_BASE       (PERIPH_BASE + 0x10000)
#define AHBPERIPH_BASE        (PERIPH_BASE + 0x20000)

#define GPIOA_BASE            (APB2PERIPH_BASE + 0x0800)
#define GPIOB_BASE            (APB2PERIPH_BASE + 0x0C00)
#define GPIOC_BASE            (APB2PERIPH_BASE + 0x1000)
#define GPIOD_BASE            (APB2PERIPH_BASE + 0x1400)
#define GPIOE_BASE            (APB2PERIPH_BASE + 0x1800)
#define GPIOF_BASE            (APB2PERIPH_BASE + 0x1C00)
#define GPIOG_BASE            (APB2PERIPH_BASE + 0x2000)

#define RCC_BASE              (AHBPERIPH_BASE + 0x1000)

#define GPIOA               ((GPIO_ts *) GPIOA_BASE)
#define GPIOB               ((GPIO_ts *) GPIOB_BASE)
#define GPIOC               ((GPIO_ts *) GPIOC_BASE)
#define GPIOD               ((GPIO_ts *) GPIOD_BASE)
#define GPIOE               ((GPIO_ts *) GPIOE_BASE)
#define GPIOF               ((GPIO_ts *) GPIOF_BASE)
#define GPIOG               ((GPIO_ts *) GPIOG_BASE)

#define RCC                 ((RCC_ts *) RCC_BASE)

/******************************************************************************/
/*                         Peripheral Registers_Bits_Definition               */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*                         Reset and Clock Control                            */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for RCC_CR register  ********************/
#define  RCC_CR_HSION                        ((uint32)0x00000001)        /* Internal High Speed clock enable */
#define  RCC_CR_HSIRDY                       ((uint32)0x00000002)        /* Internal High Speed clock ready flag */
#define  RCC_CR_HSITRIM                      ((uint32)0x000000F8)        /* Internal High Speed clock trimming */
#define  RCC_CR_HSICAL                       ((uint32)0x0000FF00)        /* Internal High Speed clock Calibration */
#define  RCC_CR_HSEON                        ((uint32)0x00010000)        /* External High Speed clock enable */
#define  RCC_CR_HSERDY                       ((uint32)0x00020000)        /* External High Speed clock ready flag */
#define  RCC_CR_HSEBYP                       ((uint32)0x00040000)        /* External High Speed clock Bypass */
#define  RCC_CR_CSSON                        ((uint32)0x00080000)        /* Clock Security System enable */
#define  RCC_CR_PLLON                        ((uint32)0x01000000)        /* PLL enable */
#define  RCC_CR_PLLRDY                       ((uint32)0x02000000)        /* PLL clock ready flag */

/*******************  Bit definition for RCC_CFGR register  *******************/
/* SW configuration */
#define  RCC_CFGR_SW                         ((uint32)0x00000003)        /* SW[1:0] bits (System clock Switch) */
#define  RCC_CFGR_SW_0                       ((uint32)0x00000001)        /* Bit 0 */
#define  RCC_CFGR_SW_1                       ((uint32)0x00000002)        /* Bit 1 */

#define  RCC_CFGR_SW_HSI                     ((uint32)0x00000000)        /* HSI selected as system clock */
#define  RCC_CFGR_SW_HSE                     ((uint32)0x00000001)        /* HSE selected as system clock */
#define  RCC_CFGR_SW_PLL                     ((uint32)0x00000002)        /* PLL selected as system clock */

/* SWS configuration */
#define  RCC_CFGR_SWS                        ((uint32)0x0000000C)        /* SWS[1:0] bits (System Clock Switch Status) */
#define  RCC_CFGR_SWS_0                      ((uint32)0x00000004)        /* Bit 0 */
#define  RCC_CFGR_SWS_1                      ((uint32)0x00000008)        /* Bit 1 */

#define  RCC_CFGR_SWS_HSI                    ((uint32)0x00000000)        /* HSI oscillator used as system clock */
#define  RCC_CFGR_SWS_HSE                    ((uint32)0x00000004)        /* HSE oscillator used as system clock */
#define  RCC_CFGR_SWS_PLL                    ((uint32)0x00000008)        /* PLL used as system clock */

/* HPRE configuration */
#define  RCC_CFGR_HPRE                       ((uint32)0x000000F0)        /* HPRE[3:0] bits (AHB prescaler) */
#define  RCC_CFGR_HPRE_0                     ((uint32)0x00000010)        /* Bit 0 */
#define  RCC_CFGR_HPRE_1                     ((uint32)0x00000020)        /* Bit 1 */
#define  RCC_CFGR_HPRE_2                     ((uint32)0x00000040)        /* Bit 2 */
#define  RCC_CFGR_HPRE_3                     ((uint32)0x00000080)        /* Bit 3 */

#define  RCC_CFGR_HPRE_DIV1                  ((uint32)0x00000000)        /* SYSCLK not divided */
#define  RCC_CFGR_HPRE_DIV2                  ((uint32)0x00000080)        /* SYSCLK divided by 2 */
#define  RCC_CFGR_HPRE_DIV4                  ((uint32)0x00000090)        /* SYSCLK divided by 4 */
#define  RCC_CFGR_HPRE_DIV8                  ((uint32)0x000000A0)        /* SYSCLK divided by 8 */
#define  RCC_CFGR_HPRE_DIV16                 ((uint32)0x000000B0)        /* SYSCLK divided by 16 */
#define  RCC_CFGR_HPRE_DIV64                 ((uint32)0x000000C0)        /* SYSCLK divided by 64 */
#define  RCC_CFGR_HPRE_DIV128                ((uint32)0x000000D0)        /* SYSCLK divided by 128 */
#define  RCC_CFGR_HPRE_DIV256                ((uint32)0x000000E0)        /* SYSCLK divided by 256 */
#define  RCC_CFGR_HPRE_DIV512                ((uint32)0x000000F0)        /* SYSCLK divided by 512 */

/* PPRE1 configuration */
#define  RCC_CFGR_PPRE1                      ((uint32)0x00000700)        /* PRE1[2:0] bits (APB1 prescaler) */
#define  RCC_CFGR_PPRE1_0                    ((uint32)0x00000100)        /* Bit 0 */
#define  RCC_CFGR_PPRE1_1                    ((uint32)0x00000200)        /* Bit 1 */
#define  RCC_CFGR_PPRE1_2                    ((uint32)0x00000400)        /* Bit 2 */

#define  RCC_CFGR_PPRE1_DIV1                 ((uint32)0x00000000)        /* HCLK not divided */
#define  RCC_CFGR_PPRE1_DIV2                 ((uint32)0x00000400)        /* HCLK divided by 2 */
#define  RCC_CFGR_PPRE1_DIV4                 ((uint32)0x00000500)        /* HCLK divided by 4 */
#define  RCC_CFGR_PPRE1_DIV8                 ((uint32)0x00000600)        /* HCLK divided by 8 */
#define  RCC_CFGR_PPRE1_DIV16                ((uint32)0x00000700)        /* HCLK divided by 16 */

/* PPRE2 configuration */
#define  RCC_CFGR_PPRE2                      ((uint32)0x00003800)        /* PRE2[2:0] bits (APB2 prescaler) */
#define  RCC_CFGR_PPRE2_0                    ((uint32)0x00000800)        /* Bit 0 */
#define  RCC_CFGR_PPRE2_1                    ((uint32)0x00001000)        /* Bit 1 */
#define  RCC_CFGR_PPRE2_2                    ((uint32)0x00002000)        /* Bit 2 */

#define  RCC_CFGR_PPRE2_DIV1                 ((uint32)0x00000000)        /* HCLK not divided */
#define  RCC_CFGR_PPRE2_DIV2                 ((uint32)0x00002000)        /* HCLK divided by 2 */
#define  RCC_CFGR_PPRE2_DIV4                 ((uint32)0x00002800)        /* HCLK divided by 4 */
#define  RCC_CFGR_PPRE2_DIV8                 ((uint32)0x00003000)        /* HCLK divided by 8 */
#define  RCC_CFGR_PPRE2_DIV16                ((uint32)0x00003800)        /* HCLK divided by 16 */

/* ADCPPRE configuration */
#define  RCC_CFGR_ADCPRE                     ((uint32)0x0000C000)        /* ADCPRE[1:0] bits (ADC prescaler) */
#define  RCC_CFGR_ADCPRE_0                   ((uint32)0x00004000)        /* Bit 0 */
#define  RCC_CFGR_ADCPRE_1                   ((uint32)0x00008000)        /* Bit 1 */

#define  RCC_CFGR_ADCPRE_DIV2                ((uint32)0x00000000)        /* PCLK2 divided by 2 */
#define  RCC_CFGR_ADCPRE_DIV4                ((uint32)0x00004000)        /* PCLK2 divided by 4 */
#define  RCC_CFGR_ADCPRE_DIV6                ((uint32)0x00008000)        /* PCLK2 divided by 6 */
#define  RCC_CFGR_ADCPRE_DIV8                ((uint32)0x0000C000)        /* PCLK2 divided by 8 */

#define  RCC_CFGR_PLLSRC                     ((uint32)0x00010000)        /* PLL entry clock source */

#define  RCC_CFGR_PLLXTPRE                   ((uint32)0x00020000)        /* HSE divider for PLL entry */

/* PLLMUL configuration */
#define  RCC_CFGR_PLLMULL                    ((uint32)0x003C0000)        /* PLLMUL[3:0] bits (PLL multiplication factor) */
#define  RCC_CFGR_PLLMULL_0                  ((uint32)0x00040000)        /* Bit 0 */
#define  RCC_CFGR_PLLMULL_1                  ((uint32)0x00080000)        /* Bit 1 */
#define  RCC_CFGR_PLLMULL_2                  ((uint32)0x00100000)        /* Bit 2 */
#define  RCC_CFGR_PLLMULL_3                  ((uint32)0x00200000)        /* Bit 3 */

#define  RCC_CFGR_PLLMULL2                   ((uint32)0x00000000)        /* PLL input clock*2 */
#define  RCC_CFGR_PLLMULL3                   ((uint32)0x00040000)        /* PLL input clock*3 */
#define  RCC_CFGR_PLLMULL4                   ((uint32)0x00080000)        /* PLL input clock*4 */
#define  RCC_CFGR_PLLMULL5                   ((uint32)0x000C0000)        /* PLL input clock*5 */
#define  RCC_CFGR_PLLMULL6                   ((uint32)0x00100000)        /* PLL input clock*6 */
#define  RCC_CFGR_PLLMULL7                   ((uint32)0x00140000)        /* PLL input clock*7 */
#define  RCC_CFGR_PLLMULL8                   ((uint32)0x00180000)        /* PLL input clock*8 */
#define  RCC_CFGR_PLLMULL9                   ((uint32)0x001C0000)        /* PLL input clock*9 */
#define  RCC_CFGR_PLLMULL10                  ((uint32)0x00200000)        /* PLL input clock10 */
#define  RCC_CFGR_PLLMULL11                  ((uint32)0x00240000)        /* PLL input clock*11 */
#define  RCC_CFGR_PLLMULL12                  ((uint32)0x00280000)        /* PLL input clock*12 */
#define  RCC_CFGR_PLLMULL13                  ((uint32)0x002C0000)        /* PLL input clock*13 */
#define  RCC_CFGR_PLLMULL14                  ((uint32)0x00300000)        /* PLL input clock*14 */
#define  RCC_CFGR_PLLMULL15                  ((uint32)0x00340000)        /* PLL input clock*15 */
#define  RCC_CFGR_PLLMULL16                  ((uint32)0x00380000)        /* PLL input clock*16 */

#define  RCC_CFGR_OTGFSPRE                   ((uint32)0x00400000)        /* USB OTG FS prescaler */

/* MCO configuration */
 #define  RCC_CFGR_MCO                       ((uint32)0x07000000)        /* MCO[2:0] bits (Microcontroller Clock Output) */
 #define  RCC_CFGR_MCO_0                     ((uint32)0x01000000)        /* Bit 0 */
 #define  RCC_CFGR_MCO_1                     ((uint32)0x02000000)        /* Bit 1 */
 #define  RCC_CFGR_MCO_2                     ((uint32)0x04000000)        /* Bit 2 */

 #define  RCC_CFGR_MCO_NOCLOCK               ((uint32)0x00000000)        /* No clock */
 #define  RCC_CFGR_MCO_SYSCLK                ((uint32)0x04000000)        /* System clock selected as MCO source */
 #define  RCC_CFGR_MCO_HSI                   ((uint32)0x05000000)        /* HSI clock selected as MCO source */
 #define  RCC_CFGR_MCO_HSE                   ((uint32)0x06000000)        /* HSE clock selected as MCO source  */
 #define  RCC_CFGR_MCO_PLL                   ((uint32)0x07000000)        /* PLL clock divided by 2 selected as MCO source */

/*******************  Bit definition for RCC_CIR register  ********************/
#define  RCC_CIR_LSIRDYF                     ((uint32)0x00000001)        /* LSI Ready Interrupt flag */
#define  RCC_CIR_LSERDYF                     ((uint32)0x00000002)        /* LSE Ready Interrupt flag */
#define  RCC_CIR_HSIRDYF                     ((uint32)0x00000004)        /* HSI Ready Interrupt flag */
#define  RCC_CIR_HSERDYF                     ((uint32)0x00000008)        /* HSE Ready Interrupt flag */
#define  RCC_CIR_PLLRDYF                     ((uint32)0x00000010)        /* PLL Ready Interrupt flag */
#define  RCC_CIR_CSSF                        ((uint32)0x00000080)        /* Clock Security System Interrupt flag */
#define  RCC_CIR_LSIRDYIE                    ((uint32)0x00000100)        /* LSI Ready Interrupt Enable */
#define  RCC_CIR_LSERDYIE                    ((uint32)0x00000200)        /* LSE Ready Interrupt Enable */
#define  RCC_CIR_HSIRDYIE                    ((uint32)0x00000400)        /* HSI Ready Interrupt Enable */
#define  RCC_CIR_HSERDYIE                    ((uint32)0x00000800)        /* HSE Ready Interrupt Enable */
#define  RCC_CIR_PLLRDYIE                    ((uint32)0x00001000)        /* PLL Ready Interrupt Enable */
#define  RCC_CIR_LSIRDYC                     ((uint32)0x00010000)        /* LSI Ready Interrupt Clear */
#define  RCC_CIR_LSERDYC                     ((uint32)0x00020000)        /* LSE Ready Interrupt Clear */
#define  RCC_CIR_HSIRDYC                     ((uint32)0x00040000)        /* HSI Ready Interrupt Clear */
#define  RCC_CIR_HSERDYC                     ((uint32)0x00080000)        /* HSE Ready Interrupt Clear */
#define  RCC_CIR_PLLRDYC                     ((uint32)0x00100000)        /* PLL Ready Interrupt Clear */
#define  RCC_CIR_CSSC                        ((uint32)0x00800000)        /* Clock Security System Interrupt Clear */

/*****************  Bit definition for RCC_APB2RSTR register  *****************/
#define  RCC_APB2RSTR_AFIORST                ((uint32)0x00000001)        /* Alternate Function I/O reset */
#define  RCC_APB2RSTR_IOPARST                ((uint32)0x00000004)        /* I/O port A reset */
#define  RCC_APB2RSTR_IOPBRST                ((uint32)0x00000008)        /* I/O port B reset */
#define  RCC_APB2RSTR_IOPCRST                ((uint32)0x00000010)        /* I/O port C reset */
#define  RCC_APB2RSTR_IOPDRST                ((uint32)0x00000020)        /* I/O port D reset */
#define  RCC_APB2RSTR_IOPERST                ((uint32)0x00000040)        /* I/O port E reset */
#define  RCC_APB2RSTR_IOPFRST                ((uint32)0x00000080)        /* I/O port F reset */
#define  RCC_APB2RSTR_IOPGRST                ((uint32)0x00000100)        /* I/O port G reset */
#define  RCC_APB2RSTR_ADC1RST                ((uint32)0x00000200)        /* ADC 1 interface reset */
#define  RCC_APB2RSTR_ADC2RST                ((uint32)0x00000400)        /* ADC 2 interface reset */
#define  RCC_APB2RSTR_TIM1RST                ((uint32)0x00000800)        /* TIM1 Timer reset */
#define  RCC_APB2RSTR_SPI1RST                ((uint32)0x00001000)        /* SPI 1 reset */
#define  RCC_APB2RSTR_TIM8RST                ((uint32)0x00002000)        /* TIM8 Timer reset */
#define  RCC_APB2RSTR_USART1RST              ((uint32)0x00004000)        /* USART1 reset */
#define  RCC_APB2RSTR_ADC3RST                ((uint32)0x00008000)        /* ADC3 interface reset */
#define  RCC_APB2RSTR_TIM9RST                ((uint32)0x00080000)        /* TIM9 Timer reset */
#define  RCC_APB2RSTR_TIM10RST               ((uint32)0x00100000)        /* TIM10 Timer reset */
#define  RCC_APB2RSTR_TIM11RST               ((uint32)0x00200000)        /* TIM11 Timer reset */

/*****************  Bit definition for RCC_APB1RSTR register  *****************/
#define  RCC_APB1RSTR_TIM2RST                ((uint32)0x00000001)        /* Timer 2 reset */
#define  RCC_APB1RSTR_TIM3RST                ((uint32)0x00000002)        /* Timer 3 reset */
#define  RCC_APB1RSTR_TIM4RST                ((uint32)0x00000004)        /* Timer 4 reset */
#define  RCC_APB1RSTR_TIM5RST                ((uint32)0x00000008)        /* Timer 5 reset */
#define  RCC_APB1RSTR_TIM6RST                ((uint32)0x00000010)        /* Timer 6 reset */
#define  RCC_APB1RSTR_TIM7RST                ((uint32)0x00000020)        /* Timer 7 reset */
#define  RCC_APB1RSTR_TIM12RST               ((uint32)0x00000040)        /* TIM12 Timer reset */
#define  RCC_APB1RSTR_TIM13RST               ((uint32)0x00000080)        /* TIM13 Timer reset */
#define  RCC_APB1RSTR_TIM14RST               ((uint32)0x00000100)        /* TIM14 Timer reset */
#define  RCC_APB1RSTR_WWDGRST                ((uint32)0x00000800)        /* Window Watchdog reset */
#define  RCC_APB1RSTR_SPI2RST                ((uint32)0x00004000)        /* SPI 2 reset */
#define  RCC_APB1RSTR_SPI3RST                ((uint32)0x00008000)        /* SPI 3 reset */
#define  RCC_APB1RSTR_USART2RST              ((uint32)0x00020000)        /* USART 2 reset */
#define  RCC_APB1RSTR_USART3RST              ((uint32)0x00040000)        /* RUSART 3 reset */
#define  RCC_APB1RSTR_UART4RST               ((uint32)0x00080000)        /* UART 4 reset */
#define  RCC_APB1RSTR_UART5RST               ((uint32)0x00100000)        /* UART 5 reset */
#define  RCC_APB1RSTR_I2C1RST                ((uint32)0x00200000)        /* I2C 1 reset */
#define  RCC_APB1RSTR_I2C2RST                ((uint32)0x00400000)        /* I2C 2 reset */
#define  RCC_APB1RSTR_USBRST                 ((uint32)0x00800000)        /* USB Device reset */
#define  RCC_APB1RSTR_CANRST                 ((uint32)0x02000000)        /* CAN reset */
#define  RCC_APB1RSTR_BKPRST                 ((uint32)0x08000000)        /* Backup interface reset */
#define  RCC_APB1RSTR_PWRRST                 ((uint32)0x10000000)        /* Power interface reset */
#define  RCC_APB1RSTR_DACRST                 ((uint32)0x20000000)        /* DAC interface reset */

/******************  Bit definition for RCC_AHBENR register  ******************/
#define  RCC_AHBENR_DMA1EN                   ((uint16)0x0001)            /* DMA1 clock enable */
#define  RCC_AHBENR_DMA2EN                   ((uint16)0x0002)            /* DMA2 clock enable */
#define  RCC_AHBENR_SRAMEN                   ((uint16)0x0004)            /* SRAM interface clock enable */
#define  RCC_AHBENR_FLITFEN                  ((uint16)0x0010)            /* FLITF clock enable */
#define  RCC_AHBENR_CRCEN                    ((uint16)0x0040)            /* CRC clock enable */
#define  RCC_AHBENR_FSMCEN                   ((uint16)0x0100)            /* FSMC clock enable */
#define  RCC_AHBENR_SDIOEN                   ((uint16)0x0400)            /* SDIO clock enable */

/******************  Bit definition for RCC_APB2ENR register  *****************/
#define  RCC_APB2ENR_AFIOEN                  ((uint32)0x00000001)         /* Alternate Function I/O clock enable */
#define  RCC_APB2ENR_IOPAEN                  ((uint32)0x00000004)         /* I/O port A clock enable */
#define  RCC_APB2ENR_IOPBEN                  ((uint32)0x00000008)         /* I/O port B clock enable */
#define  RCC_APB2ENR_IOPCEN                  ((uint32)0x00000010)         /* I/O port C clock enable */
#define  RCC_APB2ENR_IOPDEN                  ((uint32)0x00000020)         /* I/O port D clock enable */
#define  RCC_APB2ENR_IOPEEN                  ((uint32)0x00000040)         /* I/O port E clock enable */
#define  RCC_APB2ENR_IOPFEN                  ((uint32)0x00000080)         /* I/O port F clock enable */
#define  RCC_APB2ENR_IOPGEN                  ((uint32)0x00000100)         /* I/O port G clock enable */
#define  RCC_APB2ENR_ADC1EN                  ((uint32)0x00000200)         /* ADC 1 interface clock enable */
#define  RCC_APB2ENR_ADC2EN                  ((uint32)0x00000400)         /* ADC 2 interface clock enable */
#define  RCC_APB2ENR_TIM1EN                  ((uint32)0x00000800)         /* TIM1 Timer clock enable */
#define  RCC_APB2ENR_SPI1EN                  ((uint32)0x00001000)         /* SPI 1 clock enable */
#define  RCC_APB2ENR_TIM8EN                  ((uint32)0x00002000)         /* TIM8 Timer clock enable */
#define  RCC_APB2ENR_USART1EN                ((uint32)0x00004000)         /* USART1 clock enable */
#define  RCC_APB2ENR_ADC3EN                  ((uint32)0x00008000)         /* DMA1 clock enable */
#define  RCC_APB2ENR_TIM9EN                  ((uint32)0x00080000)         /* TIM9 Timer clock enable  */
#define  RCC_APB2ENR_TIM10EN                 ((uint32)0x00100000)         /* TIM10 Timer clock enable  */
#define  RCC_APB2ENR_TIM11EN                 ((uint32)0x00200000)         /* TIM11 Timer clock enable */

/*****************  Bit definition for RCC_APB1ENR register  ******************/
#define  RCC_APB1ENR_TIM2EN                  ((uint32)0x00000001)        /* Timer 2 clock enabled*/
#define  RCC_APB1ENR_TIM3EN                  ((uint32)0x00000002)        /* Timer 3 clock enable */
#define  RCC_APB1ENR_TIM4EN                  ((uint32)0x00000004)        /* Timer 4 clock enable */
#define  RCC_APB1ENR_TIM5EN                  ((uint32)0x00000008)        /* Timer 5 clock enable */
#define  RCC_APB1ENR_TIM6EN                  ((uint32)0x00000010)        /* Timer 6 clock enable */
#define  RCC_APB1ENR_TIM7EN                  ((uint32)0x00000020)        /* Timer 7 clock enable */
#define  RCC_APB1ENR_TIM12EN                 ((uint32)0x00000040)        /* TIM12 Timer clock enable  */
#define  RCC_APB1ENR_TIM13EN                 ((uint32)0x00000080)        /* TIM13 Timer clock enable  */
#define  RCC_APB1ENR_TIM14EN                 ((uint32)0x00000100)        /* TIM14 Timer clock enable */
#define  RCC_APB1ENR_WWDGEN                  ((uint32)0x00000800)        /* Window Watchdog clock enable */
#define  RCC_APB1ENR_SPI2EN                  ((uint32)0x00004000)        /* SPI 2 clock enable */
#define  RCC_APB1ENR_SPI3EN                  ((uint32)0x00008000)        /* SPI 3 clock enable */
#define  RCC_APB1ENR_USART2EN                ((uint32)0x00020000)        /* USART 2 clock enable */
#define  RCC_APB1ENR_USART3EN                ((uint32)0x00040000)        /* USART 3 clock enable */
#define  RCC_APB1ENR_UART4EN                 ((uint32)0x00080000)        /* UART 4 clock enable */
#define  RCC_APB1ENR_UART5EN                 ((uint32)0x00100000)        /* UART 5 clock enable */
#define  RCC_APB1ENR_I2C1EN                  ((uint32)0x00200000)        /* I2C 1 clock enable */
#define  RCC_APB1ENR_I2C2EN                  ((uint32)0x00400000)        /* I2C 2 clock enable */
#define  RCC_APB1ENR_USBEN                   ((uint32)0x00800000)        /* USB Device clock enable */
#define  RCC_APB1ENR_CANEN                   ((uint32)0x02000000)        /* CAN clock enable */
#define  RCC_APB1ENR_BKPEN                   ((uint32)0x08000000)        /* Backup interface clock enable */
#define  RCC_APB1ENR_PWREN                   ((uint32)0x10000000)        /* Power interface clock enable */
#define  RCC_APB1ENR_DACEN                   ((uint32)0x20000000)        /* DAC interface clock enable */

/*******************  Bit definition for RCC_BDCR register  *******************/
#define  RCC_BDCR_LSEON                      ((uint32)0x00000001)        /* External Low Speed oscillator enable */
#define  RCC_BDCR_LSERDY                     ((uint32)0x00000002)        /* External Low Speed oscillator Ready */
#define  RCC_BDCR_LSEBYP                     ((uint32)0x00000004)        /* External Low Speed oscillator Bypass */
#define  RCC_BDCR_RTCSEL                     ((uint32)0x00000300)        /* RTCSEL[1:0] bits (RTC clock source selection) */
#define  RCC_BDCR_RTCSEL_0                   ((uint32)0x00000100)        /* Bit 0 */
#define  RCC_BDCR_RTCSEL_1                   ((uint32)0x00000200)        /* Bit 1 */
/* RTC congiguration */
#define  RCC_BDCR_RTCSEL_NOCLOCK             ((uint32)0x00000000)        /* No clock */
#define  RCC_BDCR_RTCSEL_LSE                 ((uint32)0x00000100)        /* LSE oscillator clock used as RTC clock */
#define  RCC_BDCR_RTCSEL_LSI                 ((uint32)0x00000200)        /* LSI oscillator clock used as RTC clock */
#define  RCC_BDCR_RTCSEL_HSE                 ((uint32)0x00000300)        /* HSE oscillator clock divided by 128 used as RTC clock */

#define  RCC_BDCR_RTCEN                      ((uint32)0x00008000)        /* RTC clock enable */
#define  RCC_BDCR_BDRST                      ((uint32)0x00010000)        /* Backup domain software reset  */


/******************************************************************************/
/*                                                                            */
/*                General Purpose and Alternate Function I/O                  */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for GPIO_CRL register  *******************/
#define  GPIO_CRL_MODE                       ((uint32)0x33333333)        /* Port x mode bits */

#define  GPIO_CRL_MODE0                      ((uint32)0x00000003)        /* MODE0[1:0] bits (Port x mode bits, pin 0) */
#define  GPIO_CRL_MODE0_0                    ((uint32)0x00000001)        /* Bit 0 */
#define  GPIO_CRL_MODE0_1                    ((uint32)0x00000002)        /* Bit 1 */

#define  GPIO_CRL_MODE1                      ((uint32)0x00000030)        /* MODE1[1:0] bits (Port x mode bits, pin 1) */
#define  GPIO_CRL_MODE1_0                    ((uint32)0x00000010)        /* Bit 0 */
#define  GPIO_CRL_MODE1_1                    ((uint32)0x00000020)        /* Bit 1 */

#define  GPIO_CRL_MODE2                      ((uint32)0x00000300)        /* MODE2[1:0] bits (Port x mode bits, pin 2) */
#define  GPIO_CRL_MODE2_0                    ((uint32)0x00000100)        /* Bit 0 */
#define  GPIO_CRL_MODE2_1                    ((uint32)0x00000200)        /* Bit 1 */

#define  GPIO_CRL_MODE3                      ((uint32)0x00003000)        /* MODE3[1:0] bits (Port x mode bits, pin 3) */
#define  GPIO_CRL_MODE3_0                    ((uint32)0x00001000)        /* Bit 0 */
#define  GPIO_CRL_MODE3_1                    ((uint32)0x00002000)        /* Bit 1 */

#define  GPIO_CRL_MODE4                      ((uint32)0x00030000)        /* MODE4[1:0] bits (Port x mode bits, pin 4) */
#define  GPIO_CRL_MODE4_0                    ((uint32)0x00010000)        /* Bit 0 */
#define  GPIO_CRL_MODE4_1                    ((uint32)0x00020000)        /* Bit 1 */

#define  GPIO_CRL_MODE5                      ((uint32)0x00300000)        /* MODE5[1:0] bits (Port x mode bits, pin 5) */
#define  GPIO_CRL_MODE5_0                    ((uint32)0x00100000)        /* Bit 0 */
#define  GPIO_CRL_MODE5_1                    ((uint32)0x00200000)        /* Bit 1 */

#define  GPIO_CRL_MODE6                      ((uint32)0x03000000)        /* MODE6[1:0] bits (Port x mode bits, pin 6) */
#define  GPIO_CRL_MODE6_0                    ((uint32)0x01000000)        /* Bit 0 */
#define  GPIO_CRL_MODE6_1                    ((uint32)0x02000000)        /* Bit 1 */

#define  GPIO_CRL_MODE7                      ((uint32)0x30000000)        /* MODE7[1:0] bits (Port x mode bits, pin 7) */
#define  GPIO_CRL_MODE7_0                    ((uint32)0x10000000)        /* Bit 0 */
#define  GPIO_CRL_MODE7_1                    ((uint32)0x20000000)        /* Bit 1 */

#define  GPIO_CRL_CNF                        ((uint32)0xCCCCCCCC)        /* Port x configuration bits */

#define  GPIO_CRL_CNF0                       ((uint32)0x0000000C)        /* CNF0[1:0] bits (Port x configuration bits, pin 0) */
#define  GPIO_CRL_CNF0_0                     ((uint32)0x00000004)        /* Bit 0 */
#define  GPIO_CRL_CNF0_1                     ((uint32)0x00000008)        /* Bit 1 */

#define  GPIO_CRL_CNF1                       ((uint32)0x000000C0)        /* CNF1[1:0] bits (Port x configuration bits, pin 1) */
#define  GPIO_CRL_CNF1_0                     ((uint32)0x00000040)        /* Bit 0 */
#define  GPIO_CRL_CNF1_1                     ((uint32)0x00000080)        /* Bit 1 */

#define  GPIO_CRL_CNF2                       ((uint32)0x00000C00)        /* CNF2[1:0] bits (Port x configuration bits, pin 2) */
#define  GPIO_CRL_CNF2_0                     ((uint32)0x00000400)        /* Bit 0 */
#define  GPIO_CRL_CNF2_1                     ((uint32)0x00000800)        /* Bit 1 */

#define  GPIO_CRL_CNF3                       ((uint32)0x0000C000)        /* CNF3[1:0] bits (Port x configuration bits, pin 3) */
#define  GPIO_CRL_CNF3_0                     ((uint32)0x00004000)        /* Bit 0 */
#define  GPIO_CRL_CNF3_1                     ((uint32)0x00008000)        /* Bit 1 */

#define  GPIO_CRL_CNF4                       ((uint32)0x000C0000)        /* CNF4[1:0] bits (Port x configuration bits, pin 4) */
#define  GPIO_CRL_CNF4_0                     ((uint32)0x00040000)        /* Bit 0 */
#define  GPIO_CRL_CNF4_1                     ((uint32)0x00080000)        /* Bit 1 */

#define  GPIO_CRL_CNF5                       ((uint32)0x00C00000)        /* CNF5[1:0] bits (Port x configuration bits, pin 5) */
#define  GPIO_CRL_CNF5_0                     ((uint32)0x00400000)        /* Bit 0 */
#define  GPIO_CRL_CNF5_1                     ((uint32)0x00800000)        /* Bit 1 */

#define  GPIO_CRL_CNF6                       ((uint32)0x0C000000)        /* CNF6[1:0] bits (Port x configuration bits, pin 6) */
#define  GPIO_CRL_CNF6_0                     ((uint32)0x04000000)        /* Bit 0 */
#define  GPIO_CRL_CNF6_1                     ((uint32)0x08000000)        /* Bit 1 */

#define  GPIO_CRL_CNF7                       ((uint32)0xC0000000)        /* CNF7[1:0] bits (Port x configuration bits, pin 7) */
#define  GPIO_CRL_CNF7_0                     ((uint32)0x40000000)        /* Bit 0 */
#define  GPIO_CRL_CNF7_1                     ((uint32)0x80000000)        /* Bit 1 */

/*******************  Bit definition for GPIO_CRH register  *******************/
#define  GPIO_CRH_MODE                       ((uint32)0x33333333)        /* Port x mode bits */

#define  GPIO_CRH_MODE8                      ((uint32)0x00000003)        /* MODE8[1:0] bits (Port x mode bits, pin 8) */
#define  GPIO_CRH_MODE8_0                    ((uint32)0x00000001)        /* Bit 0 */
#define  GPIO_CRH_MODE8_1                    ((uint32)0x00000002)        /* Bit 1 */

#define  GPIO_CRH_MODE9                      ((uint32)0x00000030)        /* MODE9[1:0] bits (Port x mode bits, pin 9) */
#define  GPIO_CRH_MODE9_0                    ((uint32)0x00000010)        /* Bit 0 */
#define  GPIO_CRH_MODE9_1                    ((uint32)0x00000020)        /* Bit 1 */

#define  GPIO_CRH_MODE10                     ((uint32)0x00000300)        /* MODE10[1:0] bits (Port x mode bits, pin 10) */
#define  GPIO_CRH_MODE10_0                   ((uint32)0x00000100)        /* Bit 0 */
#define  GPIO_CRH_MODE10_1                   ((uint32)0x00000200)        /* Bit 1 */

#define  GPIO_CRH_MODE11                     ((uint32)0x00003000)        /* MODE11[1:0] bits (Port x mode bits, pin 11) */
#define  GPIO_CRH_MODE11_0                   ((uint32)0x00001000)        /* Bit 0 */
#define  GPIO_CRH_MODE11_1                   ((uint32)0x00002000)        /* Bit 1 */

#define  GPIO_CRH_MODE12                     ((uint32)0x00030000)        /* MODE12[1:0] bits (Port x mode bits, pin 12) */
#define  GPIO_CRH_MODE12_0                   ((uint32)0x00010000)        /* Bit 0 */
#define  GPIO_CRH_MODE12_1                   ((uint32)0x00020000)        /* Bit 1 */

#define  GPIO_CRH_MODE13                     ((uint32)0x00300000)        /* MODE13[1:0] bits (Port x mode bits, pin 13) */
#define  GPIO_CRH_MODE13_0                   ((uint32)0x00100000)        /* Bit 0 */
#define  GPIO_CRH_MODE13_1                   ((uint32)0x00200000)        /* Bit 1 */

#define  GPIO_CRH_MODE14                     ((uint32)0x03000000)        /* MODE14[1:0] bits (Port x mode bits, pin 14) */
#define  GPIO_CRH_MODE14_0                   ((uint32)0x01000000)        /* Bit 0 */
#define  GPIO_CRH_MODE14_1                   ((uint32)0x02000000)        /* Bit 1 */

#define  GPIO_CRH_MODE15                     ((uint32)0x30000000)        /* MODE15[1:0] bits (Port x mode bits, pin 15) */
#define  GPIO_CRH_MODE15_0                   ((uint32)0x10000000)        /* Bit 0 */
#define  GPIO_CRH_MODE15_1                   ((uint32)0x20000000)        /* Bit 1 */

#define  GPIO_CRH_CNF                        ((uint32)0xCCCCCCCC)        /* Port x configuration bits */

#define  GPIO_CRH_CNF8                       ((uint32)0x0000000C)        /* CNF8[1:0] bits (Port x configuration bits, pin 8) */
#define  GPIO_CRH_CNF8_0                     ((uint32)0x00000004)        /* Bit 0 */
#define  GPIO_CRH_CNF8_1                     ((uint32)0x00000008)        /* Bit 1 */

#define  GPIO_CRH_CNF9                       ((uint32)0x000000C0)        /* CNF9[1:0] bits (Port x configuration bits, pin 9) */
#define  GPIO_CRH_CNF9_0                     ((uint32)0x00000040)        /* Bit 0 */
#define  GPIO_CRH_CNF9_1                     ((uint32)0x00000080)        /* Bit 1 */

#define  GPIO_CRH_CNF10                      ((uint32)0x00000C00)        /* CNF10[1:0] bits (Port x configuration bits, pin 10) */
#define  GPIO_CRH_CNF10_0                    ((uint32)0x00000400)        /* Bit 0 */
#define  GPIO_CRH_CNF10_1                    ((uint32)0x00000800)        /* Bit 1 */

#define  GPIO_CRH_CNF11                      ((uint32)0x0000C000)        /* CNF11[1:0] bits (Port x configuration bits, pin 11) */
#define  GPIO_CRH_CNF11_0                    ((uint32)0x00004000)        /* Bit 0 */
#define  GPIO_CRH_CNF11_1                    ((uint32)0x00008000)        /* Bit 1 */

#define  GPIO_CRH_CNF12                      ((uint32)0x000C0000)        /* CNF12[1:0] bits (Port x configuration bits, pin 12) */
#define  GPIO_CRH_CNF12_0                    ((uint32)0x00040000)        /* Bit 0 */
#define  GPIO_CRH_CNF12_1                    ((uint32)0x00080000)        /* Bit 1 */

#define  GPIO_CRH_CNF13                      ((uint32)0x00C00000)        /* CNF13[1:0] bits (Port x configuration bits, pin 13) */
#define  GPIO_CRH_CNF13_0                    ((uint32)0x00400000)        /* Bit 0 */
#define  GPIO_CRH_CNF13_1                    ((uint32)0x00800000)        /* Bit 1 */

#define  GPIO_CRH_CNF14                      ((uint32)0x0C000000)        /* CNF14[1:0] bits (Port x configuration bits, pin 14) */
#define  GPIO_CRH_CNF14_0                    ((uint32)0x04000000)        /* Bit 0 */
#define  GPIO_CRH_CNF14_1                    ((uint32)0x08000000)        /* Bit 1 */

#define  GPIO_CRH_CNF15                      ((uint32)0xC0000000)        /* CNF15[1:0] bits (Port x configuration bits, pin 15) */
#define  GPIO_CRH_CNF15_0                    ((uint32)0x40000000)        /* Bit 0 */
#define  GPIO_CRH_CNF15_1                    ((uint32)0x80000000)        /* Bit 1 */

/*******************  Bit definition for GPIO_IDR register  *******************/
#define GPIO_IDR_IDR0                        ((uint16)0x0001)            /* Port input data, bit 0 */
#define GPIO_IDR_IDR1                        ((uint16)0x0002)            /* Port input data, bit 1 */
#define GPIO_IDR_IDR2                        ((uint16)0x0004)            /* Port input data, bit 2 */
#define GPIO_IDR_IDR3                        ((uint16)0x0008)            /* Port input data, bit 3 */
#define GPIO_IDR_IDR4                        ((uint16)0x0010)            /* Port input data, bit 4 */
#define GPIO_IDR_IDR5                        ((uint16)0x0020)            /* Port input data, bit 5 */
#define GPIO_IDR_IDR6                        ((uint16)0x0040)            /* Port input data, bit 6 */
#define GPIO_IDR_IDR7                        ((uint16)0x0080)            /* Port input data, bit 7 */
#define GPIO_IDR_IDR8                        ((uint16)0x0100)            /* Port input data, bit 8 */
#define GPIO_IDR_IDR9                        ((uint16)0x0200)            /* Port input data, bit 9 */
#define GPIO_IDR_IDR10                       ((uint16)0x0400)            /* Port input data, bit 10 */
#define GPIO_IDR_IDR11                       ((uint16)0x0800)            /* Port input data, bit 11 */
#define GPIO_IDR_IDR12                       ((uint16)0x1000)            /* Port input data, bit 12 */
#define GPIO_IDR_IDR13                       ((uint16)0x2000)            /* Port input data, bit 13 */
#define GPIO_IDR_IDR14                       ((uint16)0x4000)            /* Port input data, bit 14 */
#define GPIO_IDR_IDR15                       ((uint16)0x8000)            /* Port input data, bit 15 */

/*******************  Bit definition for GPIO_ODR register  *******************/
#define GPIO_ODR_ODR0                        ((uint16)0x0001)            /* Port output data, bit 0 */
#define GPIO_ODR_ODR1                        ((uint16)0x0002)            /* Port output data, bit 1 */
#define GPIO_ODR_ODR2                        ((uint16)0x0004)            /* Port output data, bit 2 */
#define GPIO_ODR_ODR3                        ((uint16)0x0008)            /* Port output data, bit 3 */
#define GPIO_ODR_ODR4                        ((uint16)0x0010)            /* Port output data, bit 4 */
#define GPIO_ODR_ODR5                        ((uint16)0x0020)            /* Port output data, bit 5 */
#define GPIO_ODR_ODR6                        ((uint16)0x0040)            /* Port output data, bit 6 */
#define GPIO_ODR_ODR7                        ((uint16)0x0080)            /* Port output data, bit 7 */
#define GPIO_ODR_ODR8                        ((uint16)0x0100)            /* Port output data, bit 8 */
#define GPIO_ODR_ODR9                        ((uint16)0x0200)            /* Port output data, bit 9 */
#define GPIO_ODR_ODR10                       ((uint16)0x0400)            /* Port output data, bit 10 */
#define GPIO_ODR_ODR11                       ((uint16)0x0800)            /* Port output data, bit 11 */
#define GPIO_ODR_ODR12                       ((uint16)0x1000)            /* Port output data, bit 12 */
#define GPIO_ODR_ODR13                       ((uint16)0x2000)            /* Port output data, bit 13 */
#define GPIO_ODR_ODR14                       ((uint16)0x4000)            /* Port output data, bit 14 */
#define GPIO_ODR_ODR15                       ((uint16)0x8000)            /* Port output data, bit 15 */

/******************  Bit definition for GPIO_BSRR register  *******************/
#define GPIO_BSRR_BS0                        ((uint32)0x00000001)        /* Port x Set bit 0 */
#define GPIO_BSRR_BS1                        ((uint32)0x00000002)        /* Port x Set bit 1 */
#define GPIO_BSRR_BS2                        ((uint32)0x00000004)        /* Port x Set bit 2 */
#define GPIO_BSRR_BS3                        ((uint32)0x00000008)        /* Port x Set bit 3 */
#define GPIO_BSRR_BS4                        ((uint32)0x00000010)        /* Port x Set bit 4 */
#define GPIO_BSRR_BS5                        ((uint32)0x00000020)        /* Port x Set bit 5 */
#define GPIO_BSRR_BS6                        ((uint32)0x00000040)        /* Port x Set bit 6 */
#define GPIO_BSRR_BS7                        ((uint32)0x00000080)        /* Port x Set bit 7 */
#define GPIO_BSRR_BS8                        ((uint32)0x00000100)        /* Port x Set bit 8 */
#define GPIO_BSRR_BS9                        ((uint32)0x00000200)        /* Port x Set bit 9 */
#define GPIO_BSRR_BS10                       ((uint32)0x00000400)        /* Port x Set bit 10 */
#define GPIO_BSRR_BS11                       ((uint32)0x00000800)        /* Port x Set bit 11 */
#define GPIO_BSRR_BS12                       ((uint32)0x00001000)        /* Port x Set bit 12 */
#define GPIO_BSRR_BS13                       ((uint32)0x00002000)        /* Port x Set bit 13 */
#define GPIO_BSRR_BS14                       ((uint32)0x00004000)        /* Port x Set bit 14 */
#define GPIO_BSRR_BS15                       ((uint32)0x00008000)        /* Port x Set bit 15 */

#define GPIO_BSRR_BR0                        ((uint32)0x00010000)        /* Port x Reset bit 0 */
#define GPIO_BSRR_BR1                        ((uint32)0x00020000)        /* Port x Reset bit 1 */
#define GPIO_BSRR_BR2                        ((uint32)0x00040000)        /* Port x Reset bit 2 */
#define GPIO_BSRR_BR3                        ((uint32)0x00080000)        /* Port x Reset bit 3 */
#define GPIO_BSRR_BR4                        ((uint32)0x00100000)        /* Port x Reset bit 4 */
#define GPIO_BSRR_BR5                        ((uint32)0x00200000)        /* Port x Reset bit 5 */
#define GPIO_BSRR_BR6                        ((uint32)0x00400000)        /* Port x Reset bit 6 */
#define GPIO_BSRR_BR7                        ((uint32)0x00800000)        /* Port x Reset bit 7 */
#define GPIO_BSRR_BR8                        ((uint32)0x01000000)        /* Port x Reset bit 8 */
#define GPIO_BSRR_BR9                        ((uint32)0x02000000)        /* Port x Reset bit 9 */
#define GPIO_BSRR_BR10                       ((uint32)0x04000000)        /* Port x Reset bit 10 */
#define GPIO_BSRR_BR11                       ((uint32)0x08000000)        /* Port x Reset bit 11 */
#define GPIO_BSRR_BR12                       ((uint32)0x10000000)        /* Port x Reset bit 12 */
#define GPIO_BSRR_BR13                       ((uint32)0x20000000)        /* Port x Reset bit 13 */
#define GPIO_BSRR_BR14                       ((uint32)0x40000000)        /* Port x Reset bit 14 */
#define GPIO_BSRR_BR15                       ((uint32)0x80000000)        /* Port x Reset bit 15 */

/*******************  Bit definition for GPIO_BRR register  *******************/
#define GPIO_BRR_BR0                         ((uint16)0x0001)            /* Port x Reset bit 0 */
#define GPIO_BRR_BR1                         ((uint16)0x0002)            /* Port x Reset bit 1 */
#define GPIO_BRR_BR2                         ((uint16)0x0004)            /* Port x Reset bit 2 */
#define GPIO_BRR_BR3                         ((uint16)0x0008)            /* Port x Reset bit 3 */
#define GPIO_BRR_BR4                         ((uint16)0x0010)            /* Port x Reset bit 4 */
#define GPIO_BRR_BR5                         ((uint16)0x0020)            /* Port x Reset bit 5 */
#define GPIO_BRR_BR6                         ((uint16)0x0040)            /* Port x Reset bit 6 */
#define GPIO_BRR_BR7                         ((uint16)0x0080)            /* Port x Reset bit 7 */
#define GPIO_BRR_BR8                         ((uint16)0x0100)            /* Port x Reset bit 8 */
#define GPIO_BRR_BR9                         ((uint16)0x0200)            /* Port x Reset bit 9 */
#define GPIO_BRR_BR10                        ((uint16)0x0400)            /* Port x Reset bit 10 */
#define GPIO_BRR_BR11                        ((uint16)0x0800)            /* Port x Reset bit 11 */
#define GPIO_BRR_BR12                        ((uint16)0x1000)            /* Port x Reset bit 12 */
#define GPIO_BRR_BR13                        ((uint16)0x2000)            /* Port x Reset bit 13 */
#define GPIO_BRR_BR14                        ((uint16)0x4000)            /* Port x Reset bit 14 */
#define GPIO_BRR_BR15                        ((uint16)0x8000)            /* Port x Reset bit 15 */

/******************  Bit definition for GPIO_LCKR register  *******************/
#define GPIO_LCKR_LCK0                       ((uint32)0x00000001)        /* Port x Lock bit 0 */
#define GPIO_LCKR_LCK1                       ((uint32)0x00000002)        /* Port x Lock bit 1 */
#define GPIO_LCKR_LCK2                       ((uint32)0x00000004)        /* Port x Lock bit 2 */
#define GPIO_LCKR_LCK3                       ((uint32)0x00000008)        /* Port x Lock bit 3 */
#define GPIO_LCKR_LCK4                       ((uint32)0x00000010)        /* Port x Lock bit 4 */
#define GPIO_LCKR_LCK5                       ((uint32)0x00000020)        /* Port x Lock bit 5 */
#define GPIO_LCKR_LCK6                       ((uint32)0x00000040)        /* Port x Lock bit 6 */
#define GPIO_LCKR_LCK7                       ((uint32)0x00000080)        /* Port x Lock bit 7 */
#define GPIO_LCKR_LCK8                       ((uint32)0x00000100)        /* Port x Lock bit 8 */
#define GPIO_LCKR_LCK9                       ((uint32)0x00000200)        /* Port x Lock bit 9 */
#define GPIO_LCKR_LCK10                      ((uint32)0x00000400)        /* Port x Lock bit 10 */
#define GPIO_LCKR_LCK11                      ((uint32)0x00000800)        /* Port x Lock bit 11 */
#define GPIO_LCKR_LCK12                      ((uint32)0x00001000)        /* Port x Lock bit 12 */
#define GPIO_LCKR_LCK13                      ((uint32)0x00002000)        /* Port x Lock bit 13 */
#define GPIO_LCKR_LCK14                      ((uint32)0x00004000)        /* Port x Lock bit 14 */
#define GPIO_LCKR_LCK15                      ((uint32)0x00008000)        /* Port x Lock bit 15 */
#define GPIO_LCKR_LCKK                       ((uint32)0x00010000)        /* Lock key */

/*----------------------------------------------------------------------------*/
#endif /* STM32F103CXX_H_ */
