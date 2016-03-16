################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/libevent_test.o 

CPP_SRCS += \
../src/conn.cpp \
../src/libevent_test_new.cpp \
../src/work.cpp 

OBJS += \
./src/conn.o \
./src/libevent_test_new.o \
./src/work.o 

CPP_DEPS += \
./src/conn.d \
./src/libevent_test_new.d \
./src/work.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


