################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../command.cpp \
../forward.cpp \
../jump.cpp \
../left.cpp \
../main.cpp \
../program.cpp \
../repeat.cpp \
../right.cpp 

O_SRCS += \
../command.o \
../forward.o \
../jump.o \
../left.o \
../main.o \
../program.o \
../repeat.o \
../right.o 

OBJS += \
./command.o \
./forward.o \
./jump.o \
./left.o \
./main.o \
./program.o \
./repeat.o \
./right.o 

CPP_DEPS += \
./command.d \
./forward.d \
./jump.d \
./left.d \
./main.d \
./program.d \
./repeat.d \
./right.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


