/*
* Configuration of module: Port (Port_Cfg.h)
*
* Created by:              ArcCore
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       2.0.2
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Wed Jul 06 13:51:05 CEST 2011
*/


#if !(((PORT_SW_MAJOR_VERSION == 1) && (PORT_SW_MINOR_VERSION == 0)) )
#error Port: Configuration file expected BSW module version to be 1.0.*
#endif


#ifndef PORT_CFG_H_
#define PORT_CFG_H_

#include "Std_Types.h"

#define	PORT_VERSION_INFO_API				STD_OFF
#define	PORT_DEV_ERROR_DETECT				STD_OFF
#define PORT_SET_PIN_MODE_API				STD_OFF
#define PORT_SET_PIN_DIRECTION_API	        STD_OFF

#define		PORT_BIT0			(1<<15)
#define		PORT_BIT1			(1<<14)
#define		PORT_BIT2			(1<<13)
#define		PORT_BIT3			(1<<12)
#define		PORT_BIT4			(1<<11)
#define		PORT_BIT5			(1<<10)
#define		PORT_BIT6			(1<<9)
#define		PORT_BIT7			(1<<8)
#define		PORT_BIT8			(1<<7)
#define		PORT_BIT9			(1<<6)
#define		PORT_BIT10			(1<<5)
#define		PORT_BIT11			(1<<4)
#define		PORT_BIT12			(1<<3)
#define		PORT_BIT13			(1<<2)
#define		PORT_BIT14			(1<<1)
#define		PORT_BIT15			(1<<0)

#define		PORT_WPE_BIT		PORT_BIT14
#define		PORT_WPS_BIT		PORT_BIT15
#define		PORT_SRC0			PORT_BIT12
#define		PORT_SRC1			PORT_BIT13

#define		PORT_PULL_UP		(PORT_WPE_BIT|PORT_WPS_BIT)
#define		PORT_PULL_DOWN		(PORT_WPE_BIT)
#define		PORT_PULL_NONE		0
#define		PORT_SLEW_RATE_MIN	0
#define		PORT_SLEW_RATE_MED	PORT_BIT13
#define		PORT_SLEW_RATE_MAX	(PORT_BIT12|PORT_BIT13)
#define		PORT_HYS_ENABLE		PORT_BIT11
#define		PORT_ODE_ENABLE		PORT_BIT10
#define		PORT_IBE_ENABLE		PORT_BIT7
#define		PORT_OBE_ENABLE		PORT_BIT6
#define		PORT_IO				(0)
#define 	PORT_GPIO_APC		PORT_BIT2
#define		PORT_FUNC0			(0)
#define		PORT_FUNC1			(PORT_BIT5)
#define		PORT_FUNC2			(PORT_BIT4)
#define		PORT_FUNC3			(PORT_BIT4|PORT_BIT5)
#define		PORT_FUNC4			(PORT_BIT3)

#define		PORT_PCR_RESET		(0)
#define		PORT_GPDO_RESET		(0)

#define		PORT_GPDO_HIGH		(1)


typedef uint16 Port_PinType;

typedef struct
{
	uint16_t padCnt;
	const uint16_t *padConfig;
	uint16_t outCnt;
	const uint8_t *outConfig;
//	uint16_t inCnt;
//	const uint8_t *inConfig;
} Port_ConfigType;

extern const Port_ConfigType PortConfigData;

#define PORT_PIN_NAME_CNTX_A		48	
#define PORT_PIN_NAME_CNRX_A		49	

#endif /* PORT_CFG_H_ */
