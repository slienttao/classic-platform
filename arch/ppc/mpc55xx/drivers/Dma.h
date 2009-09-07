/* -------------------------------- Arctic Core ------------------------------
 * Arctic Core - the open source AUTOSAR platform http://arccore.com
 *
 * Copyright (C) 2009  ArcCore AB <contact@arccore.com>
 *
 * This source code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by the
 * Free Software Foundation; See <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 * -------------------------------- Arctic Core ------------------------------*/








#ifndef DMA_H_
#define DMA_H_


#include "Std_Types.h"
#include "Dma_Cfg.h"
#include "mpc55xx.h"

typedef enum
{
  DMA_CHANNEL_DISABLED,
  DMA_SCI_A_COMBTX,
  DMA_SCI_A_COMBRX,
  DMA_SCI_B_COMBTX,
  DMA_SCI_B_COMBRX,
  DMA_SCI_C_COMBTX,
  DMA_SCI_C_COMBRX,
  DMA_SCI_D_COMBTX,
  DMA_SCI_D_COMBRX,
  DMA_SCI_E_COMBTX,
  DMA_SCI_E_COMBRX,
  DMA_SCI_F_COMBTX,
  DMA_SCI_F_COMBRX,
  DMA_SCI_G_COMBTX,
  DMA_SCI_G_COMBRX,
  DMA_SCI_H_COMBTX,
  DMA_SCI_H_COMBRX,

  DMA_DSPI_A_SR_TFFF,
  DMA_DSPI_A_SR_RFRD,
  DMA_DSPI_B_SR_TFFF,
  DMA_DSPI_B_SR_RFRD,
  DMA_DSPI_C_SR_TFFF,
  DMA_DSPI_C_SR_RFRD,
  DMA_DSPI_D_SR_TFFF,
  DMA_DSPI_D_SR_RFRD,

  DMA_EMIOS200_FLAG_F0,
  DMA_EMIOS200_FLAG_F1,
  DMA_EMIOS200_FLAG_F2,
  DMA_EMIOS200_FLAG_F3,
  DMA_EMIOS200_FLAG_F4,
  DMA_EMIOS200_FLAG_F5,
  DMA_EMIOS200_FLAG_F6,
  DMA_EMIOS200_FLAG_F7,
  DMA_EMIOS200_FLAG_F8,
  DMA_EMIOS200_FLAG_F9,
  DMA_EMIOS200_FLAG_F10,
  DMA_EMIOS200_FLAG_F11,
  DMA_EMIOS200_FLAG_F12,
  DMA_EMIOS200_FLAG_F13,
  DMA_EMIOS200_FLAG_F14,
  DMA_EMIOS200_FLAG_F15,

  DMA_IIC_A_TX,
  DMA_IIC_A_RX,

  DMA_RESERVED1,
  DMA_RESERVED2,

  DMA_SIU_EISR_EIF1,
  DMA_SIU_EISR_EIF2,
  DMA_SIU_EISR_EIF3,
  DMA_SIU_EISR_EIF4,

  DMA_EQADC_FISR0_RFDF0,
  DMA_EQADC_FISR0_CFFF0,
  DMA_EQADC_FISR1_RFDF0,
  DMA_EQADC_FISR1_CFFF0,

  DMA_MLB_DMA_REQ,

  DMA_RESERVED3,
  DMA_RESERVED4,

  DMA_ALWAYS_ENABLED1,
  DMA_ALWAYS_ENABLED2,
  DMA_ALWAYS_ENABLED3,
  DMA_ALWAYS_ENABLED4,
  DMA_ALWAYS_ENABLED5,
  DMA_ALWAYS_ENABLED6,
  DMA_ALWAYS_ENABLED7,
  DMA_ALWAYS_ENABLED8
}Dma_MuxChannels;

typedef struct
{
  vuint8_t DMA_CHANNEL_ENABLE;
  vuint8_t DMA_CHANNEL_TRIG_ENABLE;
  Dma_MuxChannels DMA_CHANNEL_SOURCE;
} Dma_MuxConfigType;

typedef struct
{
  vuint8_t DMA_CHANNEL_PRIORITY;
  vuint8_t DMA_CHANNEL_PREEMTION_ENABLE;
}Dma_ChannelConfigType;

typedef enum
{
  DMA_TRANSFER_SIZE_8BITS,
  DMA_TRANSFER_SIZE_16BITS,
  DMA_TRANSFER_SIZE_32BITS,
  DMA_TRANSFER_SIZE_64BITS,
  DMA_TRANSFER_SIZE_16BYTES_BURST,
  DMA_TRANSFER_SIZE_32BYTES_BURST
}Dma_DataTranferSizeType;

typedef enum
{
  DMA_FIXED_PRIORITY_ARBITRATION,
  DMA_ROUND_ROBIN_ARBITRATION
}Dma_ChannelArbitrationType;

typedef struct
{
	// 5567 has no Dma Mux, but maybe this should be left in anyway?
#if defined(CFG_MPC5516) || defined(CFG_MPC5517)
  const Dma_MuxConfigType          *dmaMuxConfigPtr;
#endif
  const Dma_ChannelConfigType      *dmaChannelConfigPtr;
  const Dma_ChannelArbitrationType  dmaChannelArbitration;
}Dma_ConfigType;

extern const Dma_ConfigType DmaConfig [];


void Dma_Init (const Dma_ConfigType *ConfigPtr);
void Dma_ConfigureChannel (struct tcd_t *tcd, Dma_ChannelType channel);
void Dma_ConfigureChannelTranferSize (uint32_t nbrOfIterations, Dma_ChannelType channel);
void Dma_ConfigureChannelSourceCorr (uint32_t sourceCorrection, Dma_ChannelType channel);
void Dma_ConfigureChannelDestinationCorr (uint32_t destinationCorrection, Dma_ChannelType channel);
void Dma_ConfigureDestinationAddress (uint32_t destAddr, Dma_ChannelType channel);
void Dma_ConfigureSourceAddress (uint32_t sourceAddr, Dma_ChannelType channel);
void Dma_StartChannel (Dma_ChannelType channel);
void Dma_StopChannel (Dma_ChannelType channel);
Std_ReturnType Dma_ChannelDone (Dma_ChannelType channel);
struct tcd_t * Dma_GetTcd( Dma_ChannelType channel );
boolean Dma_CheckConfig( void );

#endif /* DMA_H_ */