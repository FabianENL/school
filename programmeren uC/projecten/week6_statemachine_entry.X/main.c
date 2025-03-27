// complex

#include "mcc_generated_files/system/system.h"
#include <util/delay.h>

typedef enum { S0, S1, S2, S3, S4 } states;
typedef enum { E_PRESS1, E_PRESS2, E_NOPRESS } events;
typedef enum {F_ENTRY, F_ACTIVITY, F_EXIT} flows;

states currentState = S0;
events currentEvent = E_NOPRESS;

states nextState = S0;

flows currentFlow = F_ENTRY;

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


void entryS1(){ doLED1_ON(); };  // LED0 aan
void entryS2(){ doLED1_ON(); doLED2_ON(); };  // LED0 aan, LED1 aan
void exitS1(){ doLED1_OFF(); };   // LED0 uit
void exitS2(){ doLED1_OFF(); doLED2_OFF(); };   // LED0 uit, LED1 uit
void exitS3(){ doLED1_OFF(); doLED2_OFF(); };   // LED0 uit, LED1 uit
void exitS4(){ doLED1_OFF(); doLED2_OFF(); };   // LED0 uit, LED1 uit
void doS3(){ doLED1_BLINK(); };     // Knipper LED1
void doS4(){ doDISCO(); };     // Disco op alle LEDs

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
                        break;
                }
                switch (currentFlow) {
                    case F_ENTRY:
                        currentFlow = F_ACTIVITY;
                    case F_ACTIVITY:
                        if (nextState == currentState) {
                            break;
                        } else {
                            currentFlow = F_EXIT;
                        }

                    case F_EXIT:
                        currentFlow = F_ENTRY; // Reset state flow.
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
                        break;
                }
                switch (currentFlow) {
                    case F_ENTRY:
                        entryS1();
                        currentFlow = F_ACTIVITY;

                    case F_ACTIVITY:
                        if (nextState == currentState) {
                            break;
                        } else {
                            currentFlow = F_EXIT;
                        }

                    case F_EXIT:
                        exitS1();
                        currentFlow = F_ENTRY; // Reset state flow.
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
                        a++;
                        break;
                }
                switch (currentFlow) {
                    case F_ENTRY:
                        entryS2();
                        currentFlow = F_ACTIVITY;

                    case F_ACTIVITY:
                        if (nextState == currentState) {
                            break;
                        } else {
                            currentFlow = F_EXIT;
                        }

                    case F_EXIT:
                        exitS2();
                        currentFlow = F_ENTRY; // Reset state flow.
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
                        a++;
                        break;
                }
                switch (currentFlow) {
                    case F_ENTRY:
                        currentFlow = F_ACTIVITY;

                    case F_ACTIVITY:
                        doS3();
                        if (nextState == currentState) {
                            break;
                        } else {
                            currentFlow = F_EXIT;
                        }

                    case F_EXIT:
                        exitS3();
                        currentFlow = F_ENTRY; // Reset state flow.
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
                        break;
                }
                switch (currentFlow) {
                    case F_ENTRY:
                        currentFlow = F_ACTIVITY;
                    case F_ACTIVITY:
                        doS4();
                        if (nextState == currentState) {
                            break;
                        } else {
                            currentFlow = F_EXIT;
                        }

                    case F_EXIT:
                        exitS4();
                        currentFlow = F_ENTRY; // Reset state flow.
                        break;
                }
                break;
            
        }
        currentState = nextState;
        _delay_ms(100);
    }    
}