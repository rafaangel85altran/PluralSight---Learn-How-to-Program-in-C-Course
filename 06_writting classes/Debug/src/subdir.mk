################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/06_writting\ classes.cpp 

OBJS += \
./src/06_writting\ classes.o 

CPP_DEPS += \
./src/06_writting\ classes.d 


# Each subdirectory must supply rules for building sources it contributes
src/06_writting\ classes.o: ../src/06_writting\ classes.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/06_writting classes.d" -MT"src/06_writting\ classes.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


