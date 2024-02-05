/*
 * STM32F103Cxx_gpio.h
 *
 *  Created on: Feb 5, 2024
 *      Author: Rakshith Guruswamy
 */

#ifndef STM32F103CXX_GPIO_H_
#define STM32F103CXX_GPIO_H_

#include "Platform_Types.h"
#include "STM32F103Cxx.h"


typedef enum
{
  GPIO_Speed_10MHz = 1,
  GPIO_Speed_2MHz,
  GPIO_Speed_50MHz
}GPIOSpeed_TypeDef;

typedef enum
{ GPIO_Mode_AIN = 0x0,
  GPIO_Mode_IN_FLOATING = 0x04,
  GPIO_Mode_IPD = 0x28,
  GPIO_Mode_IPU = 0x48,
  GPIO_Mode_Out_OD = 0x14,
  GPIO_Mode_Out_PP = 0x10,
  GPIO_Mode_AF_OD = 0x1C,
  GPIO_Mode_AF_PP = 0x18
}GPIOMode_TypeDef;

#define IS_GPIO_PERIPH_VALID(PERIPH) (((PERIPH) == GPIOA) || \
                                      ((PERIPH) == GPIOB) || \
                                      ((PERIPH) == GPIOC) || \
                                      ((PERIPH) == GPIOD) || \
                                      ((PERIPH) == GPIOE) || \
                                      ((PERIPH) == GPIOF) || \
                                      ((PERIPH) == GPIOG))

#define IS_GPIO_SPEED(SPEED)         (((SPEED) == GPIO_Speed_10MHz) || ((SPEED) == GPIO_Speed_2MHz) || \
                                      ((SPEED) == GPIO_Speed_50MHz))

#define IS_GPIO_MODE(MODE)           (((MODE) == GPIO_Mode_AIN) || ((MODE) == GPIO_Mode_IN_FLOATING) || \
                                      ((MODE) == GPIO_Mode_IPD) || ((MODE) == GPIO_Mode_IPU) || \
                                      ((MODE) == GPIO_Mode_Out_OD) || ((MODE) == GPIO_Mode_Out_PP) || \
                                      ((MODE) == GPIO_Mode_AF_OD) || ((MODE) == GPIO_Mode_AF_PP))


typedef struct
{
  uint16 GPIO_Pin;             /*!< Specifies the GPIO pins to be configured.
                                      This parameter can be any value of @ref GPIO_pins_define */

  GPIOSpeed_TypeDef GPIO_Speed;  /*!< Specifies the speed for the selected pins.
                                      This parameter can be a value of @ref GPIOSpeed_TypeDef */

  GPIOMode_TypeDef GPIO_Mode;    /*!< Specifies the operating mode for the selected pins.
                                      This parameter can be a value of @ref GPIOMode_TypeDef */
}GPIO_InitTypeDef;

typedef enum
{ Bit_RESET = 0,
  Bit_SET
}BitAction;

#define IS_GPIO_BIT_ACTION(ACTION) (((ACTION) == Bit_RESET) || ((ACTION) == Bit_SET))

#define GPIO_Pin_0                 ((uint16)0x0001)  /*!< Pin 0 selected */
#define GPIO_Pin_1                 ((uint16)0x0002)  /*!< Pin 1 selected */
#define GPIO_Pin_2                 ((uint16)0x0004)  /*!< Pin 2 selected */
#define GPIO_Pin_3                 ((uint16)0x0008)  /*!< Pin 3 selected */
#define GPIO_Pin_4                 ((uint16)0x0010)  /*!< Pin 4 selected */
#define GPIO_Pin_5                 ((uint16)0x0020)  /*!< Pin 5 selected */
#define GPIO_Pin_6                 ((uint16)0x0040)  /*!< Pin 6 selected */
#define GPIO_Pin_7                 ((uint16)0x0080)  /*!< Pin 7 selected */
#define GPIO_Pin_8                 ((uint16)0x0100)  /*!< Pin 8 selected */
#define GPIO_Pin_9                 ((uint16)0x0200)  /*!< Pin 9 selected */
#define GPIO_Pin_10                ((uint16)0x0400)  /*!< Pin 10 selected */
#define GPIO_Pin_11                ((uint16)0x0800)  /*!< Pin 11 selected */
#define GPIO_Pin_12                ((uint16)0x1000)  /*!< Pin 12 selected */
#define GPIO_Pin_13                ((uint16)0x2000)  /*!< Pin 13 selected */
#define GPIO_Pin_14                ((uint16)0x4000)  /*!< Pin 14 selected */
#define GPIO_Pin_15                ((uint16)0x8000)  /*!< Pin 15 selected */
#define GPIO_Pin_All               ((uint16)0xFFFF)  /*!< All pins selected */

#define IS_GPIO_PIN_VALID(PIN) ((((PIN) & (uint16)0x00) == 0x00) && ((PIN) != (uint16)0x00))

#define GET_GPIO_PIN(PIN)    (((PIN) == GPIO_Pin_0)  || \
                              ((PIN) == GPIO_Pin_1)  || \
                              ((PIN) == GPIO_Pin_2)  || \
                              ((PIN) == GPIO_Pin_3)  || \
                              ((PIN) == GPIO_Pin_4)  || \
                              ((PIN) == GPIO_Pin_5)  || \
                              ((PIN) == GPIO_Pin_6)  || \
                              ((PIN) == GPIO_Pin_7)  || \
                              ((PIN) == GPIO_Pin_8)  || \
                              ((PIN) == GPIO_Pin_9)  || \
                              ((PIN) == GPIO_Pin_10) || \
                              ((PIN) == GPIO_Pin_11) || \
                              ((PIN) == GPIO_Pin_12) || \
                              ((PIN) == GPIO_Pin_13) || \
                              ((PIN) == GPIO_Pin_14) || \
                              ((PIN) == GPIO_Pin_15))

//void GPIO_DeInit(GPIO_TypeDef* GPIOx);
//void GPIO_AFIODeInit(void);
//void GPIO_Init(GPIO_TypeDef* GPIOx, GPIO_InitTypeDef* GPIO_InitStruct);
//void GPIO_StructInit(GPIO_InitTypeDef* GPIO_InitStruct);
//uint8_t GPIO_ReadInputDataBit(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
uint16 GPIO_ReadInputData(GPIO_ts* GPIOx);
//uint8_t GPIO_ReadOutputDataBit(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
uint16 GPIO_ReadOutputData(GPIO_ts* GPIOx);
//void GPIO_SetBits(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
//void GPIO_ResetBits(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
//void GPIO_WriteBit(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, BitAction BitVal);
void GPIO_Write(GPIO_ts* GPIOx, uint16 PortVal);

#endif /* STM32F103CXX_GPIO_H_ */
