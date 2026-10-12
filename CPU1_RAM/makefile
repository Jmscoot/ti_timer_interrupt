################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs2051/ccs/tools/compiler/ti-cgt-c2000_25.11.0.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./F2837xD_CodeStartBranch.obj" \
"./F2837xD_DefaultISR.obj" \
"./F2837xD_GlobalVariableDefs.obj" \
"./F2837xD_Gpio.obj" \
"./F2837xD_PieCtrl.obj" \
"./F2837xD_PieVect.obj" \
"./F2837xD_SysCtrl.obj" \
"./F2837xD_usDelay.obj" \
"./main.obj" \
"./device/device.obj" \
"./device/driverlib/adc.obj" \
"./device/driverlib/asysctl.obj" \
"./device/driverlib/can.obj" \
"./device/driverlib/cla.obj" \
"./device/driverlib/clb.obj" \
"./device/driverlib/cmpss.obj" \
"./device/driverlib/cputimer.obj" \
"./device/driverlib/dac.obj" \
"./device/driverlib/dcsm.obj" \
"./device/driverlib/dma.obj" \
"./device/driverlib/ecap.obj" \
"./device/driverlib/emif.obj" \
"./device/driverlib/epwm.obj" \
"./device/driverlib/eqep.obj" \
"./device/driverlib/flash.obj" \
"./device/driverlib/gpio.obj" \
"./device/driverlib/hrpwm.obj" \
"./device/driverlib/i2c.obj" \
"./device/driverlib/interrupt.obj" \
"./device/driverlib/ipc.obj" \
"./device/driverlib/mcbsp.obj" \
"./device/driverlib/memcfg.obj" \
"./device/driverlib/sci.obj" \
"./device/driverlib/sdfm.obj" \
"./device/driverlib/spi.obj" \
"./device/driverlib/sysctl.obj" \
"./device/driverlib/upp.obj" \
"./device/driverlib/usb.obj" \
"./device/driverlib/version.obj" \
"./device/driverlib/xbar.obj" \
"../2837xD_RAM_lnk_cpu1.cmd" \
"../F2837xD_Headers_nonBIOS_cpu1.cmd" \
"../device/driverlib/ccs/Debug/driverlib.lib" \
"../device/driverlib/ccs/Debug/driverlib_coff.lib" \
"../device/driverlib/ccs/Debug/driverlib_eabi.lib" \
"../device/driverlib/ccs/Release/driverlib.lib" \
"../device/driverlib/ccs/Release/driverlib_coff.lib" \
"../device/driverlib/ccs/Release/driverlib_eabi.lib" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include device/subdir_vars.mk
-include device/driverlib/subdir_vars.mk
-include device/driverlib/ccs/Debug/subdir_vars.mk
-include device/driverlib/ccs/Release/subdir_vars.mk
-include subdir_rules.mk
-include device/subdir_rules.mk
-include device/driverlib/subdir_rules.mk
-include device/driverlib/ccs/Debug/subdir_rules.mk
-include device/driverlib/ccs/Release/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
timer_interrupt.out 

EXE_OUTPUTS__QUOTED += \
"timer_interrupt.out" 


# All Target
all: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "timer_interrupt.out"

# Tool invocations
timer_interrupt.out: $(OBJS) $(CMD_SRCS) $(LIB_SRCS) $(GEN_CMDS)
	@echo 'C2000 Linker - building target: "$@"'
	"C:/ti/ccs2051/ccs/tools/compiler/ti-cgt-c2000_25.11.0.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 -Ooff --define=DEBUG --define=_DUAL_HEADERS --define=CPU1 --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi -z -m"timer_interrupt.map" --stack_size=0x100 --warn_sections -i"C:/ti/ccs2051/ccs/tools/compiler/ti-cgt-c2000_25.11.0.LTS/lib" -i"C:/ti/ccs2051/ccs/tools/compiler/ti-cgt-c2000_25.11.0.LTS/include" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="timer_interrupt_linkInfo.xml" --rom_model -o "timer_interrupt.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)
	-$(RM) "F2837xD_CodeStartBranch.obj" "F2837xD_DefaultISR.obj" "F2837xD_GlobalVariableDefs.obj" "F2837xD_Gpio.obj" "F2837xD_PieCtrl.obj" "F2837xD_PieVect.obj" "F2837xD_SysCtrl.obj" "F2837xD_usDelay.obj" "main.obj" "device\device.obj" "device\driverlib\adc.obj" "device\driverlib\asysctl.obj" "device\driverlib\can.obj" "device\driverlib\cla.obj" "device\driverlib\clb.obj" "device\driverlib\cmpss.obj" "device\driverlib\cputimer.obj" "device\driverlib\dac.obj" "device\driverlib\dcsm.obj" "device\driverlib\dma.obj" "device\driverlib\ecap.obj" "device\driverlib\emif.obj" "device\driverlib\epwm.obj" "device\driverlib\eqep.obj" "device\driverlib\flash.obj" "device\driverlib\gpio.obj" "device\driverlib\hrpwm.obj" "device\driverlib\i2c.obj" "device\driverlib\interrupt.obj" "device\driverlib\ipc.obj" "device\driverlib\mcbsp.obj" "device\driverlib\memcfg.obj" "device\driverlib\sci.obj" "device\driverlib\sdfm.obj" "device\driverlib\spi.obj" "device\driverlib\sysctl.obj" "device\driverlib\upp.obj" "device\driverlib\usb.obj" 
	-$(RM) "device\driverlib\version.obj" "device\driverlib\xbar.obj" 
	-$(RM) "F2837xD_DefaultISR.d" "F2837xD_GlobalVariableDefs.d" "F2837xD_Gpio.d" "F2837xD_PieCtrl.d" "F2837xD_PieVect.d" "F2837xD_SysCtrl.d" "main.d" "device\device.d" "device\driverlib\adc.d" "device\driverlib\asysctl.d" "device\driverlib\can.d" "device\driverlib\cla.d" "device\driverlib\clb.d" "device\driverlib\cmpss.d" "device\driverlib\cputimer.d" "device\driverlib\dac.d" "device\driverlib\dcsm.d" "device\driverlib\dma.d" "device\driverlib\ecap.d" "device\driverlib\emif.d" "device\driverlib\epwm.d" "device\driverlib\eqep.d" "device\driverlib\flash.d" "device\driverlib\gpio.d" "device\driverlib\hrpwm.d" "device\driverlib\i2c.d" "device\driverlib\interrupt.d" "device\driverlib\ipc.d" "device\driverlib\mcbsp.d" "device\driverlib\memcfg.d" "device\driverlib\sci.d" "device\driverlib\sdfm.d" "device\driverlib\spi.d" "device\driverlib\sysctl.d" "device\driverlib\upp.d" "device\driverlib\usb.d" "device\driverlib\version.d" "device\driverlib\xbar.d" 
	-$(RM) "F2837xD_CodeStartBranch.d" "F2837xD_usDelay.d" 
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

