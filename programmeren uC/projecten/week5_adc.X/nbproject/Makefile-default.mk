#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=null
FINAL_IMAGE=${DISTDIR}/week5_adc.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=null
FINAL_IMAGE=${DISTDIR}/week5_adc.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=mcc_generated_files/adc/src/adc0.c mcc_generated_files/evsys/src/evsys.c mcc_generated_files/system/src/interrupt.c mcc_generated_files/system/src/config_bits.c mcc_generated_files/system/src/clock.c mcc_generated_files/system/src/system.c mcc_generated_files/system/src/pins.c mcc_generated_files/system/src/protected_io.S mcc_generated_files/timer/src/rtc.c mcc_generated_files/uart/src/usart3.c mcc_generated_files/vref/src/vref.c main.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/mcc_generated_files/adc/src/adc0.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/clock.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/system.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/pins.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.${OUTPUT_EXTENSION_S} ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/uart/src/usart3.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/vref/src/vref.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/main.${OUTPUT_EXTENSION_C}
POSSIBLE_DEPFILES=${OBJECTDIR}/mcc_generated_files/adc/src/adc0.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/mcc_generated_files/system/src/clock.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/mcc_generated_files/system/src/system.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/mcc_generated_files/system/src/pins.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.${OUTPUT_EXTENSION_S}.d ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/mcc_generated_files/uart/src/usart3.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/mcc_generated_files/vref/src/vref.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/main.${OUTPUT_EXTENSION_C}.d

# Object Files
OBJECTFILES=${OBJECTDIR}/mcc_generated_files/adc/src/adc0.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/clock.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/system.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/pins.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/system/src/protected_io.${OUTPUT_EXTENSION_S} ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/uart/src/usart3.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/mcc_generated_files/vref/src/vref.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/main.${OUTPUT_EXTENSION_C}

# Source Files
SOURCEFILES=mcc_generated_files/adc/src/adc0.c mcc_generated_files/evsys/src/evsys.c mcc_generated_files/system/src/interrupt.c mcc_generated_files/system/src/config_bits.c mcc_generated_files/system/src/clock.c mcc_generated_files/system/src/system.c mcc_generated_files/system/src/pins.c mcc_generated_files/system/src/protected_io.S mcc_generated_files/timer/src/rtc.c mcc_generated_files/uart/src/usart3.c mcc_generated_files/vref/src/vref.c main.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/week5_adc.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/mcc_generated_files/adc/src/adc0.${OUTPUT_EXTENSION_C}: mcc_generated_files/adc/src/adc0.c  .generated_files/flags/default/e0d1b2b984cda9be314a1042c3fde53143b82c4c .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/adc/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/adc/src/adc0.c 
	
${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.${OUTPUT_EXTENSION_C}: mcc_generated_files/evsys/src/evsys.c  .generated_files/flags/default/f1f75a72807eee2403e58ffaf982f1f5a5d23c76 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/evsys/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/evsys/src/evsys.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/interrupt.${OUTPUT_EXTENSION_C}: mcc_generated_files/system/src/interrupt.c  .generated_files/flags/default/535c06def16d4feebac925e8bfbd2bca530f8a73 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/system/src/interrupt.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/config_bits.${OUTPUT_EXTENSION_C}: mcc_generated_files/system/src/config_bits.c  .generated_files/flags/default/6ad7fc249e25693b2012eb3a6abb04dff3a9cc5a .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/system/src/config_bits.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/clock.${OUTPUT_EXTENSION_C}: mcc_generated_files/system/src/clock.c  .generated_files/flags/default/5f735bb651e3aedc490941273e37e016c73927b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/clock.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/clock.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/system/src/clock.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/system.${OUTPUT_EXTENSION_C}: mcc_generated_files/system/src/system.c  .generated_files/flags/default/f82c4258fdcf9c711ade00bb3fa00e7111948669 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/system.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/system.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/system/src/system.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/pins.${OUTPUT_EXTENSION_C}: mcc_generated_files/system/src/pins.c  .generated_files/flags/default/60a21ed9a577f58411ccbbf71e36a93896208a89 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/pins.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/pins.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/system/src/pins.c 
	
${OBJECTDIR}/mcc_generated_files/timer/src/rtc.${OUTPUT_EXTENSION_C}: mcc_generated_files/timer/src/rtc.c  .generated_files/flags/default/45dbd1c3edb55a0287ecceda9226215eeedfe4ba .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/timer/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/timer/src/rtc.c 
	
${OBJECTDIR}/mcc_generated_files/uart/src/usart3.${OUTPUT_EXTENSION_C}: mcc_generated_files/uart/src/usart3.c  .generated_files/flags/default/a9b1d3c5e106e0726b783aa78a1e59764529fc8 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/uart/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart3.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart3.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/uart/src/usart3.c 
	
${OBJECTDIR}/mcc_generated_files/vref/src/vref.${OUTPUT_EXTENSION_C}: mcc_generated_files/vref/src/vref.c  .generated_files/flags/default/9991192ccaf26ddd0416f97672cdc0c665fef35e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/vref/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/vref/src/vref.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/vref/src/vref.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/vref/src/vref.c 
	
${OBJECTDIR}/main.${OUTPUT_EXTENSION_C}: main.c  .generated_files/flags/default/989cb6f284496d20d67a1597d7a5531fd4c082d6 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/main.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    main.c 
	
else
${OBJECTDIR}/mcc_generated_files/adc/src/adc0.${OUTPUT_EXTENSION_C}: mcc_generated_files/adc/src/adc0.c  .generated_files/flags/default/77f89a68b61acf19e5ff7a7b1d597e92be6df91b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/adc/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/adc/src/adc0.${OUTPUT_EXTENSION_C} 
	   -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/adc/src/adc0.c 
	
${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.${OUTPUT_EXTENSION_C}: mcc_generated_files/evsys/src/evsys.c  .generated_files/flags/default/b98b8b41fa7f47d433c87d4141009fa9e3bf18dc .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/evsys/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/evsys/src/evsys.${OUTPUT_EXTENSION_C} 
	   -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/evsys/src/evsys.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/interrupt.${OUTPUT_EXTENSION_C}: mcc_generated_files/system/src/interrupt.c  .generated_files/flags/default/680e6ed9cc0d9ab4c625f722c07de068840ab12e .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/interrupt.${OUTPUT_EXTENSION_C} 
	   -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/system/src/interrupt.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/config_bits.${OUTPUT_EXTENSION_C}: mcc_generated_files/system/src/config_bits.c  .generated_files/flags/default/ae38ca83ccb9f0564934082ea069a6d57d3cf31b .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/config_bits.${OUTPUT_EXTENSION_C} 
	   -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/system/src/config_bits.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/clock.${OUTPUT_EXTENSION_C}: mcc_generated_files/system/src/clock.c  .generated_files/flags/default/ba0f9c75ce227695a6ae231e647c333811601305 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/clock.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/clock.${OUTPUT_EXTENSION_C} 
	   -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/system/src/clock.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/system.${OUTPUT_EXTENSION_C}: mcc_generated_files/system/src/system.c  .generated_files/flags/default/6c40008f2b8140e5e5a1ea2037caa43f92901e89 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/system.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/system.${OUTPUT_EXTENSION_C} 
	   -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/system/src/system.c 
	
${OBJECTDIR}/mcc_generated_files/system/src/pins.${OUTPUT_EXTENSION_C}: mcc_generated_files/system/src/pins.c  .generated_files/flags/default/af28fbcc9d166f059d3c98357cafcf2feddcda06 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/system/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/pins.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/system/src/pins.${OUTPUT_EXTENSION_C} 
	   -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/system/src/pins.c 
	
${OBJECTDIR}/mcc_generated_files/timer/src/rtc.${OUTPUT_EXTENSION_C}: mcc_generated_files/timer/src/rtc.c  .generated_files/flags/default/78c142743c8c29c180e04aaed5cc923603c6ec20 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/timer/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/timer/src/rtc.${OUTPUT_EXTENSION_C} 
	   -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/timer/src/rtc.c 
	
${OBJECTDIR}/mcc_generated_files/uart/src/usart3.${OUTPUT_EXTENSION_C}: mcc_generated_files/uart/src/usart3.c  .generated_files/flags/default/776225132031bb080ba84bcf1c0a2bc6fd8eb080 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/uart/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart3.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/uart/src/usart3.${OUTPUT_EXTENSION_C} 
	   -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/uart/src/usart3.c 
	
${OBJECTDIR}/mcc_generated_files/vref/src/vref.${OUTPUT_EXTENSION_C}: mcc_generated_files/vref/src/vref.c  .generated_files/flags/default/bfa47214f6c604f73e736212da947aed9eecee31 .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/mcc_generated_files/vref/src" 
	@${RM} ${OBJECTDIR}/mcc_generated_files/vref/src/vref.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/mcc_generated_files/vref/src/vref.${OUTPUT_EXTENSION_C} 
	   -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    mcc_generated_files/vref/src/vref.c 
	
${OBJECTDIR}/main.${OUTPUT_EXTENSION_C}: main.c  .generated_files/flags/default/87d042c6f1178080540637677fa63a188bbae61d .generated_files/flags/default/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/main.${OUTPUT_EXTENSION_C} 
	   -fshort-double -fshort-float ${code-model-external.prefix}wordwrite -O1 ${optimization-options.prefix}+asm${optimization-options.separator}${optimization-assembler-files.true}${optimization-options.separator}-speed,+space${optimization-options.separator}${optimization-debug.false}${optimization-options.separator}${local-generation.false} ${what-to-do.prefix}ignore --mode=free ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.false}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    main.c 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(wildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
