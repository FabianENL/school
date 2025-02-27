#include "mcc_generated_files/system/system.h"
#include <avr/sleep.h>

volatile int a = 0;

void toggleLed0(){
    LED0_Toggle();
    a++;
}

int main(void)
{
    SYSTEM_Initialize();
    
    SW0_SetInterruptHandler(&toggleLed0);

    while(1)
    {
        sleep_mode();
        a++;
    }    
}