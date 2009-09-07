

HOST := $(shell uname)
export prefix

# If we are using codesourcery and cygwin..
export CYGPATH=c:/cygwin/bin/cygpath

# ---------------------------------------------------------------------------
# Compiler
# CCFLAGS - compile flags

CC	= 	$(CROSS_COMPILE)gcc
cflags-y += -O0
#cflags-y += -O0
#cflags-y += -O3

ifneq ($(filter -O2 -O3 -O1,$(cflags-y)),) 
	cflags-y += -fno-schedule-insns -fno-schedule-insns2
endif

# Remove sections if needed.. may be problems with other compilers here.
#cflags-$(CFG_MPC55XX)  += -ffunction-sections


#cflags-y 		+= -c 
#cflags-y 		+= -fno-common
cflags-y 		+= -std=gnu99

# Generate dependencies
cflags-y 		+= -MMD

# Warnings
cflags-y          += -Wall
cflags-y          += -Winline	# warn if inline failed

# Conformance
cflags-y          += -fno-strict-aliasing
cflags-y          += -fno-builtin

# Get machine cflags
#cflags-y		+= $(cflags-$(ARCH))

CFLAGS = $(cflags-y) $(cflags-yy)

CCOUT 		= -o $@ 

# ---------------------------------------------------------------------------
# Preprocessor

CPP	= 	$(CC) -E

# Note!
# Libs related to GCC(libgcc.a, libgcov.a) is located under 
# lib/gcc/<machine>/<version>/<multilib>
# Libs related to the library (libc.a,libm.a,etc) are under:
# <machine>/lib/<multilib>
gcc_lib_path := $(dir $(shell $(CC) $(CFLAGS) --print-libgcc-file-name $(conv_path)))
lib_lib_path := $(dir $(shell $(CC) $(CFLAGS) --print-file-name\=libc.a $(conv_path)))
libpath-y += -L$(lib_lib_path)
libpath-y += -L$(gcc_lib_path)

# ---------------------------------------------------------------------------
# Linker
#
# LDFLAGS 		- linker flags
# LDOUT   		- How to Generate linker output file
# LDMAPFILE     - How to generate mapfile 
# ldcmdfile-y	- link cmd file
# libpath-y		- lib paths
# libitem-y		- the libs with path
# lib-y			- the libs, without path


LD = $(CROSS_COMPILE)ld

LDOUT 		= -o $@
TE = elf
LDMAPFILE = -M > $(subst .$(TE),.map, $@)

libitem-y += $(libitem-yy)

# ---------------------------------------------------------------------------
# Assembler
#
# ASFLAGS 		- assembler flags
# ASOUT 		- how to generate output file

AS	= 	$(CROSS_COMPILE)as

ASFLAGS += --gdwarf2
ASOUT = -o $@

# ---------------------------------------------------------------------------
# Dumper

#DDUMP          = $(Q)$(COMPILER_ROOT)/$(cross_machine-y)-objcopy
#DDUMP_FLAGS    = -O srec
OBJCOPY 		= $(CROSS_COMPILE)objcopy

# ---------------------------------------------------------------------------
# Archiver
#
# AROUT 		- archiver flags

AR	= 	$(CROSS_COMPILE)ar
AROUT 	= $@



