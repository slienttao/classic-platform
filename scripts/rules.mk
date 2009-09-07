
CFG_ARCH_$(ARCH):=y

RELDIR := $(subst $(TOPDIR)/,,$(CURDIR))

# Create the target name... 
target := $(subst /,_,$(SUBDIR))

#===== MODULE CONFIGURATION =====
include $(ROOTDIR)/boards/$(BOARDDIR)/build_config.mk
-include ../build_config.mk

define MOD_AVAIL_template
	MOD_$(1)=y
endef

define MOD_USE_template
	USE_$(1)=y
	def-y += USE_$(1)
endef

define CFG_template
	CFG_$(1)=y
	def-y += CFG_$(1)
endef


$(foreach mod,$(MOD_AVAIL),$(eval $(call MOD_AVAIL_template,${mod})))
$(foreach mod,$(MOD_USE),$(eval $(call MOD_USE_template,${mod})))
$(foreach mod,$(CFG),$(eval $(call CFG_template,${mod})))
def-y += $(ARCH) $(ARCH_FAM) $(ARCH_MCU) 

not_avail = $(filter-out $(MOD_AVAIL),$(MOD_USE))
ifneq ($(not_avail),)
$(error Trying to build a module that is not available: $(not_avail))
endif

#===== COMPILER CONFIG =====

ARCH_PATH-y = arch/$(ARCH_FAM)/$(ARCH)

# Include compiler generic and arch specific
COMPILER?=gcc
ifneq ($(ARCH),)
include $(ROOTDIR)/$(ARCH_PATH-y)/scripts/gcc.mk
endif
include $(ROOTDIR)/scripts/cc_$(COMPILER).mk

# Get object files
include ../makefile

inc-y += $(ROOTDIR)/include
inc-$(CFG_PPC) += $(ROOTDIR)/include/ppc
inc-$(CFG_ARM) += $(ROOTDIR)/include/arm

.PHONY config:

config:
	@echo "board   modules:" $(MOD_AVAIL)
	@echo "example modules:" $(MOD_USE)
	@echo $(MOD) ${def-y}

# build- targets are "end" target that the included makefile want's to build
all: $(build-lib-y) $(build-exe-y)

# Determine what kind of filetype to build from  
VPATH += $(ROOTDIR)/$(SUBDIR)/src
VPATH += $(ROOTDIR)/$(SUBDIR)

inc-y += ../include

.SUFFIXES:

# Simple depencendy stuff
-include $(subst .o,.d,$(obj-y))
# Some dependency for xxx_offset.c/h also
-include $(subst .h,.d,$(dep-y))

# Compile
%.o: %.c
	@echo "  >> CC $<"
	$(Q)$(CC) -c $(CFLAGS) -o $(abspath $@) $(addprefix -I ,$(inc-y)) $(addprefix -D,$(def-y)) $(realpath $<)

# Assembler

%.o: %.s
	@echo "  >> AS $< $(ASFLAGS)"
	$(Q)$(AS) $(ASFLAGS) -o $@ $<
	
#$(Q)$(AS) -o /cygdrive/c/apa.o $<


# PP Assembler	
.SECONDARY %.s:

%.s: %.S
	@echo " >> CPP $<"
	$(Q)$(CPP) -o $@ $(addprefix -I ,$(inc-y)) $(addprefix -D,$(def-y)) $<

#	@cat $@ 
	
.PHONY $(ROOTDIR)/libs:
$(ROOTDIR)/libs:
	mkdir -p $@

dep-y += $(ROOTDIR)/libs
	
# lib	
$(build-lib-y): $(dep-y) $(obj-y)
	@echo "  >> AR $(RELDIR)/$@"   
	$(Q)$(AR) -r -o $@ $(obj-y) 2> /dev/null

# Could use readelf -S instead of parsing the *.map file.
$(build-exe-y): $(obj-y) $(sim-y) $(libitem-y) 
	@echo "  >> LD $@"
	$(LD) $(LDFLAGS) $(ldcmdfile-y) -o $@ $(libpath-y) --start-group $(obj-y) $(lib-y) $(libitem-y) --end-group $(LDMAPFILE)
	@echo "Image size: (decimal)"
	@gawk --non-decimal-data 	'/^\.text/ { print "  text:"  $$3+0 " bytes"; rom+=$$3 };\
	 							/^\.data/ { print "  data:"  $$3+0 " bytes"; rom+=$$3; ram+=$$3}; \
	 							/^\.bss/ { print "  bss :"  $$3+0 " bytes"; ram+=$$3}; \
	 							END { print "  ROM: ~" rom " bytes"; print "  RAM: ~" ram " bytes"}' $(subst .elf,.map,$@)
	@echo "  >>>>>>>  DONE  <<<<<<<<<"
	

$(size-exe-y): $(build-exe-y)
	$(Q)$(OBJDUMP) -h $<
	@echo TODO: Parse the file....

.PHONY clean:
	@-rm -f *.o *.d *.h *.elf *.a