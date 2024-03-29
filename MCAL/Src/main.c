/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include "HW_Dependent_header.h"
#include "Dio.h"

int main(void)
{

  RCC->APB2ENR |=  RCC_APB2ENR_IOPCEN;
  GPIOC->CRH   &= ~0xF00000;
  GPIOC->CRH   |=  0x100000;
  Dio_ChannelType LightPin = (Dio_ChannelType)45;
	while(1)
	{
	(void) Dio_WriteChannel( LightPin, STD_HIGH);
	for(uint32 i=0 ; i < 300000 ; i++ );
	for(uint32 i=0 ; i < 300000 ; i++ );
	for(uint32 i=0 ; i < 300000 ; i++ );
	(void) Dio_WriteChannel( LightPin, STD_LOW);
	for(uint32 i=0 ; i < 300000 ; i++ );
	for(uint32 i=0 ; i < 300000 ; i++ );
	for(uint32 i=0 ; i < 300000 ; i++ );
	(void) Dio_WriteChannel( LightPin, STD_HIGH);
	for(uint32 i=0 ; i < 300000 ; i++ );
	(void) Dio_WriteChannel( LightPin, STD_LOW);
	for(uint32 i=0 ; i < 300000 ; i++ );

	}
}
