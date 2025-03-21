// complex

#include "mcc_generated_files/system/system.h"
#include <util/delay.h>

typedef enum { S0, S1, S2, S3, S4 } states;
typedef enum { E_PRESS1, E_PRESS2, E_NOPRESS } events;

states currentState = S0;
events currentEvent = E_NOPRESS;

states nextState = S0;

volatile unsigned int a = 0;

void setEvent(events newEvent){ currentEvent = newEvent; }; // Set currentEvent naar newEvent
void resetEvent(){ currentEvent = E_NOPRESS; }; // Reset currentEvent naar E_NOPRESS
void doLED1_OFF(){ LED0_SetLow(); }; // Voer het algoritme uit van LED OFF
void doLED1_ON(){ LED0_SetHigh(); }; // Voer het algoritme uit van LED ON
void doLED2_OFF(){ LED1_SetLow(); }; // Voer het algoritme uit van LED OFF
void doLED2_ON(){ LED1_SetHigh(); }; // Voer het algoritme uit van LED ON
void doLED1_BLINK(){
    LED0_Toggle();
    _delay_ms(250);
} // Voer het algoritme uit van LED BLINK
void doLED2_BLINK(){
    LED1_Toggle();
    _delay_ms(250);
} // Voer het algoritme uit van LED BLINK

void doDISCO(){
    LED1_SetHigh();
    LED0_SetLow();
    _delay_ms(250);
    
    LED0_SetHigh();
    LED1_SetLow();
    _delay_ms(250);
}

void SW0_InterruptHandler(){ setEvent(E_PRESS1); }
void SW1_InterruptHandler(){ setEvent(E_PRESS2); }




int main(void)
{
    SYSTEM_Initialize();
    SW0_SetInterruptHandler(&SW0_InterruptHandler);
    SW1_SetInterruptHandler(&SW1_InterruptHandler);

    while(1)
    {
        switch(currentState){
            case S0:
                switch(currentEvent){
                    case E_PRESS1:
                        nextState = S0;
                        resetEvent();
                        break;
                    case E_PRESS2:
                        nextState = S1;
                        resetEvent();
                        break;
                    case E_NOPRESS:
                        a++;
                        doLED1_OFF();
                        doLED2_OFF();
                        break;
                }
                break;
            case S1:
                switch(currentEvent){
                    case E_PRESS1:
                        nextState = S0;
                        resetEvent();
                        break;
                    case E_PRESS2:
                        nextState = S2;
                        resetEvent();
                        break;
                    case E_NOPRESS:
                        a++;
                        doLED1_ON();
                        doLED2_OFF();
                        break;
                }
                break;
            case S2:
                switch(currentEvent){
                    case E_PRESS1:
                        nextState = S2;
                        resetEvent();
                        break;
                    case E_PRESS2:
                        nextState = S3;
                        resetEvent();
                        break;
                    case E_NOPRESS:
                        doLED1_ON();
                        doLED2_ON();
                        a++;
                        break;
                }
                break;
            case S3:
                switch(currentEvent){
                    case E_PRESS1:
                        nextState = S4;
                        resetEvent();
                        break;
                    case E_PRESS2:
                        nextState = S0;
                        resetEvent();
                        break;
                    case E_NOPRESS:
                        doLED1_ON();
                        doLED2_BLINK();
                        a++;
                        break;
                }
                break;
            case S4:
                switch(currentEvent){
                    case E_PRESS1:
                        nextState = S1;
                        resetEvent();
                        break;
                    case E_PRESS2:
                        nextState = S0;
                        resetEvent();
                        break;
                    case E_NOPRESS:
                        a++;
                        doDISCO();
                        break;
                }
                break;
            
        }
        currentState = nextState;
        _delay_ms(100);
    }    
}