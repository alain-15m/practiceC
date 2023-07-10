################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Calcul.c \
../address.c \
../book.c \
../jan2.c \
../now.c 

C_DEPS += \
./Calcul.d \
./address.d \
./book.d \
./jan2.d \
./now.d 

OBJS += \
./Calcul.o \
./address.o \
./book.o \
./jan2.o \
./now.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Calcul.d ./Calcul.o ./address.d ./address.o ./book.d ./book.o ./jan2.d ./jan2.o ./now.d ./now.o

.PHONY: clean--2e-

