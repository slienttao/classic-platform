/*
* Configuration of module: Port (Port_Cfg.c)
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

	

#include "Port.h"
#include "Port_Cfg.h"
#include <stdlib.h>

const uint16_t PortPadConfigData[] = {
	PORT_PCR_RESET,			/* PCR	0 */
	PORT_PCR_RESET,			/* PCR	1 */
	PORT_PCR_RESET,			/* PCR	2 */
	PORT_PCR_RESET,			/* PCR	3 */
	PORT_PCR_RESET,			/* PCR	4 */
	PORT_PCR_RESET,			/* PCR	5 */
	PORT_PCR_RESET,			/* PCR	6 */
	PORT_PCR_RESET,			/* PCR	7 */
	PORT_PCR_RESET,			/* PCR	8 */
	PORT_PCR_RESET,			/* PCR	9 */
	PORT_PCR_RESET,			/* PCR	10 */
	PORT_PCR_RESET,			/* PCR	11 */
	PORT_PCR_RESET,			/* PCR	12 */
	PORT_PCR_RESET,			/* PCR	13 */
	PORT_PCR_RESET,			/* PCR	14 */
	PORT_PCR_RESET,			/* PCR	15 */
	PORT_PCR_RESET,			/* PCR	16 */
	PORT_PCR_RESET,			/* PCR	17 */
	PORT_PCR_RESET,			/* PCR	18 */
	PORT_PCR_RESET,			/* PCR	19 */
	PORT_PCR_RESET,			/* PCR	20 */
	PORT_PCR_RESET,			/* PCR	21 */
	PORT_PCR_RESET,			/* PCR	22 */
	PORT_PCR_RESET,			/* PCR	23 */
	PORT_PCR_RESET,			/* PCR	24 */
	PORT_PCR_RESET,			/* PCR	25 */
	PORT_PCR_RESET,			/* PCR	26 */
	PORT_PCR_RESET,			/* PCR	27 */
	PORT_PCR_RESET,			/* PCR	28 */
	PORT_PCR_RESET,			/* PCR	29 */
	PORT_PCR_RESET,			/* PCR	30 */
	PORT_PCR_RESET,			/* PCR	31 */
	PORT_PCR_RESET,			/* PCR	32 */
	PORT_PCR_RESET,			/* PCR	33 */
	PORT_PCR_RESET,			/* PCR	34 */
	PORT_PCR_RESET,			/* PCR	35 */
	PORT_PCR_RESET,			/* PCR	36 */
	PORT_PCR_RESET,			/* PCR	37 */
	PORT_PCR_RESET,			/* PCR	38 */
	PORT_PCR_RESET,			/* PCR	39 */
	PORT_PCR_RESET,			/* PCR	40 */
	PORT_PCR_RESET,			/* PCR	41 */
	PORT_PCR_RESET,			/* PCR	42 */
	PORT_PCR_RESET,			/* PCR	43 */
	PORT_PCR_RESET,			/* PCR	44 */
	PORT_PCR_RESET,			/* PCR	45 */
	PORT_PCR_RESET,			/* PCR	46 */
	PORT_PCR_RESET,			/* PCR	47 */
	( PORT_FUNC1 | PORT_OBE_ENABLE | PORT_SLEW_RATE_MIN | PORT_PULL_NONE ),	/* PCR	48 : PORT_PIN_MODE_CAN */
	( PORT_FUNC1 | PORT_IBE_ENABLE | PORT_SLEW_RATE_MIN | PORT_PULL_NONE ),	/* PCR	49 : PORT_PIN_MODE_CAN */
	PORT_PCR_RESET,			/* PCR	50 */
	PORT_PCR_RESET,			/* PCR	51 */
	PORT_PCR_RESET,			/* PCR	52 */
	PORT_PCR_RESET,			/* PCR	53 */
	PORT_PCR_RESET,			/* PCR	54 */
	PORT_PCR_RESET,			/* PCR	55 */
	PORT_PCR_RESET,			/* PCR	56 */
	PORT_PCR_RESET,			/* PCR	57 */
	PORT_PCR_RESET,			/* PCR	58 */
	PORT_PCR_RESET,			/* PCR	59 */
	PORT_PCR_RESET,			/* PCR	60 */
	PORT_PCR_RESET,			/* PCR	61 */
	PORT_PCR_RESET,			/* PCR	62 */
	PORT_PCR_RESET,			/* PCR	63 */
	PORT_PCR_RESET,			/* PCR	64 */
	PORT_PCR_RESET,			/* PCR	65 */
	PORT_PCR_RESET,			/* PCR	66 */
	PORT_PCR_RESET,			/* PCR	67 */
	PORT_PCR_RESET,			/* PCR	68 */
	PORT_PCR_RESET,			/* PCR	69 */
	PORT_PCR_RESET,			/* PCR	70 */
	PORT_PCR_RESET,			/* PCR	71 */
	PORT_PCR_RESET,			/* PCR	72 */
	PORT_PCR_RESET,			/* PCR	73 */
	PORT_PCR_RESET,			/* PCR	74 */
	PORT_PCR_RESET,			/* PCR	75 */
	PORT_PCR_RESET,			/* PCR	76 */
	PORT_PCR_RESET,			/* PCR	77 */
	PORT_PCR_RESET,			/* PCR	78 */
	PORT_PCR_RESET,			/* PCR	79 */
	PORT_PCR_RESET,			/* PCR	80 */
	PORT_PCR_RESET,			/* PCR	81 */
	PORT_PCR_RESET,			/* PCR	82 */
	PORT_PCR_RESET,			/* PCR	83 */
	PORT_PCR_RESET,			/* PCR	84 */
	PORT_PCR_RESET,			/* PCR	85 */
	PORT_PCR_RESET,			/* PCR	86 */
	PORT_PCR_RESET,			/* PCR	87 */
	PORT_PCR_RESET,			/* PCR	88 */
	PORT_PCR_RESET,			/* PCR	89 */
	PORT_PCR_RESET,			/* PCR	90 */
	PORT_PCR_RESET,			/* PCR	91 */
	PORT_PCR_RESET,			/* PCR	92 */
	PORT_PCR_RESET,			/* PCR	93 */
	PORT_PCR_RESET,			/* PCR	94 */
	PORT_PCR_RESET,			/* PCR	95 */
	PORT_PCR_RESET,			/* PCR	96 */
	PORT_PCR_RESET,			/* PCR	97 */
	PORT_PCR_RESET,			/* PCR	98 */
	PORT_PCR_RESET,			/* PCR	99 */
	PORT_PCR_RESET,			/* PCR	100 */
	PORT_PCR_RESET,			/* PCR	101 */
	PORT_PCR_RESET,			/* PCR	102 */
	PORT_PCR_RESET,			/* PCR	103 */
	PORT_PCR_RESET,			/* PCR	104 */
	PORT_PCR_RESET,			/* PCR	105 */
	PORT_PCR_RESET,			/* PCR	106 */
	PORT_PCR_RESET,			/* PCR	107 */
	PORT_PCR_RESET,			/* PCR	108 */
	PORT_PCR_RESET,			/* PCR	109 */
	PORT_PCR_RESET,			/* PCR	110 */
	PORT_PCR_RESET,			/* PCR	111 */
	PORT_PCR_RESET,			/* PCR	112 */
	PORT_PCR_RESET,			/* PCR	113 */
	PORT_PCR_RESET,			/* PCR	114 */
	PORT_PCR_RESET,			/* PCR	115 */
	PORT_PCR_RESET,			/* PCR	116 */
	PORT_PCR_RESET,			/* PCR	117 */
	PORT_PCR_RESET,			/* PCR	118 */
	PORT_PCR_RESET,			/* PCR	119 */
	PORT_PCR_RESET,			/* PCR	120 */
	PORT_PCR_RESET,			/* PCR	121 */
	PORT_PCR_RESET,			/* PCR	122 */
	PORT_PCR_RESET,			/* PCR	123 */
	PORT_PCR_RESET,			/* PCR	124 */
	PORT_PCR_RESET,			/* PCR	125 */
	PORT_PCR_RESET,			/* PCR	126 */
	PORT_PCR_RESET,			/* PCR	127 */
	PORT_PCR_RESET,			/* PCR	128 */
	PORT_PCR_RESET,			/* PCR	129 */
	PORT_PCR_RESET,			/* PCR	130 */
	PORT_PCR_RESET,			/* PCR	131 */
	PORT_PCR_RESET,			/* PCR	132 */
	PORT_PCR_RESET,			/* PCR	133 */
	PORT_PCR_RESET,			/* PCR	134 */
	PORT_PCR_RESET,			/* PCR	135 */
	PORT_PCR_RESET,			/* PCR	136 */
	PORT_PCR_RESET,			/* PCR	137 */
	PORT_PCR_RESET,			/* PCR	138 */
	PORT_PCR_RESET,			/* PCR	139 */
	PORT_PCR_RESET,			/* PCR	140 */
	PORT_PCR_RESET,			/* PCR	141 */
	PORT_PCR_RESET,			/* PCR	142 */
	PORT_PCR_RESET,			/* PCR	143 */
	PORT_PCR_RESET,			/* PCR	144 */
};

const uint8_t PortOutConfigData[] = {
	PORT_GPDO_RESET,			/* GPDO	0 */
	PORT_GPDO_RESET,			/* GPDO	1 */
	PORT_GPDO_RESET,			/* GPDO	2 */
	PORT_GPDO_RESET,			/* GPDO	3 */
	PORT_GPDO_RESET,			/* GPDO	4 */
	PORT_GPDO_RESET,			/* GPDO	5 */
	PORT_GPDO_RESET,			/* GPDO	6 */
	PORT_GPDO_RESET,			/* GPDO	7 */
	PORT_GPDO_RESET,			/* GPDO	8 */
	PORT_GPDO_RESET,			/* GPDO	9 */
	PORT_GPDO_RESET,			/* GPDO	10 */
	PORT_GPDO_RESET,			/* GPDO	11 */
	PORT_GPDO_RESET,			/* GPDO	12 */
	PORT_GPDO_RESET,			/* GPDO	13 */
	PORT_GPDO_RESET,			/* GPDO	14 */
	PORT_GPDO_RESET,			/* GPDO	15 */
	PORT_GPDO_RESET,			/* GPDO	16 */
	PORT_GPDO_RESET,			/* GPDO	17 */
	PORT_GPDO_RESET,			/* GPDO	18 */
	PORT_GPDO_RESET,			/* GPDO	19 */
	PORT_GPDO_RESET,			/* GPDO	20 */
	PORT_GPDO_RESET,			/* GPDO	21 */
	PORT_GPDO_RESET,			/* GPDO	22 */
	PORT_GPDO_RESET,			/* GPDO	23 */
	PORT_GPDO_RESET,			/* GPDO	24 */
	PORT_GPDO_RESET,			/* GPDO	25 */
	PORT_GPDO_RESET,			/* GPDO	26 */
	PORT_GPDO_RESET,			/* GPDO	27 */
	PORT_GPDO_RESET,			/* GPDO	28 */
	PORT_GPDO_RESET,			/* GPDO	29 */
	PORT_GPDO_RESET,			/* GPDO	30 */
	PORT_GPDO_RESET,			/* GPDO	31 */
	PORT_GPDO_RESET,			/* GPDO	32 */
	PORT_GPDO_RESET,			/* GPDO	33 */
	PORT_GPDO_RESET,			/* GPDO	34 */
	PORT_GPDO_RESET,			/* GPDO	35 */
	PORT_GPDO_RESET,			/* GPDO	36 */
	PORT_GPDO_RESET,			/* GPDO	37 */
	PORT_GPDO_RESET,			/* GPDO	38 */
	PORT_GPDO_RESET,			/* GPDO	39 */
	PORT_GPDO_RESET,			/* GPDO	40 */
	PORT_GPDO_RESET,			/* GPDO	41 */
	PORT_GPDO_RESET,			/* GPDO	42 */
	PORT_GPDO_RESET,			/* GPDO	43 */
	PORT_GPDO_RESET,			/* GPDO	44 */
	PORT_GPDO_RESET,			/* GPDO	45 */
	PORT_GPDO_RESET,			/* GPDO	46 */
	PORT_GPDO_RESET,			/* GPDO	47 */
	PORT_GPDO_RESET,			/* GPDO	48 */
	PORT_GPDO_RESET,			/* GPDO	49 */
	PORT_GPDO_RESET,			/* GPDO	50 */
	PORT_GPDO_RESET,			/* GPDO	51 */
	PORT_GPDO_RESET,			/* GPDO	52 */
	PORT_GPDO_RESET,			/* GPDO	53 */
	PORT_GPDO_RESET,			/* GPDO	54 */
	PORT_GPDO_RESET,			/* GPDO	55 */
	PORT_GPDO_RESET,			/* GPDO	56 */
	PORT_GPDO_RESET,			/* GPDO	57 */
	PORT_GPDO_RESET,			/* GPDO	58 */
	PORT_GPDO_RESET,			/* GPDO	59 */
	PORT_GPDO_RESET,			/* GPDO	60 */
	PORT_GPDO_RESET,			/* GPDO	61 */
	PORT_GPDO_RESET,			/* GPDO	62 */
	PORT_GPDO_RESET,			/* GPDO	63 */
	PORT_GPDO_RESET,			/* GPDO	64 */
	PORT_GPDO_RESET,			/* GPDO	65 */
	PORT_GPDO_RESET,			/* GPDO	66 */
	PORT_GPDO_RESET,			/* GPDO	67 */
	PORT_GPDO_RESET,			/* GPDO	68 */
	PORT_GPDO_RESET,			/* GPDO	69 */
	PORT_GPDO_RESET,			/* GPDO	70 */
	PORT_GPDO_RESET,			/* GPDO	71 */
	PORT_GPDO_RESET,			/* GPDO	72 */
	PORT_GPDO_RESET,			/* GPDO	73 */
	PORT_GPDO_RESET,			/* GPDO	74 */
	PORT_GPDO_RESET,			/* GPDO	75 */
	PORT_GPDO_RESET,			/* GPDO	76 */
	PORT_GPDO_RESET,			/* GPDO	77 */
	PORT_GPDO_RESET,			/* GPDO	78 */
	PORT_GPDO_RESET,			/* GPDO	79 */
	PORT_GPDO_RESET,			/* GPDO	80 */
	PORT_GPDO_RESET,			/* GPDO	81 */
	PORT_GPDO_RESET,			/* GPDO	82 */
	PORT_GPDO_RESET,			/* GPDO	83 */
	PORT_GPDO_RESET,			/* GPDO	84 */
	PORT_GPDO_RESET,			/* GPDO	85 */
	PORT_GPDO_RESET,			/* GPDO	86 */
	PORT_GPDO_RESET,			/* GPDO	87 */
	PORT_GPDO_RESET,			/* GPDO	88 */
	PORT_GPDO_RESET,			/* GPDO	89 */
	PORT_GPDO_RESET,			/* GPDO	90 */
	PORT_GPDO_RESET,			/* GPDO	91 */
	PORT_GPDO_RESET,			/* GPDO	92 */
	PORT_GPDO_RESET,			/* GPDO	93 */
	PORT_GPDO_RESET,			/* GPDO	94 */
	PORT_GPDO_RESET,			/* GPDO	95 */
	PORT_GPDO_RESET,			/* GPDO	96 */
	PORT_GPDO_RESET,			/* GPDO	97 */
	PORT_GPDO_RESET,			/* GPDO	98 */
	PORT_GPDO_RESET,			/* GPDO	99 */
	PORT_GPDO_RESET,			/* GPDO	100 */
	PORT_GPDO_RESET,			/* GPDO	101 */
	PORT_GPDO_RESET,			/* GPDO	102 */
	PORT_GPDO_RESET,			/* GPDO	103 */
	PORT_GPDO_RESET,			/* GPDO	104 */
	PORT_GPDO_RESET,			/* GPDO	105 */
	PORT_GPDO_RESET,			/* GPDO	106 */
	PORT_GPDO_RESET,			/* GPDO	107 */
	PORT_GPDO_RESET,			/* GPDO	108 */
	PORT_GPDO_RESET,			/* GPDO	109 */
	PORT_GPDO_RESET,			/* GPDO	110 */
	PORT_GPDO_RESET,			/* GPDO	111 */
	PORT_GPDO_RESET,			/* GPDO	112 */
	PORT_GPDO_RESET,			/* GPDO	113 */
	PORT_GPDO_RESET,			/* GPDO	114 */
	PORT_GPDO_RESET,			/* GPDO	115 */
	PORT_GPDO_RESET,			/* GPDO	116 */
	PORT_GPDO_RESET,			/* GPDO	117 */
	PORT_GPDO_RESET,			/* GPDO	118 */
	PORT_GPDO_RESET,			/* GPDO	119 */
	PORT_GPDO_RESET,			/* GPDO	120 */
	PORT_GPDO_RESET,			/* GPDO	121 */
	PORT_GPDO_RESET,			/* GPDO	122 */
	PORT_GPDO_RESET,			/* GPDO	123 */
	PORT_GPDO_RESET,			/* GPDO	124 */
	PORT_GPDO_RESET,			/* GPDO	125 */
	PORT_GPDO_RESET,			/* GPDO	126 */
	PORT_GPDO_RESET,			/* GPDO	127 */
	PORT_GPDO_RESET,			/* GPDO	128 */
	PORT_GPDO_RESET,			/* GPDO	129 */
	PORT_GPDO_RESET,			/* GPDO	130 */
	PORT_GPDO_RESET,			/* GPDO	131 */
	PORT_GPDO_RESET,			/* GPDO	132 */
	PORT_GPDO_RESET,			/* GPDO	133 */
	PORT_GPDO_RESET,			/* GPDO	134 */
	PORT_GPDO_RESET,			/* GPDO	135 */
	PORT_GPDO_RESET,			/* GPDO	136 */
	PORT_GPDO_RESET,			/* GPDO	137 */
	PORT_GPDO_RESET,			/* GPDO	138 */
	PORT_GPDO_RESET,			/* GPDO	139 */
	PORT_GPDO_RESET,			/* GPDO	140 */
	PORT_GPDO_RESET,			/* GPDO	141 */
	PORT_GPDO_RESET,			/* GPDO	142 */
};

const Port_ConfigType PortConfigData =
{
  .padCnt = sizeof(PortPadConfigData),
  .padConfig = PortPadConfigData,
  .outCnt = sizeof(PortOutConfigData),
  .outConfig = PortOutConfigData,
};
