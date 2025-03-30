/**
 * TCA1 Generated Driver File
 *
 * @file tca1.c
 *
 * @ingroup tca1_split
 *
 * @brief This file contains the API implementations for TCA1 module in Split (8-bit) mode.
 *
 * @version TCA1 Driver Version 3.0.0
 *
 * @version Package Version 7.0.0
 */
/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#include "../tca1.h"

static void (*TCA1_HCNT_Callback)(void) = NULL;
static void (*TCA1_LCMP0_Callback)(void) = NULL;
static void (*TCA1_LCMP1_Callback)(void) = NULL;
static void (*TCA1_LCMP2_Callback)(void) = NULL;
static void (*TCA1_LCNT_Callback)(void) = NULL;

void TCA1_Initialize(void)  
{
    TCA1.SPLIT.CTRLD = (1 << TCA_SPLIT_SPLITM_bp);  // SPLITM enabled

    TCA1.SPLIT.CTRLB = (1 << TCA_SPLIT_HCMP0EN_bp)   // HCMP0EN enabled
        | (0 << TCA_SPLIT_HCMP1EN_bp)   // HCMP1EN disabled
        | (0 << TCA_SPLIT_HCMP2EN_bp)   // HCMP2EN disabled
        | (0 << TCA_SPLIT_LCMP0EN_bp)   // LCMP0EN disabled
        | (0 << TCA_SPLIT_LCMP1EN_bp)   // LCMP1EN disabled
        | (0 << TCA_SPLIT_LCMP2EN_bp);  // LCMP2EN disabled

    TCA1.SPLIT.CTRLC = (0 << TCA_SPLIT_HCMP0OV_bp)   // HCMP0OV disabled
        | (0 << TCA_SPLIT_HCMP1OV_bp)   // HCMP1OV disabled
        | (0 << TCA_SPLIT_HCMP2OV_bp)   // HCMP2OV disabled
        | (0 << TCA_SPLIT_LCMP0OV_bp)   // LCMP0OV disabled
        | (0 << TCA_SPLIT_LCMP1OV_bp)   // LCMP1OV disabled
        | (0 << TCA_SPLIT_LCMP2OV_bp);  // LCMP2OV disabled

    TCA1.SPLIT.CTRLECLR = (TCA_SPLIT_CMD_NONE_gc)   // CMD NONE
        | (TCA_SPLIT_CMDEN_NONE_gc);  // CMDEN NONE

    TCA1.SPLIT.CTRLESET = (TCA_SPLIT_CMD_NONE_gc)   // CMD NONE
        | (TCA_SPLIT_CMDEN_NONE_gc);  // CMDEN NONE

    TCA1.SPLIT.DBGCTRL = (0 << TCA_SPLIT_DBGRUN_bp);  // DBGRUN disabled

    TCA1.SPLIT.HCMP0 = 0x0;  // HCMP0 0x0

    TCA1.SPLIT.HCMP1 = 0x0;  // HCMP1 0x0

    TCA1.SPLIT.HCMP2 = 0x0;  // HCMP2 0x0

    TCA1.SPLIT.HCNT = 0x0;  // HCNT 0x0

    TCA1.SPLIT.HPER = 0xFFU;  // HPER 0xFF

    TCA1.SPLIT.INTCTRL = (0 << TCA_SPLIT_HUNF_bp)   // HUNF disabled
        | (0 << TCA_SPLIT_LCMP0_bp)   // LCMP0 disabled
        | (0 << TCA_SPLIT_LCMP1_bp)   // LCMP1 disabled
        | (0 << TCA_SPLIT_LCMP2_bp)   // LCMP2 disabled
        | (0 << TCA_SPLIT_LUNF_bp);  // LUNF disabled

    TCA1.SPLIT.INTFLAGS = (0 << TCA_SPLIT_HUNF_bp)   // HUNF disabled
        | (0 << TCA_SPLIT_LCMP0_bp)   // LCMP0 disabled
        | (0 << TCA_SPLIT_LCMP1_bp)   // LCMP1 disabled
        | (0 << TCA_SPLIT_LCMP2_bp)   // LCMP2 disabled
        | (0 << TCA_SPLIT_LUNF_bp);  // LUNF disabled

    TCA1.SPLIT.LCMP0 = 0x0;  // LCMP0 0x0

    TCA1.SPLIT.LCMP1 = 0x0;  // LCMP1 0x0

    TCA1.SPLIT.LCMP2 = 0x0;  // LCMP2 0x0

    TCA1.SPLIT.LCNT = 0x0;  // LCNT 0x0

    TCA1.SPLIT.LPER = 0xFFU;  // LPER 0xFF

    TCA1.SPLIT.CTRLA = (TCA_SPLIT_CLKSEL_DIV1_gc)   // CLKSEL DIV1
        | (1 << TCA_SPLIT_ENABLE_bp)   // ENABLE enabled
        | (0 << TCA_SPLIT_RUNSTDBY_bp);  // RUNSTDBY disabled
}

void TCA1_Deinitialize(void)
{
    TCA1.SPLIT.CTRLA &= ~TCA_SPLIT_ENABLE_bm;

    TCA1.SPLIT.CTRLA = 0x0;
    TCA1.SPLIT.CTRLB = 0x0;
    TCA1.SPLIT.CTRLC = 0x0;
    TCA1.SPLIT.CTRLD = 0x0;

    TCA1.SPLIT.CTRLESET = 0x0;
    TCA1.SPLIT.CTRLECLR = 0x0;    
    
    TCA1.SPLIT.LCNT = 0x0;
    TCA1.SPLIT.LPER = 0xFFU;
    TCA1.SPLIT.HCNT = 0x0;
    TCA1.SPLIT.HPER = 0xFFU;
    TCA1.SPLIT.LCMP0 = 0x0;
    TCA1.SPLIT.LCMP1 = 0x0;
    TCA1.SPLIT.LCMP2 = 0x0;
    TCA1.SPLIT.HCMP0 = 0x0;
    TCA1.SPLIT.HCMP1 = 0x0;
    TCA1.SPLIT.HCMP2 = 0x0;

    TCA1.SPLIT.INTCTRL = 0x0;
    TCA1.SPLIT.INTFLAGS = ~0x0;
}

void TCA1_Start(void)
{
    TCA1.SPLIT.CTRLA |= TCA_SPLIT_ENABLE_bm;
}

void TCA1_Stop(void)
{
    TCA1.SPLIT.CTRLA &= ~TCA_SPLIT_ENABLE_bm;
}

void TCA1_LowCounterSet(uint8_t timerVal)
{
    TCA1.SPLIT.LCNT = timerVal;
}

uint8_t TCA1_LowCounterGet(void)
{
    return TCA1.SPLIT.LCNT;
}

void TCA1_HighCounterSet(uint8_t timerVal)
{
    TCA1.SPLIT.HCNT = timerVal;
}

uint8_t TCA1_HighCounterGet(void)
{
    return TCA1.SPLIT.HCNT;
}

void TCA1_HighPeriodSet(uint8_t periodVal)
{
    TCA1.SPLIT.HPER = periodVal;
}

void TCA1_LowPeriodSet(uint8_t periodVal)
{
    TCA1.SPLIT.LPER = periodVal;
}

uint8_t TCA1_HighPeriodGet(void)
{
    return TCA1.SPLIT.HPER;
}

uint8_t TCA1_LowPeriodGet(void)
{
    return TCA1.SPLIT.LPER;
}

uint8_t TCA1_MaxCountGet(void)
{
    return TCA1_MAX_COUNT;
}

void TCA1_HUNFInterruptFlagClear(void)
{
    TCA1.SPLIT.INTFLAGS = TCA_SPLIT_HUNF_bm; /* Clear High-Byte Underflow Interrupt Flag */
}

bool TCA1_HUNFInterruptStatusGet(void)
{
    return ((TCA1.SPLIT.INTFLAGS & TCA_SPLIT_HUNF_bm) > 0);
}

void TCA1_LUNFInterruptFlagClear(void)
{
    TCA1.SPLIT.INTFLAGS = TCA_SPLIT_LUNF_bm; /* Clear Low-Byte Underflow Interrupt Flag */
}

bool TCA1_LUNFInterruptStatusGet(void)
{
    return ((TCA1.SPLIT.INTFLAGS & TCA_SPLIT_LUNF_bm) > 0);
}

void TCA1_LCMP0InterruptFlagClear(void)
{
    TCA1.SPLIT.INTFLAGS = TCA_SPLIT_LCMP0_bm; /* Clear Low-Byte Compare Channel-0 Interrupt Flag */
}

bool TCA1_LCMP0InterruptStatusGet(void)
{
    return ((TCA1.SPLIT.INTFLAGS & TCA_SPLIT_LCMP0_bm) > 0);
}

void TCA1_LCMP1InterruptFlagClear(void)
{
    TCA1.SPLIT.INTFLAGS = TCA_SPLIT_LCMP1_bm; /* Clear Low-Byte Compare Channel-1 Interrupt Flag */
}

bool TCA1_LCMP1InterruptStatusGet(void)
{
    return ((TCA1.SPLIT.INTFLAGS & TCA_SPLIT_LCMP1_bm) > 0);
}

void TCA1_LCMP2InterruptFlagClear(void)
{
    TCA1.SPLIT.INTFLAGS = TCA_SPLIT_LCMP2_bm; /* Clear Low-Byte Compare Channel-2 Interrupt Flag */
}

bool TCA1_LCMP2InterruptStatusGet(void)
{
    return ((TCA1.SPLIT.INTFLAGS & TCA_SPLIT_LCMP2_bm) > 0);
}

void TCA1_Tasks(void)
{
    if(0 != (TCA1.SPLIT.INTFLAGS & TCA_SPLIT_HUNF_bm))
    {
        if(NULL != TCA1_HCNT_Callback)
        {
            (*TCA1_HCNT_Callback)();
        }
        TCA1.SPLIT.INTFLAGS = TCA_SPLIT_HUNF_bm;
    }
    
    if(0 != (TCA1.SPLIT.INTFLAGS & TCA_SPLIT_LCMP0_bm))
    {
        if(NULL != TCA1_LCMP0_Callback)
        {
            (*TCA1_LCMP0_Callback)();
        }
        TCA1.SPLIT.INTFLAGS = TCA_SPLIT_LCMP0_bm;
    }
    
    if(0 != (TCA1.SPLIT.INTFLAGS & TCA_SPLIT_LCMP1_bm))
    {
        if(NULL != TCA1_LCMP1_Callback)
        {
            (*TCA1_LCMP1_Callback)();
        }
        TCA1.SPLIT.INTFLAGS = TCA_SPLIT_LCMP1_bm;
    }
    
    if(0 != (TCA1.SPLIT.INTFLAGS & TCA_SPLIT_LCMP2_bm))
    {
        if(NULL != TCA1_LCMP2_Callback)
        {
            (*TCA1_LCMP2_Callback)();
        }
        TCA1.SPLIT.INTFLAGS = TCA_SPLIT_LCMP2_bm;
    }
    
    if(0 != (TCA1.SPLIT.INTFLAGS & TCA_SPLIT_LUNF_bm))
    {
         if(NULL != TCA1_LCNT_Callback)
        {
            (*TCA1_LCNT_Callback)();
        }
        TCA1.SPLIT.INTFLAGS = TCA_SPLIT_LUNF_bm;
    }
}

void TCA1_HighCountCallbackRegister(TCA1_cb_t CallbackHandler)
{
    TCA1_HCNT_Callback = CallbackHandler;
}

void TCA1_LowCompare0CallbackRegister(TCA1_cb_t CallbackHandler)
{
    TCA1_LCMP0_Callback = CallbackHandler;
}

void TCA1_LowCompare1CallbackRegister(TCA1_cb_t CallbackHandler)
{
    TCA1_LCMP1_Callback = CallbackHandler;
}

void TCA1_LowCompare2CallbackRegister(TCA1_cb_t CallbackHandler)
{
    TCA1_LCMP2_Callback = CallbackHandler;
}

void TCA1_LowCountCallbackRegister(TCA1_cb_t CallbackHandler)
{
    TCA1_LCNT_Callback = CallbackHandler;
}