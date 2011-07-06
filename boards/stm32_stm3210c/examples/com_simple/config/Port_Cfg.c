/*
* Configuration of module: Port (Port_Cfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    STM32_F107
*
* Module vendor:           ArcCore
* Generator version:       2.0.2
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Wed Jul 06 13:54:35 CEST 2011
*/

	
#include "stm32f10x_gpio.h"
#include "Port.h"

const uint32 remaps[] = {
	GPIO_Remap2_CAN1,
	GPIO_Remap_ETH,
	GPIO_Remap_CAN2,
};

const GpioPinCnfMode_Type GPIOConf[] =
{
  {
	.GpioPinCnfMode_0 = 0, 	
	.GpioPinCnfMode_1 = 0, 	
	.GpioPinCnfMode_2 = 0, 	
	.GpioPinCnfMode_3 = 0, 	
	.GpioPinCnfMode_4 = 0, 	
	.GpioPinCnfMode_5 = 0, 	
	.GpioPinCnfMode_6 = 0, 	
	.GpioPinCnfMode_7 = 0, 	
	.GpioPinCnfMode_8 = 0, 	
	.GpioPinCnfMode_9 = 0, 	
	.GpioPinCnfMode_10 = 0, 	
	.GpioPinCnfMode_11 = 0, 	
	.GpioPinCnfMode_12 = 0, 	
	.GpioPinCnfMode_13 = 0, 	
	.GpioPinCnfMode_14 = 0, 	
	.GpioPinCnfMode_15 = 0, 		
  },
  {
	.GpioPinCnfMode_0 = 0, 	
	.GpioPinCnfMode_1 = 0, 	
	.GpioPinCnfMode_2 = 0, 	
	.GpioPinCnfMode_3 = 0, 	
	.GpioPinCnfMode_4 = 0, 	
	.GpioPinCnfMode_5 = 0, 	
	.GpioPinCnfMode_6 = 0, 	
	.GpioPinCnfMode_7 = 0, 	
	.GpioPinCnfMode_8 = 0, 	
	.GpioPinCnfMode_9 = 0, 	
	.GpioPinCnfMode_10 = 0, 	
	.GpioPinCnfMode_11 = 0, 	
	.GpioPinCnfMode_12 = 0, 	
	.GpioPinCnfMode_13 = 0, 	
	.GpioPinCnfMode_14 = 0, 	
	.GpioPinCnfMode_15 = 0, 		
  },
  {
	.GpioPinCnfMode_0 = 0, 	
	.GpioPinCnfMode_1 = 0, 	
	.GpioPinCnfMode_2 = 0, 	
	.GpioPinCnfMode_3 = 0, 	
	.GpioPinCnfMode_4 = 0, 	
	.GpioPinCnfMode_5 = 0, 	
	.GpioPinCnfMode_6 = 0, 	
	.GpioPinCnfMode_7 = 0, 	
	.GpioPinCnfMode_8 = 0, 	
	.GpioPinCnfMode_9 = 0, 	
	.GpioPinCnfMode_10 = 0, 	
	.GpioPinCnfMode_11 = 0, 	
	.GpioPinCnfMode_12 = 0, 	
	.GpioPinCnfMode_13 = 0, 	
	.GpioPinCnfMode_14 = 0, 	
	.GpioPinCnfMode_15 = 0, 		
  },
  {
	.GpioPinCnfMode_0 = GPIO_INPUT_MODE | GPIO_INPUT_PULLUP_CNF, 	
	.GpioPinCnfMode_1 = GPIO_OUTPUT_10MHz_MODE | GPIO_ALT_PUSHPULL_CNF, 	
	.GpioPinCnfMode_2 = 0, 	
	.GpioPinCnfMode_3 = 0, 	
	.GpioPinCnfMode_4 = 0, 	
	.GpioPinCnfMode_5 = 0, 	
	.GpioPinCnfMode_6 = 0, 	
	.GpioPinCnfMode_7 = 0, 	
	.GpioPinCnfMode_8 = 0, 	
	.GpioPinCnfMode_9 = 0, 	
	.GpioPinCnfMode_10 = 0, 	
	.GpioPinCnfMode_11 = 0, 	
	.GpioPinCnfMode_12 = 0, 	
	.GpioPinCnfMode_13 = 0, 	
	.GpioPinCnfMode_14 = 0, 	
	.GpioPinCnfMode_15 = 0, 		
  },
  {
	.GpioPinCnfMode_0 = 0, 	
	.GpioPinCnfMode_1 = 0, 	
	.GpioPinCnfMode_2 = 0, 	
	.GpioPinCnfMode_3 = 0, 	
	.GpioPinCnfMode_4 = 0, 	
	.GpioPinCnfMode_5 = 0, 	
	.GpioPinCnfMode_6 = 0, 	
	.GpioPinCnfMode_7 = 0, 	
	.GpioPinCnfMode_8 = 0, 	
	.GpioPinCnfMode_9 = 0, 	
	.GpioPinCnfMode_10 = 0, 	
	.GpioPinCnfMode_11 = 0, 	
	.GpioPinCnfMode_12 = 0, 	
	.GpioPinCnfMode_13 = 0, 	
	.GpioPinCnfMode_14 = 0, 	
	.GpioPinCnfMode_15 = 0, 		
  },
  {
	.GpioPinCnfMode_0 = 0, 	
	.GpioPinCnfMode_1 = 0, 	
	.GpioPinCnfMode_2 = 0, 	
	.GpioPinCnfMode_3 = 0, 	
	.GpioPinCnfMode_4 = 0, 	
	.GpioPinCnfMode_5 = 0, 	
	.GpioPinCnfMode_6 = 0, 	
	.GpioPinCnfMode_7 = 0, 	
	.GpioPinCnfMode_8 = 0, 	
	.GpioPinCnfMode_9 = 0, 	
	.GpioPinCnfMode_10 = 0, 	
	.GpioPinCnfMode_11 = 0, 	
	.GpioPinCnfMode_12 = 0, 	
	.GpioPinCnfMode_13 = 0, 	
	.GpioPinCnfMode_14 = 0, 	
	.GpioPinCnfMode_15 = 0, 		
  },
  {
	.GpioPinCnfMode_0 = 0, 	
	.GpioPinCnfMode_1 = 0, 	
	.GpioPinCnfMode_2 = 0, 	
	.GpioPinCnfMode_3 = 0, 	
	.GpioPinCnfMode_4 = 0, 	
	.GpioPinCnfMode_5 = 0, 	
	.GpioPinCnfMode_6 = 0, 	
	.GpioPinCnfMode_7 = 0, 	
	.GpioPinCnfMode_8 = 0, 	
	.GpioPinCnfMode_9 = 0, 	
	.GpioPinCnfMode_10 = 0, 	
	.GpioPinCnfMode_11 = 0, 	
	.GpioPinCnfMode_12 = 0, 	
	.GpioPinCnfMode_13 = 0, 	
	.GpioPinCnfMode_14 = 0, 	
	.GpioPinCnfMode_15 = 0, 		
  },
};


const GpioPinOutLevel_Type GPIOOutConf[] =
{
  {
	.GpioPinOutLevel_0 = 0, 	
	.GpioPinOutLevel_1 = 0, 	
	.GpioPinOutLevel_2 = 0, 	
	.GpioPinOutLevel_3 = 0, 	
	.GpioPinOutLevel_4 = 0, 	
	.GpioPinOutLevel_5 = 0, 	
	.GpioPinOutLevel_6 = 0, 	
	.GpioPinOutLevel_7 = 0, 	
	.GpioPinOutLevel_8 = 0, 	
	.GpioPinOutLevel_9 = 0, 	
	.GpioPinOutLevel_10 = 0, 	
	.GpioPinOutLevel_11 = 0, 	
	.GpioPinOutLevel_12 = 0, 	
	.GpioPinOutLevel_13 = 0, 	
	.GpioPinOutLevel_14 = 0, 	
	.GpioPinOutLevel_15 = 0, 		
  },
  {
	.GpioPinOutLevel_0 = 0, 	
	.GpioPinOutLevel_1 = 0, 	
	.GpioPinOutLevel_2 = 0, 	
	.GpioPinOutLevel_3 = 0, 	
	.GpioPinOutLevel_4 = 0, 	
	.GpioPinOutLevel_5 = 0, 	
	.GpioPinOutLevel_6 = 0, 	
	.GpioPinOutLevel_7 = 0, 	
	.GpioPinOutLevel_8 = 0, 	
	.GpioPinOutLevel_9 = 0, 	
	.GpioPinOutLevel_10 = 0, 	
	.GpioPinOutLevel_11 = 0, 	
	.GpioPinOutLevel_12 = 0, 	
	.GpioPinOutLevel_13 = 0, 	
	.GpioPinOutLevel_14 = 0, 	
	.GpioPinOutLevel_15 = 0, 		
  },
  {
	.GpioPinOutLevel_0 = 0, 	
	.GpioPinOutLevel_1 = 0, 	
	.GpioPinOutLevel_2 = 0, 	
	.GpioPinOutLevel_3 = 0, 	
	.GpioPinOutLevel_4 = 0, 	
	.GpioPinOutLevel_5 = 0, 	
	.GpioPinOutLevel_6 = 0, 	
	.GpioPinOutLevel_7 = 0, 	
	.GpioPinOutLevel_8 = 0, 	
	.GpioPinOutLevel_9 = 0, 	
	.GpioPinOutLevel_10 = 0, 	
	.GpioPinOutLevel_11 = 0, 	
	.GpioPinOutLevel_12 = 0, 	
	.GpioPinOutLevel_13 = 0, 	
	.GpioPinOutLevel_14 = 0, 	
	.GpioPinOutLevel_15 = 0, 		
  },
  {
	.GpioPinOutLevel_0 = GPIO_OUTPUT_LOW, 	
	.GpioPinOutLevel_1 = GPIO_OUTPUT_LOW, 	
	.GpioPinOutLevel_2 = 0, 	
	.GpioPinOutLevel_3 = 0, 	
	.GpioPinOutLevel_4 = 0, 	
	.GpioPinOutLevel_5 = 0, 	
	.GpioPinOutLevel_6 = 0, 	
	.GpioPinOutLevel_7 = 0, 	
	.GpioPinOutLevel_8 = 0, 	
	.GpioPinOutLevel_9 = 0, 	
	.GpioPinOutLevel_10 = 0, 	
	.GpioPinOutLevel_11 = 0, 	
	.GpioPinOutLevel_12 = 0, 	
	.GpioPinOutLevel_13 = 0, 	
	.GpioPinOutLevel_14 = 0, 	
	.GpioPinOutLevel_15 = 0, 		
  },
  {
	.GpioPinOutLevel_0 = 0, 	
	.GpioPinOutLevel_1 = 0, 	
	.GpioPinOutLevel_2 = 0, 	
	.GpioPinOutLevel_3 = 0, 	
	.GpioPinOutLevel_4 = 0, 	
	.GpioPinOutLevel_5 = 0, 	
	.GpioPinOutLevel_6 = 0, 	
	.GpioPinOutLevel_7 = 0, 	
	.GpioPinOutLevel_8 = 0, 	
	.GpioPinOutLevel_9 = 0, 	
	.GpioPinOutLevel_10 = 0, 	
	.GpioPinOutLevel_11 = 0, 	
	.GpioPinOutLevel_12 = 0, 	
	.GpioPinOutLevel_13 = 0, 	
	.GpioPinOutLevel_14 = 0, 	
	.GpioPinOutLevel_15 = 0, 		
  },
  {
	.GpioPinOutLevel_0 = 0, 	
	.GpioPinOutLevel_1 = 0, 	
	.GpioPinOutLevel_2 = 0, 	
	.GpioPinOutLevel_3 = 0, 	
	.GpioPinOutLevel_4 = 0, 	
	.GpioPinOutLevel_5 = 0, 	
	.GpioPinOutLevel_6 = 0, 	
	.GpioPinOutLevel_7 = 0, 	
	.GpioPinOutLevel_8 = 0, 	
	.GpioPinOutLevel_9 = 0, 	
	.GpioPinOutLevel_10 = 0, 	
	.GpioPinOutLevel_11 = 0, 	
	.GpioPinOutLevel_12 = 0, 	
	.GpioPinOutLevel_13 = 0, 	
	.GpioPinOutLevel_14 = 0, 	
	.GpioPinOutLevel_15 = 0, 		
  },
  {
	.GpioPinOutLevel_0 = 0, 	
	.GpioPinOutLevel_1 = 0, 	
	.GpioPinOutLevel_2 = 0, 	
	.GpioPinOutLevel_3 = 0, 	
	.GpioPinOutLevel_4 = 0, 	
	.GpioPinOutLevel_5 = 0, 	
	.GpioPinOutLevel_6 = 0, 	
	.GpioPinOutLevel_7 = 0, 	
	.GpioPinOutLevel_8 = 0, 	
	.GpioPinOutLevel_9 = 0, 	
	.GpioPinOutLevel_10 = 0, 	
	.GpioPinOutLevel_11 = 0, 	
	.GpioPinOutLevel_12 = 0, 	
	.GpioPinOutLevel_13 = 0, 	
	.GpioPinOutLevel_14 = 0, 	
	.GpioPinOutLevel_15 = 0, 		
  },
};

const Port_ConfigType PortConfigData =
{
	.padCnt = 7,
	.padConfig = GPIOConf,
	.outConfig = GPIOOutConf,

    .remapCount = sizeof(remaps) / sizeof(uint32),
    .remaps = &remaps[0]
};
