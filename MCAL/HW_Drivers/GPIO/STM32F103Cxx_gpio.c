/*
 * STM32F103Cxx_gpio.c
 *
 *  Created on: Feb 5, 2024
 *      Author: Rakshith Guruswamy
 */


#include "STM32F103Cxx_gpio.h"


uint16 GPIO_ReadInputData(GPIO_ts* GPIOx)
{
  /* Check the parameters */
  assert_param(IS_GPIO_ALL_PERIPH(GPIOx));

  return ((uint16)GPIOx->IDR);
}





uint16 GPIO_ReadOutputData(GPIO_ts* GPIOx)
{
  /* Check the parameters */
  assert_param(IS_GPIO_ALL_PERIPH(GPIOx));

  return ((uint16)GPIOx->ODR);
}




void GPIO_Write(GPIO_ts* GPIOx, uint16 PortVal)
{
  /* Check the parameters */
  assert_param(IS_GPIO_ALL_PERIPH(GPIOx));

  GPIOx->ODR = PortVal;
}
