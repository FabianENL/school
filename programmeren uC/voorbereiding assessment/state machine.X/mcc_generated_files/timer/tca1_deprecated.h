/**
 * TCA1 Generated Driver API Header File
 * 
 * @file tca1.h
 * 
 * @ingroup tca1_split
 * 
 * @brief This file contains the deprecated macros or APIs for the TCA1 driver.
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

#ifndef TCA1_DEPRECATED_H
#define TCA1_DEPRECATED_H

#warning "The tca1_deprecated.h file contains the deprecated macros or functions. Replace the deprecated macro or functions with the recommended alternative."

/**
 * @misradeviation{@advisory,2.5}
 * MCC Melody drivers provide macros that can be added to an application. 
 * It depends on the application whether a macro is used or not. 
 */
 
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_ReadHighCount will be deprecated in the future release. Use TCA1_HighCounterGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_ReadHighCount TCA1_HighCounterGet
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_WriteHighCount will be deprecated in the future release. Use TCA1_HighCounterSet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_WriteHighCount TCA1_HighCounterSet
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_ReadLowCount will be deprecated in the future release. Use TCA1_LowCounterGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_ReadLowCount TCA1_LowCounterGet
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_WriteLowCount will be deprecated in the future release. Use TCA1_LowCounterSet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_WriteLowCount TCA1_LowCounterSet
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_ClearHUNFInterruptFlag will be deprecated in the future release. Use TCA1_HUNFInterruptFlagClear instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_ClearHUNFInterruptFlag TCA1_HUNFInterruptFlagClear
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_IsHUNFInterruptFlagSet will be deprecated in the future release. Use TCA1_HUNFInterruptStatusGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_IsHUNFInterruptFlagSet TCA1_HUNFInterruptStatusGet
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_ClearLUNFInterruptFlag will be deprecated in the future release. Use TCA1_LUNFInterruptFlagClear instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_ClearLUNFInterruptFlag TCA1_LUNFInterruptFlagClear
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_IsLUNFInterruptFlagSet will be deprecated in the future release. Use TCA1_LUNFInterruptStatusGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_IsLUNFInterruptFlagSet TCA1_LUNFInterruptStatusGet
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_ClearLCMP0InterruptFlag will be deprecated in the future release. Use TCA1_LCMP0InterruptFlagClear instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_ClearLCMP0InterruptFlag TCA1_LCMP0InterruptFlagClear
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_IsLCMP0InterruptFlagSet will be deprecated in the future release. Use TCA1_LCMP0InterruptStatusGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_IsLCMP0InterruptFlagSet TCA1_LCMP0InterruptStatusGet
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_ClearLCMP1InterruptFlag will be deprecated in the future release. Use TCA1_LCMP1InterruptFlagClear instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_ClearLCMP1InterruptFlag TCA1_LCMP1InterruptFlagClear
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_IsLCMP1InterruptFlagSet will be deprecated in the future release. Use TCA1_LCMP1InterruptStatusGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_IsLCMP1InterruptFlagSet TCA1_LCMP1InterruptStatusGet
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_ClearHUNFInterruptFlag will be deprecated in the future release. Use TCA1_LCMP2InterruptFlagClear instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_ClearLCMP2InterruptFlag TCA1_LCMP2InterruptFlagClear
/**
 * @ingroup tca1_split
 * @brief Defines the Custom Name for the \ref TCA1_CounterGet API. 
 *        The TCA1_IsLCMP2InterruptFlagSet will be deprecated in the future release. Use TCA1_LCMP2InterruptStatusGet instead.
 */
/* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_IsLCMP2InterruptFlagSet TCA1_LCMP2InterruptStatusGet

#endif //TCA1_DEPRECATED_H