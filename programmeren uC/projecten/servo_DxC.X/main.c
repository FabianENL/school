#include "mcc_generated_files/system/system.h"
#include <avr/delay.h>

uint8_t state = 0;
uint8_t first = 0;

void interrupt_handler(){
    state++;
    first = 1;
    _delay_ms(250);
}

void switch_Servo() {
    if (TCA0.SINGLE.CMP0==500){
       TCA0.SINGLE.CMP0 = 800; // dicht
       LED0_SetHigh();
    }
    else {
        TCA0.SINGLE.CMP0 = 500; // open
        LED0_SetLow();
    }
    
}

int main(void)
{
    SYSTEM_Initialize();
    TCA0.SINGLE.CMP0 = 500;
    SW0_SetInterruptHandler(&interrupt_handler);
    SW1_SetInterruptHandler(&interrupt_handler);

    
    while(1)
    {
        switch (state){
            case 0: // idle
                EN_SetLow();
                break;
            case 1: // naar beneden
                TCA0.SINGLE.CMP0 = 500;
                if(first){
                    _delay_ms(1000);
                    first = 0;
                }
                
                EN_SetHigh();
                DIR_SetLow();
                STEP_SetHigh();
                _delay_ms(1);
                STEP_SetLow();
                _delay_ms(1);
                break;
            case 2: // grijpen + naar boven
                TCA0.SINGLE.CMP0 = 800;
                if(first){
                    _delay_ms(1000);
                    first = 0;
                }
                
                EN_SetHigh();
                DIR_SetHigh();
                STEP_SetHigh();
                _delay_ms(1);
                STEP_SetLow();
                _delay_ms(1);
                break;
            case 3: // loslaten
                TCA0.SINGLE.CMP0 = 500;
                STEP_SetLow();
                EN_SetLow();
                state = 0;
                break;
        }
    }    
}
//180-1150