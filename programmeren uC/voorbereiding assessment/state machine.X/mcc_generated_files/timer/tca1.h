/**
 * TCA1 Generated Driver API Header File
 *
 * @file tca1.h
 *
 * @defgroup tca1_split TCA1 in Split Mode
 *
 * @brief This file contains API prototypes for the TCA1 driver in Split (8-bit) mode.
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

#ifndef TCA1_H_INCLUDED
#define TCA1_H_INCLUDED

#include <stdint.h>
#include <stdbool.h>
#include "../system/utils/compiler.h"
#include "./tca1_deprecated.h"

/**
 * @misradeviation{@advisory,2.5}
 * MCC Melody drivers provide macros that can be added to an application. 
 * It depends on the application whether a macro is used or not. 
 */

/**
 * @ingroup tca1_split
 * @brief Defines the maximum count of the timer.
 */
#define TCA1_MAX_COUNT (255U)
/**
 * @ingroup tca1_split
 * @brief Defines the timer prescaled clock frequency in hertz.
 */
 /* cppcheck-suppress misra-c2012-2.5 */  
#define TCA1_CLOCK_FREQ (4000000UL)

/**
 * @ingroup tca1_split
 * @typedef TCA1_cb_t
 * @brief Function pointer to the callback function called by TCA while operating in Split mode.
 *        The default value is set to NULL, which means that no callback function will be used.
 */
typedef void (*TCA1_cb_t)(void);  

/**
 * @ingroup tca1_split
 * @brief Initializes the TCA1 module.
 * @param None.
 * @return None.
 */ 
void TCA1_Initialize(void);

/**
 * @ingroup tca1_split
 * @brief Deinitializes the TCA1 module.
 * @param None.
 * @return None.
 */
void TCA1_Deinitialize(void);

/**
 * @ingroup tca1_split
 * @brief Starts the TCA1.
 * @param None.
 * @return None.
 */
void TCA1_Start(void);

/**
 * @ingroup tca1_split
 * @brief Stops the TCA1.
 * @param None.
 * @return None.
 */
void TCA1_Stop(void);

/**
 * @ingroup tca1_split
 * @brief Sets the counter value for the Low Byte Timer.
 * @param timerVal - Counter value to be written to the LCNT register
 * @return None.
 */
void TCA1_LowCounterSet(uint8_t timerVal); 

/**
 * @ingroup tca1_split
 * @brief Returns the Low Byte Timer counter value.
 * @param None.
 * @return Counter value from the LCNT register
 */
uint8_t TCA1_LowCounterGet(void);

/**
 * @ingroup tca1_split
 * @brief Returns the High Byte Timer counter value.
 * @param None.
 * @return Counter value from the HCNT register
 */
uint8_t TCA1_HighCounterGet(void);

/**
 * @ingroup tca1_split
 * @brief Sets the counter value for the High Byte Timer.
 * @param timerVal - Counter value to be written to the HCNT register
 * @return None.
 */
void TCA1_HighCounterSet(uint8_t timerVal);

/**
 * @ingroup tca1_split
 * @brief Sets the period count value for the High Byte Timer.
 * @param periodVal - Period count value written to the HPER register
 * @return None.
 */
void TCA1_HighPeriodSet(uint8_t periodVal);

/**
 * @ingroup tca1_split
 * @brief Sets the period count value for the Low Byte Timer.
 * @param periodVal - Period count value written to the LPER register
 * @return None.
 */
void TCA1_LowPeriodSet(uint8_t periodVal);

/**
 * @ingroup tca1_split
 * @brief Returns the period count value of the High Byte Timer.
 * @param None.
 * @return Period count value from the HPER register
 */
uint8_t TCA1_HighPeriodGet(void);

/**
 * @ingroup tca1_split
 * @brief Returns the period count value of the Low Byte Timer.
 * @param None.
 * @return Period count value from the LPER register
 */
uint8_t TCA1_LowPeriodGet(void);

/**
 * @ingroup tca1_split
 * @brief Returns the maximum timer count value.
 * @param None.
 * @return Maximum count value
 */
uint8_t TCA1_MaxCountGet(void);

/**
 * @ingroup tca1_split
 * @brief Clears the High Byte Timer Underflow Interrupt flag.
 * @param None.
 * @return None.
 */
void TCA1_HUNFInterruptFlagClear(void);

/**
 * @ingroup tca1_split
 * @brief Returns the status of the High Byte Timer Underflow Interrupt flag.
 * @param None.
 * @retval True  - High Byte Underflow Interrupt flag is set
 * @retval False - High Byte Underflow Interrupt flag is not set
 */
bool TCA1_HUNFInterruptStatusGet(void);

/**
 * @ingroup tca1_split
 * @brief Clears the Low Byte Timer Underflow Interrupt flag.
 * @param None.
 * @return None.
 */
void TCA1_LUNFInterruptFlagClear(void);

/**
 * @ingroup tca1_split
 * @brief Returns the status of the Low Byte Timer Underflow Interrupt flag.
 * @param None.
 * @retval True  - Low Byte Underflow Interrupt flag is set
 * @retval False - Low Byte Underflow Interrupt flag is not set
 */
bool TCA1_LUNFInterruptStatusGet(void);

/**
 * @ingroup tca1_split
 * @brief Clears the Low Byte Timer Compare Channel 0 Match Interrupt flag.
 * @param None.
 * @return None.
 */
void TCA1_LCMP0InterruptFlagClear(void);

/**
 * @ingroup tca1_split
 * @brief Returns the status of the Low Byte Timer Compare Channel 0 Match Interrupt flag.
 * @param None.
 * @retval True  - Low Byte Timer Compare Channel 0 Match Interrupt flag is set
 * @retval False - Low Byte Timer Compare Channel 0 Match Interrupt flag is not set
 */

bool TCA1_LCMP0InterruptStatusGet(void);
/**
 * @ingroup tca1_split
 * @brief Clears the Low Byte Timer Compare Channel 1 Match Interrupt flag.
 * @param None.
 * @return None.
 */
void TCA1_LCMP1InterruptFlagClear(void);

/**
 * @ingroup tca1_split
 * @brief Returns the status of the Low Byte Timer Compare Channel 1 Match Interrupt flag.
 * @param None.
 * @retval True  - Low Byte Timer Compare Channel 1 Match Interrupt flag is set
 * @retval False - Low Byte Timer Compare Channel 1 Match Interrupt flag is not set
 */
bool TCA1_LCMP1InterruptStatusGet(void);

/**
 * @ingroup tca1_split
 * @brief Clears the Low Byte Timer Compare Channel 2 Match Interrupt flag.
 * @param None.
 * @return None.
 */
void TCA1_LCMP2InterruptFlagClear(void);

/**
 * @ingroup tca1_split
 * @brief Returns the status of the Low Byte Timer Compare Channel 2 Match Interrupt flag.
 * @param None.
 * @retval True  - Low Byte Timer Compare Channel 2 Match Interrupt flag is set
 * @retval False - Low Byte Timer Compare Channel 2 Match Interrupt flag is not set
 */
bool TCA1_LCMP2InterruptStatusGet(void);
/**
 * @ingroup tca1_split
 * @brief Registers a callback function for the High Byte Timer underflow event.
 * @param CallbackHandler - Address to the custom callback function
 * @return None.
 */ 
void TCA1_HighCountCallbackRegister(TCA1_cb_t CallbackHandler);

/**
 * @ingroup tca1_split
 * @brief Registers a callback function for the Low Byte Timer Compare 0 match event.
 * @param CallbackHandler - Address to the custom callback function
 * @return None.
 */ 
void TCA1_LowCompare0CallbackRegister(TCA1_cb_t CallbackHandler);

/**
 * @ingroup tca1_split
 * @brief Registers a callback function for the Low Byte Timer Compare 1 match event.
 * @param CallbackHandler - Address to the custom callback function
 * @return None.
 */ 
void TCA1_LowCompare1CallbackRegister(TCA1_cb_t CallbackHandler);

/**
 * @ingroup tca1_split
 * @brief Registers a callback function for the Low Byte Timer Compare 2 match event. 
 * @param CallbackHandler - Address to the custom callback function
 * @return None.
 */ 
void TCA1_LowCompare2CallbackRegister(TCA1_cb_t CallbackHandler);

/**
 * @ingroup tca1_split
 * @brief Registers a callback function for the Low Byte Timer underflow event.
 * @param CallbackHandler - Address to the custom callback function
 * @return None.
 */ 
void TCA1_LowCountCallbackRegister(TCA1_cb_t CallbackHandler);
/**
 * @ingroup tca1_split
 * @brief Performs tasks to be executed during the timer interrupt events.
 * @param None.
 * @return None.
 */
void TCA1_Tasks(void);

#endif /* TCA1_H_INCLUDED */