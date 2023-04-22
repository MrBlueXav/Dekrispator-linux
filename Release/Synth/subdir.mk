################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Synth/MIDI_application.c \
../Synth/adsr.c \
../Synth/blepvco.c \
../Synth/chorusFD.c \
../Synth/delay.c \
../Synth/drifter.c \
../Synth/main.c \
../Synth/math_tools.c \
../Synth/minblep_tables.c \
../Synth/notesTables.c \
../Synth/oscillators.c \
../Synth/phaser.c \
../Synth/random.c \
../Synth/resonantFilter.c \
../Synth/sequencer.c \
../Synth/soundGen.c 

C_DEPS += \
./Synth/MIDI_application.d \
./Synth/adsr.d \
./Synth/blepvco.d \
./Synth/chorusFD.d \
./Synth/delay.d \
./Synth/drifter.d \
./Synth/main.d \
./Synth/math_tools.d \
./Synth/minblep_tables.d \
./Synth/notesTables.d \
./Synth/oscillators.d \
./Synth/phaser.d \
./Synth/random.d \
./Synth/resonantFilter.d \
./Synth/sequencer.d \
./Synth/soundGen.d 

OBJS += \
./Synth/MIDI_application.o \
./Synth/adsr.o \
./Synth/blepvco.o \
./Synth/chorusFD.o \
./Synth/delay.o \
./Synth/drifter.o \
./Synth/main.o \
./Synth/math_tools.o \
./Synth/minblep_tables.o \
./Synth/notesTables.o \
./Synth/oscillators.o \
./Synth/phaser.o \
./Synth/random.o \
./Synth/resonantFilter.o \
./Synth/sequencer.o \
./Synth/soundGen.o 


# Each subdirectory must supply rules for building sources it contributes
Synth/%.o: ../Synth/%.c Synth/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -std=c11 -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-Synth

clean-Synth:
	-$(RM) ./Synth/MIDI_application.d ./Synth/MIDI_application.o ./Synth/adsr.d ./Synth/adsr.o ./Synth/blepvco.d ./Synth/blepvco.o ./Synth/chorusFD.d ./Synth/chorusFD.o ./Synth/delay.d ./Synth/delay.o ./Synth/drifter.d ./Synth/drifter.o ./Synth/main.d ./Synth/main.o ./Synth/math_tools.d ./Synth/math_tools.o ./Synth/minblep_tables.d ./Synth/minblep_tables.o ./Synth/notesTables.d ./Synth/notesTables.o ./Synth/oscillators.d ./Synth/oscillators.o ./Synth/phaser.d ./Synth/phaser.o ./Synth/random.d ./Synth/random.o ./Synth/resonantFilter.d ./Synth/resonantFilter.o ./Synth/sequencer.d ./Synth/sequencer.o ./Synth/soundGen.d ./Synth/soundGen.o

.PHONY: clean-Synth

