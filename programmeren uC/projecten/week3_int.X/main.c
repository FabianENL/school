#include "mcc_generated_files/system/system.h"
#include <avr/sleep.h>

volatile int a = 0;



int main(void)
{
    SYSTEM_Initialize();
    
    //SW0_SetInterruptHandler(&toggleLed0);
    
    

    while(1)
    {
        if(SW0_GetValue()){
            LED0_SetHigh();
        }else{
            LED0_SetLow();
        }
    }    
}