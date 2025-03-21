#include "mcc_generated_files/system/system.h"
#include <util/delay.h>

typedef enum { S_OFF, S_ON, S_BLINK } states;
typedef enum { E_PRESS, E_NOPRESS } events;

states currentState = S_OFF;
events currentEvent = E_NOPRESS;

states nextState = S_OFF;

volatile unsigned int a = 0;

void setEvent(events newEvent){ currentEvent = newEvent; }; // Set currentEvent naar newEvent
void resetEvent(){ currentEvent = E_NOPRESS; }; // Reset currentEvent naar E_NOPRESS
void doLED_OFF(){ LED0_SetLow(); }; // Voer het algoritme uit van LED OFF
void doLED_ON(){ LED0_SetHigh(); }; // Voer het algoritme uit van LED ON
void doLED_BLINK(){
    LED0_Toggle();
    _delay_ms(250);
} // Voer het algoritme uit van LED BLINK
void SW0_InterruptHandler(){ setEvent(E_PRESS); }



int main(void)
{
    SYSTEM_Initialize();
    SW0_SetInterruptHandler(&SW0_InterruptHandler);

    while(1)
    {
        switch(currentState){
            case S_OFF:
                switch(currentEvent){
                    case E_PRESS:
                        nextState = S_ON;
                        resetEvent();
                        break;
                    case E_NOPRESS:
                        doLED_OFF();
                        a++;
                        break;
                }
                break;
            case S_ON:
                switch(currentEvent){
                    case E_PRESS:
                        nextState = S_BLINK;
                        resetEvent();
                        break;
                    case E_NOPRESS:
                        doLED_ON();
                        a++;
                        break;
                }
                break;
            case S_BLINK:
                switch(currentEvent){
                    case E_PRESS:
                        nextState = S_OFF;
                        resetEvent();
                        break;
                    case E_NOPRESS:
                        doLED_BLINK();
                        a++;
                        break;
                }
                break;
        }
        currentState = nextState;
        _delay_ms(100);
    }    
}