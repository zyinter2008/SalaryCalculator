################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/salarycalculator.cpp \
../src/salarycalculatortest.cpp 

OBJS += \
./src/salarycalculator.o \
./src/salarycalculatortest.o 

CPP_DEPS += \
./src/salarycalculator.d \
./src/salarycalculatortest.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/Users/zyin/Desktop/CodeProjects/C++/SalaryCalculator/gmock/include" -I"/Users/zyin/Desktop/CodeProjects/C++/SalaryCalculator/gtest/include" -I"/Users/zyin/Desktop/CodeProjects/C++/SalaryCalculator/gmock/src" -I"/Users/zyin/Desktop/CodeProjects/C++/SalaryCalculator/gtest/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


