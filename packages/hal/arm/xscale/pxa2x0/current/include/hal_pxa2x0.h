//==========================================================================
//
//      hal_pxa2x0.h
//
//      HAL misc board support definitions for PXA250/210
//
//==========================================================================
//####ECOSGPLCOPYRIGHTBEGIN####
// -------------------------------------------
// This file is part of eCos, the Embedded Configurable Operating System.
// Copyright (C) 1998, 1999, 2000, 2001, 2002 Red Hat, Inc.
//
// eCos is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 2 or (at your option) any later version.
//
// eCos is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.
//
// You should have received a copy of the GNU General Public License along
// with eCos; if not, write to the Free Software Foundation, Inc.,
// 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
//
// As a special exception, if other files instantiate templates or use macros
// or inline functions from this file, or you compile this file and link it
// with other works to produce a work based on this file, this file does not
// by itself cause the resulting work to be covered by the GNU General Public
// License. However the source code for this file must still be made available
// in accordance with section (3) of the GNU General Public License.
//
// This exception does not invalidate any other reasons why a work based on
// this file might be covered by the GNU General Public License.
//
// Alternative licenses for eCos may be arranged by contacting Red Hat, Inc.
// at http://sources.redhat.com/ecos/ecos-license/
// -------------------------------------------
//####ECOSGPLCOPYRIGHTEND####
//==========================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):    <knud.woehler@microplex.de>
// Date:         2003-01-06
//
//####DESCRIPTIONEND####
//
//==========================================================================
#ifndef CYGONCE_HAL_ARM_PXA2X0_H
#define CYGONCE_HAL_ARM_PXA2X0_H

#include <pkgconf/system.h>
#include <cyg/hal/hal_xscale.h>

#ifdef __ASSEMBLER__
#define PXA2X0_REGISTER(a)	(a)
#else
#define PXA2X0_REGISTER(a)	((volatile unsigned long *)(a))
#endif

// Memory layout
#define PXA2X0_CS0_BASE				(0x00000000)
#define PXA2X0_CS1_BASE				(0x04000000)
#define PXA2X0_CS2_BASE				(0x08000000)
#define PXA2X0_CS3_BASE				(0x0c000000)
#define PXA2X0_CS4_BASE				(0x10000000)
#define PXA2X0_CS5_BASE				(0x14000000)

#define PXA2X0_PCMCIA0_BASE			(0x20000000)
#define PXA2X0_PCMCIA1_BASE			(0x30000000)

#define PXA2X0_PERIPHERALS_BASE		(0x40000000)
#define PXA2X0_LCD_BASE				(0x44000000)
#define PXA2X0_MEMORY_CTL_BASE		(0x48000000)

#define PXA2X0_RAM_BANK0_BASE		(0xA0000000)
#define PXA2X0_RAM_BANK1_BASE		(0xA4000000)
#define PXA2X0_RAM_BANK2_BASE		(0xA8000000)
#define PXA2X0_RAM_BANK3_BASE		(0xAc000000)

#define PXA2X0_CACHE_FLUSH_BASE		(0xc0000000)

#define DCACHE_FLUSH_AREA			0xc0000000

// DMA Controller
#define PXA2X0_DMA_CTL_BASE			( PXA2X0_PERIPHERALS_BASE + 0x0000000 )
#define PXA2X0_DCSR0				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0000 )
#define PXA2X0_DCSR1				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0004 )
#define PXA2X0_DCSR2				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0008 )
#define PXA2X0_DCSR3				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x000c )
#define PXA2X0_DCSR4				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0010 )
#define PXA2X0_DCSR5				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0014 )
#define PXA2X0_DCSR6				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0018 )
#define PXA2X0_DCSR7				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x001c )
#define PXA2X0_DCSR8				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0020 )
#define PXA2X0_DCSR9				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0024 )
#define PXA2X0_DCSR10				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0028 )
#define PXA2X0_DCSR11				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x002c )
#define PXA2X0_DCSR12				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0030 )
#define PXA2X0_DCSR13				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0034 )
#define PXA2X0_DCSR14				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0038 )
#define PXA2X0_DCSR15				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x003c )
#define PXA2X0_DINT					PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x00f0 )
#define PXA2X0_DRCMR0				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0100 )
#define PXA2X0_DRCMR1				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0104 )
#define PXA2X0_DRCMR2				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0108 )
#define PXA2X0_DRCMR3				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x010c )
#define PXA2X0_DRCMR4				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0110 )
#define PXA2X0_DRCMR5				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0114 )
#define PXA2X0_DRCMR6				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0118 )
#define PXA2X0_DRCMR7				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x011c )
#define PXA2X0_DRCMR8				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0120 )
#define PXA2X0_DRCMR9				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0124 )
#define PXA2X0_DRCMR10				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0128 )
#define PXA2X0_DRCMR11				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x012c )
#define PXA2X0_DRCMR12				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0130 )
#define PXA2X0_DRCMR13				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0134 )
#define PXA2X0_DRCMR14				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0138 )
#define PXA2X0_DRCMR15				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x013c )
#define PXA2X0_DRCMR16				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0140 )
#define PXA2X0_DRCMR17				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0144 )
#define PXA2X0_DRCMR18				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0148 )
#define PXA2X0_DRCMR19				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x014c )
#define PXA2X0_DRCMR20				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0150 )
#define PXA2X0_DRCMR21				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0154 )
#define PXA2X0_DRCMR22				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0158 )
#define PXA2X0_DRCMR23				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x015c )
#define PXA2X0_DRCMR24				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0160 )
#define PXA2X0_DRCMR25				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0164 )
#define PXA2X0_DRCMR26				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0168 )
#define PXA2X0_DRCMR27				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x016c )
#define PXA2X0_DRCMR28				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0170 )
#define PXA2X0_DRCMR29				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0174 )
#define PXA2X0_DRCMR30				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0178 )
#define PXA2X0_DRCMR31				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x017c )
#define PXA2X0_DRCMR32				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0180 )
#define PXA2X0_DRCMR33				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0184 )
#define PXA2X0_DRCMR34				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0188 )
#define PXA2X0_DRCMR35				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x018c )
#define PXA2X0_DRCMR36				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0190 )
#define PXA2X0_DRCMR37				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0194 )
#define PXA2X0_DRCMR38				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0198 )
#define PXA2X0_DRCMR39				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x019c )
#define PXA2X0_DDADR0				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0200 )
#define PXA2X0_DSADR0				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0204 )
#define PXA2X0_DTADR0				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0208 )
#define PXA2X0_DCMD0				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x020c )
#define PXA2X0_DDADR1				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0210 )
#define PXA2X0_DSADR1				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0214 )
#define PXA2X0_DTADR1				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0218 )
#define PXA2X0_DCMD1				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x021c )
#define PXA2X0_DDADR2				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0220 )
#define PXA2X0_DSADR2				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0224 )
#define PXA2X0_DTADR2				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0228 )
#define PXA2X0_DCMD2				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x022c )
#define PXA2X0_DDADR3				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0230 )
#define PXA2X0_DSADR3				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0234 )
#define PXA2X0_DTADR3				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0238 )
#define PXA2X0_DCMD3				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x023c )
#define PXA2X0_DDADR4				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0240 )
#define PXA2X0_DSADR4				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0244 )
#define PXA2X0_DTADR4				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0248 )
#define PXA2X0_DCMD4				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x024c )
#define PXA2X0_DDADR5				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0250 )
#define PXA2X0_DSADR5				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0254 )
#define PXA2X0_DTADR5				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0258 )
#define PXA2X0_DCMD5				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x025c )
#define PXA2X0_DDADR6				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0260 )
#define PXA2X0_DSADR6				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0264 )
#define PXA2X0_DTADR6				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0268 )
#define PXA2X0_DCMD6				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x026c )
#define PXA2X0_DDADR7				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0270 )
#define PXA2X0_DSADR7				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0274 )
#define PXA2X0_DTADR7				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0278 )
#define PXA2X0_DCMD7				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x027c )
#define PXA2X0_DDADR8				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0280 )
#define PXA2X0_DSADR8				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0284 )
#define PXA2X0_DTADR8				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0288 )
#define PXA2X0_DCMD8				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x028c )
#define PXA2X0_DDADR9				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0290 )
#define PXA2X0_DSADR9				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0294 )
#define PXA2X0_DTADR9				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x0298 )
#define PXA2X0_DCMD9				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x029c )
#define PXA2X0_DDADR10				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02a0 )
#define PXA2X0_DSADR10				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02a4 )
#define PXA2X0_DTADR10				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02a8 )
#define PXA2X0_DCMD10				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02ac )
#define PXA2X0_DDADR11				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02b0 )
#define PXA2X0_DSADR11				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02b4 )
#define PXA2X0_DTADR11				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02b8 )
#define PXA2X0_DCMD11				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02bc )
#define PXA2X0_DDADR12				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02c0 )
#define PXA2X0_DSADR12				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02c4 )
#define PXA2X0_DTADR12				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02c8 )
#define PXA2X0_DCMD12				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02cc )
#define PXA2X0_DDADR13				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02d0 )
#define PXA2X0_DSADR13				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02d4 )
#define PXA2X0_DTADR13				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02d8 )
#define PXA2X0_DCMD13				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02dc )
#define PXA2X0_DDADR14				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02e0 )
#define PXA2X0_DSADR14				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02e4 )
#define PXA2X0_DTADR14				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02e8 )
#define PXA2X0_DCMD14				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02ec )
#define PXA2X0_DDADR15				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02f0 )
#define PXA2X0_DSADR15				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02f4 )
#define PXA2X0_DTADR15				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02f8 )
#define PXA2X0_DCMD15				PXA2X0_REGISTER( PXA2X0_DMA_CTL_BASE+0x02fc )

// Full Function UART
#define PXA2X0_FFUART_BASE			( PXA2X0_PERIPHERALS_BASE + 0x0100000 )
#define PXA2X0_FFRBR				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x0000 )
#define PXA2X0_FFTHR				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x0000 )
#define PXA2X0_FFIER				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x0004 )
#define PXA2X0_FFIIR				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x0008 )
#define PXA2X0_FFFCR				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x0008 )
#define PXA2X0_FFLCR				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x000c )
#define PXA2X0_FFMCR				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x0010 )
#define PXA2X0_FFLSR				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x0014 )
#define PXA2X0_FFMSR				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x0018 )
#define PXA2X0_FFSPR				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x001c )
#define PXA2X0_FFISR				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x0020 )
#define PXA2X0_FFDLL				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x0000 )
#define PXA2X0_FFDLH				PXA2X0_REGISTER( PXA2X0_FFUART_BASE+0x0004 )

// Bluetooth UART
#define PXA2X0_BTUART_BASE			( PXA2X0_PERIPHERALS_BASE + 0x0200000 )
#define PXA2X0_BTRBR				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x0000 )
#define PXA2X0_BTTHR				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x0000 )
#define PXA2X0_BTIER				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x0004 )
#define PXA2X0_BTIIR				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x0008 )
#define PXA2X0_BTFCR				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x0008 )
#define PXA2X0_BTLCR				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x000c )
#define PXA2X0_BTMCR				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x0010 )
#define PXA2X0_BTLSR				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x0014 )
#define PXA2X0_BTMSR				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x0018 )
#define PXA2X0_BTSPR				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x001c )
#define PXA2X0_BTISR				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x0020 )
#define PXA2X0_BTDLL				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x0000 )
#define PXA2X0_BTDLH				PXA2X0_REGISTER( PXA2X0_BTUART_BASE+0x0004 )

// I2C
#define PXA2X0_I2C_BASE				( PXA2X0_PERIPHERALS_BASE + 0x0300000 )
#define PXA2X0_IBMR					PXA2X0_REGISTER( PXA2X0_I2C_BASE+0x1680 )
#define PXA2X0_IDBR					PXA2X0_REGISTER( PXA2X0_I2C_BASE+0x1688 )
#define PXA2X0_ICR					PXA2X0_REGISTER( PXA2X0_I2C_BASE+0x1690 )
#define PXA2X0_ISR					PXA2X0_REGISTER( PXA2X0_I2C_BASE+0x1698 )
#define PXA2X0_ISAR					PXA2X0_REGISTER( PXA2X0_I2C_BASE+0x16a0 )


// I2S
#define PXA2X0_I2S_BASE				( PXA2X0_PERIPHERALS_BASE + 0x0400000 )
#define PXA2X0_SACR0				PXA2X0_REGISTER( PXA2X0_I2S_BASE+0x0000 )
#define PXA2X0_SACR1				PXA2X0_REGISTER( PXA2X0_I2S_BASE+0x0004 )
#define PXA2X0_SASR0				PXA2X0_REGISTER( PXA2X0_I2S_BASE+0x000c )
#define PXA2X0_SAIMR				PXA2X0_REGISTER( PXA2X0_I2S_BASE+0x0014 )
#define PXA2X0_SAICR				PXA2X0_REGISTER( PXA2X0_I2S_BASE+0x0018 )
#define PXA2X0_SADIV				PXA2X0_REGISTER( PXA2X0_I2S_BASE+0x0060 )
#define PXA2X0_SADR					PXA2X0_REGISTER( PXA2X0_I2S_BASE+0x0080 )

// AC97
#define PXA2X0_AC97_BASE			( PXA2X0_PERIPHERALS_BASE + 0x0500000 )
#define PXA2X0_POCR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0000 )
#define PXA2X0_PICR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0004 )
#define PXA2X0_MCCR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0008 )
#define PXA2X0_GCR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x000c )
#define PXA2X0_POSR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0010 )
#define PXA2X0_PISR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0014 )
#define PXA2X0_MCSR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0018 )
#define PXA2X0_GSR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x001c )
#define PXA2X0_CAR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0020 )
#define PXA2X0_PCDR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0040 )
#define PXA2X0_MCDR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0060 )
#define PXA2X0_MOCR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0100 )
#define PXA2X0_MICR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0108 )
#define PXA2X0_MOSR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0110 )
#define PXA2X0_MISR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0118 )
#define PXA2X0_MODR					PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0140 )
#define PXA2X0_AC97_PRIM_AUDIO_BASE	PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0200 )
#define PXA2X0_AC97_SEC_AUDIO_BASE	PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0300 )
#define PXA2X0_AC97_PRIM_MODEM_BASE	PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0400 )
#define PXA2X0_AC97_SEC_MODEM_BASE	PXA2X0_REGISTER( PXA2X0_AC97_BASE+0x0500 )

// UDC
#define PXA2X0_UDC_BASE				( PXA2X0_PERIPHERALS_BASE + 0x0600000 )
#define PXA2X0_UDCCR				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0000 )
#define PXA2X0_UDCCS0				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0010 )
#define PXA2X0_UDCCS1				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0014 )
#define PXA2X0_UDCCS2				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0018 )
#define PXA2X0_UDCCS3				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x001c )
#define PXA2X0_UDCCS4				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0020 )
#define PXA2X0_UDCCS5				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0024 )
#define PXA2X0_UDCCS6				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0028 )
#define PXA2X0_UDCCS7				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x002c )
#define PXA2X0_UDCCS8				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0030 )
#define PXA2X0_UDCCS9				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0034 )
#define PXA2X0_UDCCS10				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0038 )
#define PXA2X0_UDCCS11				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x003c )
#define PXA2X0_UDCCS12				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0040 )
#define PXA2X0_UDCCS13				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0044 )
#define PXA2X0_UDCCS14				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0048 )
#define PXA2X0_UDCCS15				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x004c )
#define PXA2X0_UFNRH				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0060 )
#define PXA2X0_UFNRL				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0064 )
#define PXA2X0_UBCR2				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0068 )
#define PXA2X0_UBCR4				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x006c )
#define PXA2X0_UBCR7				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0070 )
#define PXA2X0_UBCR9				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0074 )
#define PXA2X0_UBCR12				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0078 )
#define PXA2X0_UBCR14				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x007c )
#define PXA2X0_UDDR0				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0080 )
#define PXA2X0_UDDR1				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0100 )
#define PXA2X0_UDDR2				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0180 )
#define PXA2X0_UDDR3				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0200 )
#define PXA2X0_UDDR4				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0400 )
#define PXA2X0_UDDR5				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x00a0 )
#define PXA2X0_UDDR6				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0600 )
#define PXA2X0_UDDR7				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0680 )
#define PXA2X0_UDDR8				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0700 )
#define PXA2X0_UDDR9				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0900 )
#define PXA2X0_UDDR10				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x00c0 )
#define PXA2X0_UDDR11				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0b00 )
#define PXA2X0_UDDR12				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0b80 )
#define PXA2X0_UDDR13				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0c00 )
#define PXA2X0_UDDR14				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0e00 )
#define PXA2X0_UDDR15				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x00e0 )
#define PXA2X0_UICR0				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0050 )
#define PXA2X0_UICR1				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0054 )
#define PXA2X0_USIR0				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x0058 )
#define PXA2X0_USIR1				PXA2X0_REGISTER( PXA2X0_UDC_BASE+0x005c )

// Standard UART
#define PXA2X0_STUART_BASE			( PXA2X0_PERIPHERALS_BASE + 0x0700000 )
#define PXA2X0_STRBR				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x0000 )
#define PXA2X0_STTHR				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x0000 )
#define PXA2X0_STIER				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x0004 )
#define PXA2X0_STIIR				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x0008 )
#define PXA2X0_STFCR				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x0008 )
#define PXA2X0_STLCR				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x000c )
#define PXA2X0_STMCR				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x0010 )
#define PXA2X0_STLSR				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x0014 )
#define PXA2X0_STMSR				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x0018 )
#define PXA2X0_STSPR				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x001c )
#define PXA2X0_STISR				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x0020 )
#define PXA2X0_STDLL				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x0000 )
#define PXA2X0_STDLH				PXA2X0_REGISTER( PXA2X0_STUART_BASE+0x0004 )

// ICP
#define PXA2X0_ICP_BASE				( PXA2X0_PERIPHERALS_BASE + 0x0800000 )
#define PXA2X0_ICCR0				PXA2X0_REGISTER( PXA2X0_ICP_BASE+0x0000 )
#define PXA2X0_ICCR1				PXA2X0_REGISTER( PXA2X0_ICP_BASE+0x0004 )
#define PXA2X0_ICCR2				PXA2X0_REGISTER( PXA2X0_ICP_BASE+0x0008 )
#define PXA2X0_ICDR					PXA2X0_REGISTER( PXA2X0_ICP_BASE+0x000c )
#define PXA2X0_ICSR0				PXA2X0_REGISTER( PXA2X0_ICP_BASE+0x0014 )
#define PXA2X0_ICSR1				PXA2X0_REGISTER( PXA2X0_ICP_BASE+0x0018 )

// RTC
#define PXA2X0_RTC_BASE				( PXA2X0_PERIPHERALS_BASE + 0x0900000 )
#define PXA2X0_RCNR					PXA2X0_REGISTER( PXA2X0_RTC_BASE+0x0000 )
#define PXA2X0_RTAR					PXA2X0_REGISTER( PXA2X0_RTC_BASE+0x0004 )
#define PXA2X0_RTSR					PXA2X0_REGISTER( PXA2X0_RTC_BASE+0x0008 )
#define PXA2X0_RTTR					PXA2X0_REGISTER( PXA2X0_RTC_BASE+0x000c )

// OS Timer
#define PXA2X0_OSTIMER_BASE			( PXA2X0_PERIPHERALS_BASE + 0x0a00000 )
#define PXA2X0_OSMR0				PXA2X0_REGISTER( PXA2X0_OSTIMER_BASE+0x0000 )
#define PXA2X0_OSMR1				PXA2X0_REGISTER( PXA2X0_OSTIMER_BASE+0x0004 )
#define PXA2X0_OSMR2				PXA2X0_REGISTER( PXA2X0_OSTIMER_BASE+0x0008 )
#define PXA2X0_OSMR3				PXA2X0_REGISTER( PXA2X0_OSTIMER_BASE+0x000c )
#define PXA2X0_OSCR					PXA2X0_REGISTER( PXA2X0_OSTIMER_BASE+0x0010 )
#define PXA2X0_OSSR					PXA2X0_REGISTER( PXA2X0_OSTIMER_BASE+0x0014 )
#define PXA2X0_OWER					PXA2X0_REGISTER( PXA2X0_OSTIMER_BASE+0x0018 )
#define PXA2X0_OIER					PXA2X0_REGISTER( PXA2X0_OSTIMER_BASE+0x001c )

#define PXA2X0_OSSR_TIMER0			(0x1 << 0)
#define PXA2X0_OSSR_TIMER1			(0x1 << 1)
#define PXA2X0_OSSR_TIMER2			(0x1 << 2)
#define PXA2X0_OSSR_TIMER3			(0x1 << 3)

#define PXA2X0_OIER_TIMER0			(0x1 << 0)
#define PXA2X0_OIER_TIMER1			(0x1 << 1)
#define PXA2X0_OIER_TIMER2			(0x1 << 2)
#define PXA2X0_OIER_TIMER3			(0x1 << 3)

#define PXA2X0_OWER_WME				(0x1 << 0)

// PWM 0
#define PXA2X0_PWM0_BASE			( PXA2X0_PERIPHERALS_BASE + 0x0b00000 )
#define PXA2X0_PWM_CTRL0			PXA2X0_REGISTER( PXA2X0_PWM0_BASE+0x0000 )
#define PXA2X0_PWM_PWDUTY0			PXA2X0_REGISTER( PXA2X0_PWM0_BASE+0x0004 )
#define PXA2X0_PWM_PERVAL0			PXA2X0_REGISTER( PXA2X0_PWM0_BASE+0x0008 )

// PWM 1
#define PXA2X0_PWM1_BASE			( PXA2X0_PERIPHERALS_BASE + 0x0c00000 )
#define PXA2X0_PWM_CTRL1			PXA2X0_REGISTER( PXA2X0_PWM1_BASE+0x0000 )
#define PXA2X0_PWM_PWDUTY1			PXA2X0_REGISTER( PXA2X0_PWM1_BASE+0x0004 )
#define PXA2X0_PWM_PERVAL1			PXA2X0_REGISTER( PXA2X0_PWM1_BASE+0x0008 )

// Interrupt Control
#define PXA2X0_IC_BASE				( PXA2X0_PERIPHERALS_BASE + 0x0d00000 )
#define PXA2X0_ICIP					PXA2X0_REGISTER( PXA2X0_IC_BASE+0x0000 )
#define PXA2X0_ICMR					PXA2X0_REGISTER( PXA2X0_IC_BASE+0x0004 )
#define PXA2X0_ICLR					PXA2X0_REGISTER( PXA2X0_IC_BASE+0x0008 )
#define PXA2X0_ICFP					PXA2X0_REGISTER( PXA2X0_IC_BASE+0x000c )
#define PXA2X0_ICPR					PXA2X0_REGISTER( PXA2X0_IC_BASE+0x0010 )
#define PXA2X0_ICCR					PXA2X0_REGISTER( PXA2X0_IC_BASE+0x0014 )

// GPIO
#define PXA2X0_GPIO_BASE			( PXA2X0_PERIPHERALS_BASE + 0x0e00000 )
#define PXA2X0_GPLR0				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0000 )
#define PXA2X0_GPLR1				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0004 )
#define PXA2X0_GPLR2				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0008 )
#define PXA2X0_GPDR0				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x000c )
#define PXA2X0_GPDR1				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0010 )
#define PXA2X0_GPDR2				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0014 )
#define PXA2X0_GPSR0				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0018 )
#define PXA2X0_GPSR1				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x001c )
#define PXA2X0_GPSR2				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0020 )
#define PXA2X0_GPCR0				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0024 )
#define PXA2X0_GPCR1				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0028 )
#define PXA2X0_GPCR2				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x002c )
#define PXA2X0_GRER0				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0030 )
#define PXA2X0_GRER1				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0034 )
#define PXA2X0_GRER2				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0038 )
#define PXA2X0_GFER0				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x003c )
#define PXA2X0_GFER1				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0040 )
#define PXA2X0_GFER2				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0044 )
#define PXA2X0_GEDR0				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0048 )
#define PXA2X0_GEDR1				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x004c )
#define PXA2X0_GEDR2				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0050 )
#define PXA2X0_GAFR0_L				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0054 )
#define PXA2X0_GAFR0_U				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0058 )
#define PXA2X0_GAFR1_L				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x005c )
#define PXA2X0_GAFR1_U				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0060 )
#define PXA2X0_GAFR2_L				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0064 )
#define PXA2X0_GAFR2_U				PXA2X0_REGISTER( PXA2X0_GPIO_BASE+0x0068 )

// Power Manager and Reset Control
#define PXA2X0_PM_BASE				( PXA2X0_PERIPHERALS_BASE + 0x0f00000 )
#define PXA2X0_PMCR					PXA2X0_REGISTER( PXA2X0_PM_BASE+0x0000 )
#define PXA2X0_PSSR					PXA2X0_REGISTER( PXA2X0_PM_BASE+0x0004 )
#define PXA2X0_PSPR					PXA2X0_REGISTER( PXA2X0_PM_BASE+0x0008 )
#define PXA2X0_PWER					PXA2X0_REGISTER( PXA2X0_PM_BASE+0x000c )
#define PXA2X0_PRER					PXA2X0_REGISTER( PXA2X0_PM_BASE+0x0010 )
#define PXA2X0_PFER					PXA2X0_REGISTER( PXA2X0_PM_BASE+0x0014 )
#define PXA2X0_PEDR					PXA2X0_REGISTER( PXA2X0_PM_BASE+0x0018 )
#define PXA2X0_PCFR					PXA2X0_REGISTER( PXA2X0_PM_BASE+0x001c )
#define PXA2X0_PGSR0				PXA2X0_REGISTER( PXA2X0_PM_BASE+0x0020 )
#define PXA2X0_PGSR1				PXA2X0_REGISTER( PXA2X0_PM_BASE+0x0024 )
#define PXA2X0_PGSR2				PXA2X0_REGISTER( PXA2X0_PM_BASE+0x0028 )
#define PXA2X0_RCSR					PXA2X0_REGISTER( PXA2X0_PM_BASE+0x0030 )

// SSP
#define PXA2X0_SSP_BASE				( PXA2X0_PERIPHERALS_BASE + 0x1000000 )
#define PXA2X0_SSCR0				PXA2X0_REGISTER( PXA2X0_SSP_BASE+0x0000 )
#define PXA2X0_SSCR1				PXA2X0_REGISTER( PXA2X0_SSP_BASE+0x0004 )
#define PXA2X0_SSSR					PXA2X0_REGISTER( PXA2X0_SSP_BASE+0x0008 )
#define PXA2X0_SSITR				PXA2X0_REGISTER( PXA2X0_SSP_BASE+0x000c )
#define PXA2X0_SSDR					PXA2X0_REGISTER( PXA2X0_SSP_BASE+0x0010 )

// MMC Controller
#define PXA2X0_MMC_BASE				( PXA2X0_PERIPHERALS_BASE + 0x1100000 )
#define PXA2X0_MMC_STRPCL			PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0000 )
#define PXA2X0_MMC_STAT				PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0004 )
#define PXA2X0_MMC_CLKRT			PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0008 )
#define PXA2X0_MMC_SPI				PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x000c )
#define PXA2X0_MMC_CMDAT			PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0010 )
#define PXA2X0_MMC_RESTO			PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0014 )
#define PXA2X0_MMC_RDTO				PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0018 )
#define PXA2X0_MMC_BLKLEN			PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x001c )
#define PXA2X0_MMC_NOB				PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0020 )
#define PXA2X0_MMC_PRTBUF			PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0024 )
#define PXA2X0_MMC_I_MASK			PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0028 )
#define PXA2X0_MMC_I_REG			PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x002c )
#define PXA2X0_MMC_CMD				PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0030 )
#define PXA2X0_MMC_ARGH				PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0034 )
#define PXA2X0_MMC_ARGL				PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0038 )
#define PXA2X0_MMC_RES				PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x003c )
#define PXA2X0_MMC_RXFIFO			PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0040 )
#define PXA2X0_MMC_TXFIFO			PXA2X0_REGISTER( PXA2X0_MMC_BASE+0x0044 )

// Clocks Manager
#define PXA2X0_CLK_BASE				( PXA2X0_PERIPHERALS_BASE + 0x1300000 )
#define PXA2X0_CCCR					PXA2X0_REGISTER( PXA2X0_CLK_BASE+0x0000 )
#define PXA2X0_CKEN					PXA2X0_REGISTER( PXA2X0_CLK_BASE+0x0004 )
#define PXA2X0_CSCC					PXA2X0_REGISTER( PXA2X0_CLK_BASE+0x0008 )
	//	Memory Clock
#define PXA2X0_CCCR_L09	(0x1f)
#define PXA2X0_CCCR_L27	(0x01)
#define PXA2X0_CCCR_L32	(0x02)
#define PXA2X0_CCCR_L36	(0x03)
#define PXA2X0_CCCR_L40	(0x04)
#define PXA2X0_CCCR_L45	(0x05)
	//	Memory-to-Run-Mode multiplier
#define PXA2X0_CCCR_M1	(0x1 << 5)
#define PXA2X0_CCCR_M2	(0x2 << 5)
#define PXA2X0_CCCR_M4	(0x3 << 5)
	//	Run-Mode-to-Turbo-Mode multiplier
#define PXA2X0_CCCR_N10	(0x2 << 7)	// N=1.0
#define PXA2X0_CCCR_N15	(0x3 << 7)	// N=1.5
#define PXA2X0_CCCR_N20	(0x4 << 7)	// N=2.0
#define PXA2X0_CCCR_N25	(0x5 << 7)	// N=2.5
#define PXA2X0_CCCR_N30	(0x6 << 7)	// N=3.0


// LCD Controller
#define PXA2X0_LCCR0				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0000 )
#define PXA2X0_LCCR1				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0004 )
#define PXA2X0_LCCR2				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0008 )
#define PXA2X0_LCCR3				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x000c )
#define PXA2X0_FDADR0				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0200 )
#define PXA2X0_FSADR0				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0204 )
#define PXA2X0_FIDR0				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0208 )
#define PXA2X0_LDCMD0				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x020c )
#define PXA2X0_FDADR1				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0210 )
#define PXA2X0_FSADR1				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0214 )
#define PXA2X0_FIDR1				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0218 )
#define PXA2X0_LDCMD1				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x021c )
#define PXA2X0_FBR0					PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0020 )
#define PXA2X0_FBR1					PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0024 )
#define PXA2X0_LCSR					PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0038 )
#define PXA2X0_LIIDR				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x003c )
#define PXA2X0_TRGBR				PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0040 )
#define PXA2X0_TCR					PXA2X0_REGISTER( PXA2X0_LCD_BASE+0x0044 )

// Memory Controller
#define PXA2X0_MDCNFG				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0000 )
#define PXA2X0_MDREFR				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0004 )
#define PXA2X0_MSC0					PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0008 )
#define PXA2X0_MSC1					PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x000c )
#define PXA2X0_MSC2					PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0010 )
#define PXA2X0_MECR					PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0014 )
#define PXA2X0_SXCNFG				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x001c )
#define PXA2X0_SXMRS				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0024 )
#define PXA2X0_MCMEM0				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0028 )
#define PXA2X0_MCMEM1				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x002c )
#define PXA2X0_MCATT0				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0030 )
#define PXA2X0_MCATT1				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0034 )
#define PXA2X0_MCIO0				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0038 )
#define PXA2X0_MCIO1				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x003c )
#define PXA2X0_MDMRS				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0040 )
#define PXA2X0_BOOT_DEF				PXA2X0_REGISTER( PXA2X0_MEMORY_CTL_BASE+0x0044 )

// UART definitions
//	Register offsets
#define PXA2X0_UART_RBR				( 0x0000 )	// Receive Buffer Register
#define PXA2X0_UART_THR				( 0x0000 )	// Transmit Hold Register
#define PXA2X0_UART_IER				( 0x0004 )	// Interrupt Enable Register
#define PXA2X0_UART_IIR				( 0x0008 )	// Interrupt ID Register
#define PXA2X0_UART_FCR				( 0x0008 )
#define PXA2X0_UART_LCR				( 0x000c )
#define PXA2X0_UART_MCR				( 0x0010 )
#define PXA2X0_UART_LSR				( 0x0014 )
#define PXA2X0_UART_MSR				( 0x0018 )
#define PXA2X0_UART_SPR				( 0x001c )
#define PXA2X0_UART_ISR				( 0x0020 )
#define PXA2X0_UART_DLL				( 0x0000 )
#define PXA2X0_UART_DLH				( 0x0004 )


// The interrupt enable register bits.
#define PXA2X0_UART_IER_RAVIE	0x01            // enable received data available irq
#define PXA2X0_UART_IER_TIE		0x02            // enable transmit data request interrupt
#define PXA2X0_UART_IER_RLSE	0x04            // enable receiver line status irq
#define PXA2X0_UART_IER_MIE		0x08            // enable modem status interrupt
#define PXA2X0_UART_IER_RTOIE	0x10            // enable Rx timeout interrupt
#define PXA2X0_UART_IER_NRZE	0x20            // enable NRZ coding
#define PXA2X0_UART_IER_UUE		0x40            // enable the UART unit
#define PXA2X0_UART_IER_DMAE	0x80            // enable DMA requests

// The interrupt identification register bits.
#define PXA2X0_UART_IIR_IP		0x01            // 0 if interrupt pending
#define PXA2X0_UART_Tx			0x02
#define PXA2X0_UART_Rx			0x04
#define PXA2X0_UART_IIR_ID_MASK	0xff            // mask for interrupt ID bits

// The line status register bits.
#define PXA2X0_UART_LSR_DR      0x01			// data ready
#define PXA2X0_UART_LSR_OE      0x02			// overrun error
#define PXA2X0_UART_LSR_PE      0x04			// parity error
#define PXA2X0_UART_LSR_FE      0x08			// framing error
#define PXA2X0_UART_LSR_BI      0x10			// break interrupt
#define PXA2X0_UART_LSR_THRE    0x20			// transmitter holding register empty
#define PXA2X0_UART_LSR_TEMT    0x40			// transmitter holding and Tx shift registers empty
#define PXA2X0_UART_LSR_ERR     0x80			// any error condition (FIFOE)

// The modem status register bits.
#define PXA2X0_UART_MSR_DCTS	0x01			// delta clear to send
#define PXA2X0_UART_MSR_DDSR	0x02			// delta data set ready
#define PXA2X0_UART_MSR_TERI	0x04			// trailing edge ring indicator
#define PXA2X0_UART_MSR_DDCD	0x08			// delta data carrier detect
#define PXA2X0_UART_MSR_CTS		0x10			// clear to send
#define PXA2X0_UART_MSR_DSR		0x20			// data set ready
#define PXA2X0_UART_MSR_RI		0x40			// ring indicator
#define PXA2X0_UART_MSR_DCD		0x80			// data carrier detect

// The line control register bits.
#define PXA2X0_UART_LCR_WLS0	0x01			// word length select bit 0
#define PXA2X0_UART_LCR_WLS1	0x02			// word length select bit 1
#define PXA2X0_UART_LCR_STB		0x04			// number of stop bits
#define PXA2X0_UART_LCR_PEN		0x08			// parity enable
#define PXA2X0_UART_LCR_EPS		0x10			// even parity select
#define PXA2X0_UART_LCR_SP		0x20			// stick parity
#define PXA2X0_UART_LCR_SB		0x40			// set break
#define PXA2X0_UART_LCR_DLAB	0x80			// divisor latch access bit

// The FIFO control register
#define PXA2X0_UART_FCR_FCR0	0x01			// enable xmit and rcvr fifos
#define PXA2X0_UART_FCR_FCR1	0x02			// clear RCVR FIFO
#define PXA2X0_UART_FCR_FCR2	0x04			// clear XMIT FIFO
#define PXA2X0_UART_FCR_ITL0	0x40			// Interrupt trigger level (ITL) bit 0
#define PXA2X0_UART_FCR_ITL1	0x80			// Interrupt trigger level (ITL) bit 1
#define PXA2X0_UART_FCR_ITL_1BYTE   0x00		// i byte triggers interrupt

#define PXA2X0_UART_BAUD_RATE_DIVISOR(x)         ((14745600/(16*(x))))

#endif // CYGONCE_HAL_ARM_PXA2X0_H
// EOF hal_pxa2x0.h

