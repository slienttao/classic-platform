/*
 * Mcu_Arc_Cfg.c
 *
 *  Created on: 20 feb 2013
 *      Author: mahi
 */

#include "Std_Types.h"
#include "Mcu.h"
#include "Mcu_Arc.h"
#include "asm_ppc.h"
#include "mm.h"
#include "mpc55xx.h"
#include "io.h"
#if defined(USE_DMA)
#include "Dma.h"
#endif
#include <assert.h>

#if defined(CFG_MCU_ARC_DEBUG)
#include "Ramlog.h"
#define LOG_HEX1(_str,_arg1) \
	ramlog_str(_str);ramlog_hex(_arg1);ramlog_str("\n")

#define LOG_HEX2(_str,_arg1,_str2,_arg2) \
	ramlog_str(_str);ramlog_hex(_arg1);ramlog_str(_str2);ramlog_hex(_arg2);ramlog_str("\n")

#define LOG_STR(_str) 	ramlog_str(_str)
#else
#define LOG_HEX1(_str,_arg1)
#define LOG_HEX2(_str,_arg1,_str2,_arg2)
#define LOG_STR(_str)
#endif


struct TlbEntry TlbTable[]  = {
	// TLB Entry 0 =  1M Internal flash
	{
			0,
			(0x10000000 + (0<<16)),
			(0xC0000000 + MAS1_TSIZE_4M),
			(CFG_FLASH_START + VLE_MAS2_VAL),
			(CFG_FLASH_START + MAS3_FULL_ACCESS),
	},
	// TLB Entry 1 =  Peripheral bridge and BAM
	{
			1,
			(0x10000000 + (1<<16)),
			(0xC0000000 + MAS1_TSIZE_1M),
			(CFG_PERIPHERAL_START + VLE_MAS2_VAL +  MAS2_I),
			(CFG_PERIPHERAL_START + MAS3_FULL_ACCESS),
	},
	// TLB Entry 2 =  External RAM.
	{
			2,
			(0x10000000 + (0<<16)),
			(0xC0000000 + MAS1_TSIZE_4M),
			(CFG_FLASH_START + VLE_MAS2_VAL),
			(CFG_FLASH_START + MAS3_FULL_ACCESS),
	},
	// TLB Entry 3 =  Internal SRAM
	{
			3,
			(0x10000000+(3<<16)),
			(0xC0000000 + MAS1_TSIZE_256K),
			(CFG_SRAM_START + VLE_MAS2_VAL + MAS2_I),
			(CFG_SRAM_START + MAS3_FULL_ACCESS),
	},
	{
			(-1UL)
	}
};


/*
 * Configuration only support:
 * - Flash recovery only
 * - RECPTR is used to hold stack pointer when getting back from sleep
 *
 *
  */
struct Mcu_Arc_SleepPrivData sleepPrivData;



const Mcu_Arc_SleepConfigType Mcu_Arc_SleepConfig =  {
	/* Run all */
	.hlt0_run   = 0x0UL,

	/* Halt all but reserved bits */
	.hlt0_sleep = 0x3fffffffUL,

	/* Goto sleep, enable all RAM
	 *     0x1-8k, 0x2-16k, 0x3-32k, 0x6-64k, 0x7-80K */
	.crp_pscr = PSCR_SLEEP | PSCR_SLP12EN | PCSR_RAMSEL(7),

	/* Point to recovery routine. If VLE is used this must be indicated */
#if defined(CFG_VLE)
	.z1vec = ((uint32)&Mcu_Arc_LowPowerRecoverFlash | 1),
#else
	.z1vec = ((uint32)&Mcu_Arc_LowPowerRecoverFlash ),
#endif
	/* Not using Z0 so keep in reset */
	.z0vec = 2,
	.sleepSysClk = 0,	/* 0 - 16Mhz IRC , 1 - XOSC , 2 - PLL */
	.sleepFlags = 0,
	.pData = &sleepPrivData,
};

const struct Mcu_Arc_Config Mcu_Arc_ConfigData = {
		.sleepConfig = &Mcu_Arc_SleepConfig,
		.tblTable = TlbTable,
};


/**
 * @param sleepCfg
 */
void Mcu_Arc_SetMode2( Mcu_ModeType mcuMode, const struct Mcu_Arc_SleepConfig *sleepCfg ) {
	uint32_t timeout = 0;


	if( MCU_MODE_RUN == mcuMode ) {
		SIU.HLT.R = sleepCfg->hlt0_run;
	} else if( MCU_MODE_SLEEP == mcuMode  ) {

#if defined(USE_DMA)
		Dma_DeInit();
#endif

		LOG_HEX1("CRP Sleep clock ", sleepCfg->sleepSysClk);

		/* Set system clock to 16Mhz IRC */
		SIU.SYSCLK.B.SYSCLKSEL = sleepCfg->sleepSysClk;

		if( sleepCfg->sleepFlags & SLEEP_FLG_POWERDOWN_FLASH ) {
			/* Set MCR[STOP]  (should work if FASTREC if OFF */
			SET32( 0xffff8000UL + 0, (1<<(31-25)) );
		}

		LOG_STR("Enable SLEEP");

		Irq_Disable();

		/* Clear FLAGS first */
		SET32(CRP_PSCR, 0xc7ff0000UL );
		SET32(CRP_RTCSC, (1<<(31-2)) );	/* Clear RTCF */

		/* Write Sleep config */
		WRITE32(CRP_PSCR, sleepCfg->crp_pscr);

		LOG_HEX1("Z1VEC: ", sleepCfg->z1vec );
		WRITE32(CRP_Z1VEC, sleepCfg->z1vec);
		LOG_HEX1("Z0VEC: ", sleepCfg->z0vec );
		WRITE32(CRP_Z0VEC, sleepCfg->z0vec);

		assert( sleepCfg->pData != NULL );

		LOG_HEX1("HLT: ", sleepCfg->hlt0_sleep );
		sleepCfg->pData->hlt0 = SIU.HLT.R;
		SIU.HLT.R = sleepCfg->hlt0_sleep;

		while((SIU.HLTACK.R != sleepCfg->hlt0_sleep) && (timeout++<HLT_TIMEOUT)) {}
	}
}



