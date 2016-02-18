################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/SocketTest.o \
../src/SocketTestClient.o \
../src/tcp_client.o 

CPP_SRCS += \
../src/SocketTestClient.cpp \
../src/tcp_client.cpp 

OBJS += \
./src/SocketTestClient.o \
./src/tcp_client.o 

CPP_DEPS += \
./src/SocketTestClient.d \
./src/tcp_client.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


