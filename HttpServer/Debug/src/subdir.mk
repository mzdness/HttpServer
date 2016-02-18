################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/HttpServer.o \
../src/tcp_server.o 

CPP_SRCS += \
../src/HttpServer.cpp \
../src/tcp_server.cpp 

OBJS += \
./src/HttpServer.o \
./src/tcp_server.o 

CPP_DEPS += \
./src/HttpServer.d \
./src/tcp_server.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


