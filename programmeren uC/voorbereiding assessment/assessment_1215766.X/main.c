 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.2
 *
 * @version Package Version: 3.1.2
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
#include "mcc_generated_files/system/system.h"
#include <avr/sleep.h>
#include <util/delay.h>
#include <avr/interrupt.h>  // Nodig voor sei()
#include <avr/sleep.h>

uint8_t sendflag = 0;

typedef enum {S_IDLE, S_HELLO, S_GOODBYE} states;
typedef enum {E_button_press, E_nothing} events;

states currentState = S_IDLE;
states nextState = S_IDLE;
events currentEvent = E_nothing;

void usart_putchar(uint8_t data) {
    while (!(USART3.STATUS & USART_DREIF_bm));
    USART3.TXDATAL = data;
}

void switchInterrupt(){
    currentEvent = E_button_press;
}

void sendHello(){
    usart_putchar('H');    
    usart_putchar('E');
    usart_putchar('L');
    usart_putchar('L');
    usart_putchar('O');
    usart_putchar('!');
    usart_putchar('\n');
}

void sendGoodbye(){
    usart_putchar('G');    
    usart_putchar('O');
    usart_putchar('O');
    usart_putchar('D');
    usart_putchar('B');
    usart_putchar('Y');
    usart_putchar('E');
    usart_putchar('!');
    usart_putchar('\n');
}


int main(void)
{
    SYSTEM_Initialize();
    
    SW2_SetInterruptHandler(switchInterrupt);

    while(1)
    {
        switch(currentState){
            case S_IDLE:
                switch(currentEvent){
                    case E_button_press:
                        nextState = S_HELLO;
                        currentEvent = E_nothing;
                        break;
                    case E_nothing:
                        // sleep_mode();
                        break;
                }
                break;
            case S_HELLO:
                switch(currentEvent){
                    case E_button_press:
                        nextState = S_GOODBYE;
                        currentEvent = E_nothing;
                        break;
                    case E_nothing:
                        sendHello();
                        break;
                }
                break;
            case S_GOODBYE:
                switch(currentEvent){
                    case E_button_press:
                        nextState = S_IDLE;
                        currentEvent = E_nothing;
                        break;
                    case E_nothing:
                        sendGoodbye();
                        break;
                }
                break;
        }
        currentState = nextState;
    }    
}