################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HW_Drivers/STM32F103Cxx_gpio.c 

OBJS += \
./HW_Drivers/STM32F103Cxx_gpio.o 

C_DEPS += \
./HW_Drivers/STM32F103Cxx_gpio.d 


# Each subdirectory must supply rules for building sources it contributes
HW_Drivers/%.o HW_Drivers/%.su HW_Drivers/%.cyclo: ../HW_Drivers/%.c HW_Drivers/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C8Tx -c -I../Inc -I"C:/01_Rak_Embd/Embedded-C/My_Workspace/target/STM32Fxxxx_AUTOSAR_MCAL_GIT/MCAL/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HW_Drivers

clean-HW_Drivers:
	-$(RM) ./HW_Drivers/STM32F103Cxx_gpio.cyclo ./HW_Drivers/STM32F103Cxx_gpio.d ./HW_Drivers/STM32F103Cxx_gpio.o ./HW_Drivers/STM32F103Cxx_gpio.su

.PHONY: clean-HW_Drivers

