/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  1.1.0
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

#ifndef PINS_H_INCLUDED
#define PINS_H_INCLUDED

#include <avr/io.h>
#include "./port.h"

//get/set SW0 aliases
#define SW0_SetHigh() do { PORTB_OUTSET = 0x4; } while(0)
#define SW0_SetLow() do { PORTB_OUTCLR = 0x4; } while(0)
#define SW0_Toggle() do { PORTB_OUTTGL = 0x4; } while(0)
#define SW0_GetValue() (VPORTB.IN & (0x1 << 2))
#define SW0_SetDigitalInput() do { PORTB_DIRCLR = 0x4; } while(0)
#define SW0_SetDigitalOutput() do { PORTB_DIRSET = 0x4; } while(0)
#define SW0_SetPullUp() do { PORTB_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define SW0_ResetPullUp() do { PORTB_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define SW0_SetInverted() do { PORTB_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define SW0_ResetInverted() do { PORTB_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define SW0_DisableInterruptOnChange() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define SW0_EnableInterruptForBothEdges() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define SW0_EnableInterruptForRisingEdge() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define SW0_EnableInterruptForFallingEdge() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define SW0_DisableDigitalInputBuffer() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define SW0_EnableInterruptForLowLevelSensing() do { PORTB.PIN2CTRL = (PORTB.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PB2_SetInterruptHandler SW0_SetInterruptHandler

//get/set SW3 aliases
#define SW3_SetHigh() do { PORTE_OUTSET = 0x2; } while(0)
#define SW3_SetLow() do { PORTE_OUTCLR = 0x2; } while(0)
#define SW3_Toggle() do { PORTE_OUTTGL = 0x2; } while(0)
#define SW3_GetValue() (VPORTE.IN & (0x1 << 1))
#define SW3_SetDigitalInput() do { PORTE_DIRCLR = 0x2; } while(0)
#define SW3_SetDigitalOutput() do { PORTE_DIRSET = 0x2; } while(0)
#define SW3_SetPullUp() do { PORTE_PIN1CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define SW3_ResetPullUp() do { PORTE_PIN1CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define SW3_SetInverted() do { PORTE_PIN1CTRL  |= PORT_INVEN_bm; } while(0)
#define SW3_ResetInverted() do { PORTE_PIN1CTRL  &= ~PORT_INVEN_bm; } while(0)
#define SW3_DisableInterruptOnChange() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define SW3_EnableInterruptForBothEdges() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define SW3_EnableInterruptForRisingEdge() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define SW3_EnableInterruptForFallingEdge() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define SW3_DisableDigitalInputBuffer() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define SW3_EnableInterruptForLowLevelSensing() do { PORTE.PIN1CTRL = (PORTE.PIN1CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PE1_SetInterruptHandler SW3_SetInterruptHandler

//get/set SW2 aliases
#define SW2_SetHigh() do { PORTE_OUTSET = 0x4; } while(0)
#define SW2_SetLow() do { PORTE_OUTCLR = 0x4; } while(0)
#define SW2_Toggle() do { PORTE_OUTTGL = 0x4; } while(0)
#define SW2_GetValue() (VPORTE.IN & (0x1 << 2))
#define SW2_SetDigitalInput() do { PORTE_DIRCLR = 0x4; } while(0)
#define SW2_SetDigitalOutput() do { PORTE_DIRSET = 0x4; } while(0)
#define SW2_SetPullUp() do { PORTE_PIN2CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define SW2_ResetPullUp() do { PORTE_PIN2CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define SW2_SetInverted() do { PORTE_PIN2CTRL  |= PORT_INVEN_bm; } while(0)
#define SW2_ResetInverted() do { PORTE_PIN2CTRL  &= ~PORT_INVEN_bm; } while(0)
#define SW2_DisableInterruptOnChange() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define SW2_EnableInterruptForBothEdges() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define SW2_EnableInterruptForRisingEdge() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define SW2_EnableInterruptForFallingEdge() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define SW2_DisableDigitalInputBuffer() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define SW2_EnableInterruptForLowLevelSensing() do { PORTE.PIN2CTRL = (PORTE.PIN2CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PE2_SetInterruptHandler SW2_SetInterruptHandler

//get/set SW1 aliases
#define SW1_SetHigh() do { PORTE_OUTSET = 0x8; } while(0)
#define SW1_SetLow() do { PORTE_OUTCLR = 0x8; } while(0)
#define SW1_Toggle() do { PORTE_OUTTGL = 0x8; } while(0)
#define SW1_GetValue() (VPORTE.IN & (0x1 << 3))
#define SW1_SetDigitalInput() do { PORTE_DIRCLR = 0x8; } while(0)
#define SW1_SetDigitalOutput() do { PORTE_DIRSET = 0x8; } while(0)
#define SW1_SetPullUp() do { PORTE_PIN3CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define SW1_ResetPullUp() do { PORTE_PIN3CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define SW1_SetInverted() do { PORTE_PIN3CTRL  |= PORT_INVEN_bm; } while(0)
#define SW1_ResetInverted() do { PORTE_PIN3CTRL  &= ~PORT_INVEN_bm; } while(0)
#define SW1_DisableInterruptOnChange() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define SW1_EnableInterruptForBothEdges() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define SW1_EnableInterruptForRisingEdge() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define SW1_EnableInterruptForFallingEdge() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define SW1_DisableDigitalInputBuffer() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define SW1_EnableInterruptForLowLevelSensing() do { PORTE.PIN3CTRL = (PORTE.PIN3CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PE3_SetInterruptHandler SW1_SetInterruptHandler

//get/set LED0 aliases
#define LED0_SetHigh() do { PORTB_OUTSET = 0x8; } while(0)
#define LED0_SetLow() do { PORTB_OUTCLR = 0x8; } while(0)
#define LED0_Toggle() do { PORTB_OUTTGL = 0x8; } while(0)
#define LED0_GetValue() (VPORTB.IN & (0x1 << 3))
#define LED0_SetDigitalInput() do { PORTB_DIRCLR = 0x8; } while(0)
#define LED0_SetDigitalOutput() do { PORTB_DIRSET = 0x8; } while(0)
#define LED0_SetPullUp() do { PORTB_PIN3CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LED0_ResetPullUp() do { PORTB_PIN3CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LED0_SetInverted() do { PORTB_PIN3CTRL  |= PORT_INVEN_bm; } while(0)
#define LED0_ResetInverted() do { PORTB_PIN3CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LED0_DisableInterruptOnChange() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LED0_EnableInterruptForBothEdges() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LED0_EnableInterruptForRisingEdge() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LED0_EnableInterruptForFallingEdge() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LED0_DisableDigitalInputBuffer() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LED0_EnableInterruptForLowLevelSensing() do { PORTB.PIN3CTRL = (PORTB.PIN3CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PB3_SetInterruptHandler LED0_SetInterruptHandler

//get/set LED1 aliases
#define LED1_SetHigh() do { PORTE_OUTSET = 0x1; } while(0)
#define LED1_SetLow() do { PORTE_OUTCLR = 0x1; } while(0)
#define LED1_Toggle() do { PORTE_OUTTGL = 0x1; } while(0)
#define LED1_GetValue() (VPORTE.IN & (0x1 << 0))
#define LED1_SetDigitalInput() do { PORTE_DIRCLR = 0x1; } while(0)
#define LED1_SetDigitalOutput() do { PORTE_DIRSET = 0x1; } while(0)
#define LED1_SetPullUp() do { PORTE_PIN0CTRL  |= PORT_PULLUPEN_bm; } while(0)
#define LED1_ResetPullUp() do { PORTE_PIN0CTRL  &= ~PORT_PULLUPEN_bm; } while(0)
#define LED1_SetInverted() do { PORTE_PIN0CTRL  |= PORT_INVEN_bm; } while(0)
#define LED1_ResetInverted() do { PORTE_PIN0CTRL  &= ~PORT_INVEN_bm; } while(0)
#define LED1_DisableInterruptOnChange() do { PORTE.PIN0CTRL = (PORTE.PIN0CTRL & ~PORT_ISC_gm) | 0x0 ; } while(0)
#define LED1_EnableInterruptForBothEdges() do { PORTE.PIN0CTRL = (PORTE.PIN0CTRL & ~PORT_ISC_gm) | 0x1 ; } while(0)
#define LED1_EnableInterruptForRisingEdge() do { PORTE.PIN0CTRL = (PORTE.PIN0CTRL & ~PORT_ISC_gm) | 0x2 ; } while(0)
#define LED1_EnableInterruptForFallingEdge() do { PORTE.PIN0CTRL = (PORTE.PIN0CTRL & ~PORT_ISC_gm) | 0x3 ; } while(0)
#define LED1_DisableDigitalInputBuffer() do { PORTE.PIN0CTRL = (PORTE.PIN0CTRL & ~PORT_ISC_gm) | 0x4 ; } while(0)
#define LED1_EnableInterruptForLowLevelSensing() do { PORTE.PIN0CTRL = (PORTE.PIN0CTRL & ~PORT_ISC_gm) | 0x5 ; } while(0)
#define PE0_SetInterruptHandler LED1_SetInterruptHandler

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize();

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SW0 pin. 
 *        This is a predefined interrupt handler to be used together with the SW0_SetInterruptHandler() method.
 *        This handler is called every time the SW0 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void SW0_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SW0 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for SW0 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void SW0_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SW3 pin. 
 *        This is a predefined interrupt handler to be used together with the SW3_SetInterruptHandler() method.
 *        This handler is called every time the SW3 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void SW3_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SW3 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for SW3 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void SW3_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SW2 pin. 
 *        This is a predefined interrupt handler to be used together with the SW2_SetInterruptHandler() method.
 *        This handler is called every time the SW2 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void SW2_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SW2 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for SW2 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void SW2_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for SW1 pin. 
 *        This is a predefined interrupt handler to be used together with the SW1_SetInterruptHandler() method.
 *        This handler is called every time the SW1 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void SW1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for SW1 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for SW1 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void SW1_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for LED0 pin. 
 *        This is a predefined interrupt handler to be used together with the LED0_SetInterruptHandler() method.
 *        This handler is called every time the LED0 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void LED0_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for LED0 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for LED0 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void LED0_SetInterruptHandler(void (* interruptHandler)(void)) ; 

/**
 * @ingroup  pinsdriver
 * @brief Default Interrupt Handler for LED1 pin. 
 *        This is a predefined interrupt handler to be used together with the LED1_SetInterruptHandler() method.
 *        This handler is called every time the LED1 ISR is executed. 
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param none
 * @return none
 */
void LED1_DefaultInterruptHandler(void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt Handler Setter for LED1 pin input-sense-config functionality.
 *        Allows selecting an interrupt handler for LED1 at application runtime
 * @pre PIN_MANAGER_Initialize() has been called at least once
 * @param InterruptHandler function pointer.
 * @return none
 */
void LED1_SetInterruptHandler(void (* interruptHandler)(void)) ; 
#endif /* PINS_H_INCLUDED */
