################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Utilities/Fonts/font12.c \
../Drivers/Utilities/Fonts/font16.c \
../Drivers/Utilities/Fonts/font20.c \
../Drivers/Utilities/Fonts/font24.c \
../Drivers/Utilities/Fonts/font8.c 

OBJS += \
./Drivers/Utilities/Fonts/font12.o \
./Drivers/Utilities/Fonts/font16.o \
./Drivers/Utilities/Fonts/font20.o \
./Drivers/Utilities/Fonts/font24.o \
./Drivers/Utilities/Fonts/font8.o 

C_DEPS += \
./Drivers/Utilities/Fonts/font12.d \
./Drivers/Utilities/Fonts/font16.d \
./Drivers/Utilities/Fonts/font20.d \
./Drivers/Utilities/Fonts/font24.d \
./Drivers/Utilities/Fonts/font8.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Utilities/Fonts/font12.o: ../Drivers/Utilities/Fonts/font12.c Drivers/Utilities/Fonts/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"/Users/Victor/STM32CubeIDE/workspace_1.6.0/TEST/Drivers/BSP/inc" -I"/Users/Victor/STM32CubeIDE/workspace_1.6.0/TEST/Drivers/Utilities/Fonts" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Utilities/Fonts/font12.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Utilities/Fonts/font16.o: ../Drivers/Utilities/Fonts/font16.c Drivers/Utilities/Fonts/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"/Users/Victor/STM32CubeIDE/workspace_1.6.0/TEST/Drivers/BSP/inc" -I"/Users/Victor/STM32CubeIDE/workspace_1.6.0/TEST/Drivers/Utilities/Fonts" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Utilities/Fonts/font16.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Utilities/Fonts/font20.o: ../Drivers/Utilities/Fonts/font20.c Drivers/Utilities/Fonts/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"/Users/Victor/STM32CubeIDE/workspace_1.6.0/TEST/Drivers/BSP/inc" -I"/Users/Victor/STM32CubeIDE/workspace_1.6.0/TEST/Drivers/Utilities/Fonts" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Utilities/Fonts/font20.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Utilities/Fonts/font24.o: ../Drivers/Utilities/Fonts/font24.c Drivers/Utilities/Fonts/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"/Users/Victor/STM32CubeIDE/workspace_1.6.0/TEST/Drivers/BSP/inc" -I"/Users/Victor/STM32CubeIDE/workspace_1.6.0/TEST/Drivers/Utilities/Fonts" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Utilities/Fonts/font24.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/Utilities/Fonts/font8.o: ../Drivers/Utilities/Fonts/font8.c Drivers/Utilities/Fonts/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F746xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"/Users/Victor/STM32CubeIDE/workspace_1.6.0/TEST/Drivers/BSP/inc" -I"/Users/Victor/STM32CubeIDE/workspace_1.6.0/TEST/Drivers/Utilities/Fonts" -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/Utilities/Fonts/font8.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

