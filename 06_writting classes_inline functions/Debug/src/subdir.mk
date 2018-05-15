################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/06_writting\ classes_inline\ functions.cpp \
../src/Account.cpp \
../src/Transaction.cpp 

OBJS += \
./src/06_writting\ classes_inline\ functions.o \
./src/Account.o \
./src/Transaction.o 

CPP_DEPS += \
./src/06_writting\ classes_inline\ functions.d \
./src/Account.d \
./src/Transaction.d 


# Each subdirectory must supply rules for building sources it contributes
src/06_writting\ classes_inline\ functions.o: ../src/06_writting\ classes_inline\ functions.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/06_writting classes_inline functions.d" -MT"src/06_writting\ classes_inline\ functions.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


