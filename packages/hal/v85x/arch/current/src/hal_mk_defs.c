//==========================================================================
//
//      hal_mk_defs.c
//
//      HAL (architecture) "make defs" program
//
//==========================================================================
//####COPYRIGHTBEGIN####
//                                                                          
// -------------------------------------------                              
// The contents of this file are subject to the Red Hat eCos Public License 
// Version 1.1 (the "License"); you may not use this file except in         
// compliance with the License.  You may obtain a copy of the License at    
// http://www.redhat.com/                                                   
//                                                                          
// Software distributed under the License is distributed on an "AS IS"      
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied.  See the 
// License for the specific language governing rights and limitations under 
// the License.                                                             
//                                                                          
// The Original Code is eCos - Embedded Configurable Operating System,      
// released September 30, 1998.                                             
//                                                                          
// The Initial Developer of the Original Code is Red Hat.                   
// Portions created by Red Hat are                                          
// Copyright (C) 1998, 1999, 2000 Red Hat, Inc.                             
// All Rights Reserved.                                                     
// -------------------------------------------                              
//                                                                          
//####COPYRIGHTEND####
//==========================================================================
//#####DESCRIPTIONBEGIN####
//
// Author(s):    gthomas
// Contributors: gthomas, jskov
// Date:         2000-02-21
// Purpose:      SH architecture dependent definition generator
// Description:  This file contains code that can be compiled by the target
//               compiler and used to generate machine specific definitions
//               suitable for use in assembly code.
//
//####DESCRIPTIONEND####
//
//==========================================================================

#include <pkgconf/hal.h>

#include <cyg/hal/hal_arch.h>           // HAL header
#include <cyg/hal/hal_intr.h>           // HAL header
#ifdef CYGPKG_KERNEL
# include <pkgconf/kernel.h>
# include <cyg/kernel/instrmnt.h>
#endif

/*
 * This program is used to generate definitions needed by
 * assembly language modules.
 *
 * This technique was first used in the OSF Mach kernel code:
 * generate asm statements containing #defines,
 * compile this file to assembler, and then extract the
 * #defines from the assembly-language output.
 */

#define DEFINE(sym, val) \
        asm volatile("\n\t.equ\t" #sym ",%0" : : "i" (val))

int
main(void)
{
    // setjmp/longjmp buffer
    DEFINE(CYGARC_JMPBUF_SP, offsetof(hal_jmp_buf_t, sp));
    DEFINE(CYGARC_JMPBUF_GP, offsetof(hal_jmp_buf_t, gp));
    DEFINE(CYGARC_JMPBUF_TP, offsetof(hal_jmp_buf_t, tp));
    DEFINE(CYGARC_JMPBUF_R1, offsetof(hal_jmp_buf_t, r1));
    DEFINE(CYGARC_JMPBUF_R2, offsetof(hal_jmp_buf_t, r2));
    DEFINE(CYGARC_JMPBUF_R4, offsetof(hal_jmp_buf_t, r4));
    DEFINE(CYGARC_JMPBUF_R5, offsetof(hal_jmp_buf_t, r5));
    DEFINE(CYGARC_JMPBUF_R20, offsetof(hal_jmp_buf_t, r20));
    DEFINE(CYGARC_JMPBUF_R21, offsetof(hal_jmp_buf_t, r21));
    DEFINE(CYGARC_JMPBUF_R22, offsetof(hal_jmp_buf_t, r22));
    DEFINE(CYGARC_JMPBUF_R23, offsetof(hal_jmp_buf_t, r23));
    DEFINE(CYGARC_JMPBUF_R24, offsetof(hal_jmp_buf_t, r24));
    DEFINE(CYGARC_JMPBUF_R25, offsetof(hal_jmp_buf_t, r25));
    DEFINE(CYGARC_JMPBUF_R26, offsetof(hal_jmp_buf_t, r26));
    DEFINE(CYGARC_JMPBUF_R27, offsetof(hal_jmp_buf_t, r27));
    DEFINE(CYGARC_JMPBUF_R28, offsetof(hal_jmp_buf_t, r28));
    DEFINE(CYGARC_JMPBUF_FP, offsetof(hal_jmp_buf_t, fp));
    DEFINE(CYGARC_JMPBUF_EP, offsetof(hal_jmp_buf_t, ep));
    DEFINE(CYGARC_JMPBUF_LP, offsetof(hal_jmp_buf_t, lp));

    DEFINE(CYGARC_JMPBUF_SIZE, sizeof(hal_jmp_buf_t));

    // Exception/interrupt/context save buffer
    DEFINE(CYGARC_REG_R1, offsetof(HAL_SavedRegisters, d[1]));
    DEFINE(CYGARC_REG_R2, offsetof(HAL_SavedRegisters, d[2]));
    DEFINE(CYGARC_REG_R3, offsetof(HAL_SavedRegisters, d[3]));
    DEFINE(CYGARC_REG_SP, offsetof(HAL_SavedRegisters, d[3]));
    DEFINE(CYGARC_REG_R4, offsetof(HAL_SavedRegisters, d[4]));
    DEFINE(CYGARC_REG_R5, offsetof(HAL_SavedRegisters, d[5]));
    DEFINE(CYGARC_REG_R6, offsetof(HAL_SavedRegisters, d[6]));
    DEFINE(CYGARC_REG_R7, offsetof(HAL_SavedRegisters, d[7]));
    DEFINE(CYGARC_REG_R8, offsetof(HAL_SavedRegisters, d[8]));
    DEFINE(CYGARC_REG_R9, offsetof(HAL_SavedRegisters, d[9]));
    DEFINE(CYGARC_REG_R10, offsetof(HAL_SavedRegisters, d[10]));
    DEFINE(CYGARC_REG_R11, offsetof(HAL_SavedRegisters, d[11]));
    DEFINE(CYGARC_REG_R12, offsetof(HAL_SavedRegisters, d[12]));
    DEFINE(CYGARC_REG_R13, offsetof(HAL_SavedRegisters, d[13]));
    DEFINE(CYGARC_REG_R14, offsetof(HAL_SavedRegisters, d[14]));
    DEFINE(CYGARC_REG_R15, offsetof(HAL_SavedRegisters, d[15]));
    DEFINE(CYGARC_REG_R16, offsetof(HAL_SavedRegisters, d[16]));
    DEFINE(CYGARC_REG_R17, offsetof(HAL_SavedRegisters, d[17]));
    DEFINE(CYGARC_REG_R18, offsetof(HAL_SavedRegisters, d[18]));
    DEFINE(CYGARC_REG_R19, offsetof(HAL_SavedRegisters, d[19]));
    DEFINE(CYGARC_REG_R20, offsetof(HAL_SavedRegisters, d[20]));
    DEFINE(CYGARC_REG_R21, offsetof(HAL_SavedRegisters, d[21]));
    DEFINE(CYGARC_REG_R22, offsetof(HAL_SavedRegisters, d[22]));
    DEFINE(CYGARC_REG_R23, offsetof(HAL_SavedRegisters, d[23]));
    DEFINE(CYGARC_REG_R24, offsetof(HAL_SavedRegisters, d[24]));
    DEFINE(CYGARC_REG_R25, offsetof(HAL_SavedRegisters, d[25]));
    DEFINE(CYGARC_REG_R26, offsetof(HAL_SavedRegisters, d[26]));
    DEFINE(CYGARC_REG_R27, offsetof(HAL_SavedRegisters, d[27]));
    DEFINE(CYGARC_REG_R28, offsetof(HAL_SavedRegisters, d[28]));
    DEFINE(CYGARC_REG_R29, offsetof(HAL_SavedRegisters, d[29]));
    DEFINE(CYGARC_REG_R30, offsetof(HAL_SavedRegisters, d[30]));
    DEFINE(CYGARC_REG_R31, offsetof(HAL_SavedRegisters, d[31]));
    DEFINE(CYGARC_REG_EP, offsetof(HAL_SavedRegisters, d[30]));
    DEFINE(CYGARC_REG_LP, offsetof(HAL_SavedRegisters, d[31]));
    DEFINE(CYGARC_REG_PSW, offsetof(HAL_SavedRegisters, psw));
    DEFINE(CYGARC_REG_PC, offsetof(HAL_SavedRegisters, pc));

    // Below only saved on exceptions/interrupts
    DEFINE(CYGARC_REG_CAUSE, offsetof(HAL_SavedRegisters, cause));
    DEFINE(CYGARC_REG_VECTOR, offsetof(HAL_SavedRegisters, vector));

    DEFINE(CYGARC_EXCEPTION_FRAME_SIZE, sizeof(HAL_SavedRegisters));

    // Some other exception related definitions
    DEFINE(CYGNUM_HAL_ISR_MIN, CYGNUM_HAL_ISR_MIN);
    DEFINE(CYGNUM_HAL_ISR_COUNT, CYGNUM_HAL_ISR_COUNT);
    DEFINE(CYGNUM_HAL_VSR_MAX, CYGNUM_HAL_VSR_MAX);
    DEFINE(CYGNUM_HAL_VSR_COUNT, CYGNUM_HAL_VSR_COUNT);
    DEFINE(CYGNUM_HAL_EXCEPTION_COUNT, CYGNUM_HAL_EXCEPTION_COUNT);
    DEFINE(CYGNUM_HAL_VECTOR_WATCHDOG_TIMER, CYGNUM_HAL_VECTOR_WATCHDOG_TIMER);
    DEFINE(CYGNUM_HAL_VECTOR_TRAP0, CYGNUM_HAL_VECTOR_TRAP0);
    DEFINE(CYGNUM_HAL_VECTOR_TRAP1, CYGNUM_HAL_VECTOR_TRAP1);
    DEFINE(CYGNUM_HAL_VECTOR_ILLEGAL_OPCODE, CYGNUM_HAL_VECTOR_ILLEGAL_OPCODE);
    
    DEFINE(CYGARC_PSW_ID, CYGARC_PSW_ID);
    DEFINE(CYGARC_PSW_EP, CYGARC_PSW_EP);
    DEFINE(CYGARC_PSW_NP, CYGARC_PSW_NP);

#ifdef CYGPKG_KERNEL
    DEFINE(RAISE_INTR, CYG_INSTRUMENT_CLASS_INTR|CYG_INSTRUMENT_EVENT_INTR_RAISE);
#endif

    // Variant definitions - want these to be included instead.
}

//--------------------------------------------------------------------------
// EOF hal_mk_defs.c
