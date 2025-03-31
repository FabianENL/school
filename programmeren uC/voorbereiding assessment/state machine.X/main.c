//
// WERKT NIET HELEMAAL MAAR KAN WEL GEBRUIKT WORDEN ALS INSPIRATIE WANT (VOLGENS MIJ) ZOU DIT IN THEORIE WEL MOETEN WERKEN
//

#include "mcc_generated_files/system/system.h"
#include <avr/sleep.h>

typedef enum {S_Idle, S_Wakker, S_Standby} states;
typedef enum {E_Druk, E_Timeout, E_no_event} events;

states currentState = S_Idle;
states nextState = S_Idle;
events currentEvent = E_no_event;

uint8_t timerStarted = 0;

uint16_t a = 0;

void TimerInterrupt(){
    if(timerStarted){
        currentEvent = E_Timeout;
        timerStarted = 0;
    }
}

void SW0_Press(){
    currentEvent = E_Druk;
}

int main(void)
{
    SYSTEM_Initialize();
    
    SW0_SetInterruptHandler(SW0_Press);
    TCA0_Compare0CallbackRegister(TimerInterrupt);
    
    while(1)
    {
        switch(currentState){
            case S_Idle:
                switch(currentEvent){
                    case E_Druk:
                        nextState = S_Wakker;
                        currentEvent = E_no_event;
                        break;
                    case E_Timeout:
                        break;
                    case E_no_event:
                        TCA1_SPLIT_HCMP0 = 0;
                        sleep_mode();
                        break;
                }
                break;
            case S_Wakker:
                switch(currentEvent){
                    case E_Druk:
                        currentEvent = E_no_event;
                        break;
                    case E_Timeout:
                        nextState = S_Standby;
                        timerStarted = 0;
                        currentEvent = E_no_event;
                        break;
                    case E_no_event:
                        TCA1_SPLIT_HCMP0 = 255;
                        if(!timerStarted){
                            timerStarted = 1;
                            TCA0.SINGLE.CNT = 0;
                        }
                        break;
                }
                break;
            case S_Standby:
                switch(currentEvent){
                    case E_Druk:
                        nextState = S_Wakker;
                        currentEvent = E_no_event;
                        break;
                    case E_Timeout:
                        nextState = S_Idle;
                        timerStarted = 0;
                        currentEvent = E_no_event;
                        break;
                    case E_no_event:
                        TCA1_SPLIT_HCMP0 = 10;
                        if(!timerStarted){
                            timerStarted = 1;
                            TCA0.SINGLE.CNT = 0;
                        }
                        break;
                }
                break;
        }
        currentState = nextState;
    }    
}