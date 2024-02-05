################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Dio/Dio.c 

OBJS += \
./Dio/Dio.o 

C_DEPS += \
./Dio/Dio.d 


# Each subdirectory must supply rules for building sources it contributes
Dio/%.o Dio/%.su Dio/%.cyclo: ../Dio/%.c Dio/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -c -I"C:/01_Rak_Embd/Embedded-C/My_Workspace/target/STM32Fxxxx_AUTOSAR_MCAL_GIT/MCAL/Inc" -I"C:/01_Rak_Embd/Embedded-C/My_Workspace/target/STM32Fxxxx_AUTOSAR_MCAL_GIT/MCAL/HW_Drivers" -I"C:/01_Rak_Embd/Embedded-C/My_Workspace/target/STM32Fxxxx_AUTOSAR_MCAL_GIT/MCAL/HW_Drivers/GPIO" -I"C:/01_Rak_Embd/Embedded-C/My_Workspace/target/STM32Fxxxx_AUTOSAR_MCAL_GIT/MCAL/Dio" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Dio

clean-Dio:
	-$(RM) ./Dio/Dio.cyclo ./Dio/Dio.d ./Dio/Dio.o ./Dio/Dio.su

.PHONY: clean-Dio

