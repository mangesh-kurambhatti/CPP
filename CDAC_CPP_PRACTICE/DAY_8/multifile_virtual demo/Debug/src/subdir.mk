################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/main.cpp \
../src/multifile_virtual\ demo.cpp 

OBJS += \
./src/main.o \
./src/multifile_virtual\ demo.o 

CPP_DEPS += \
./src/main.d \
./src/multifile_virtual\ demo.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/multifile_virtual\ demo.o: ../src/multifile_virtual\ demo.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/multifile_virtual demo.d" -MT"src/multifile_virtual\ demo.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


