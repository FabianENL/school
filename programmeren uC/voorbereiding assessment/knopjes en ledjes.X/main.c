#include "mcc_generated_files/system/system.h"

void ledON(){    
    LED0_SetHigh();
}

void ledOFF(){
    LED0_SetLow();
}

int main(void)
{
    SYSTEM_Initialize();

    SW0_SetInterruptHandler(&ledON);
    SW1_SetInterruptHandler(&ledOFF);
    
    while(1)
    {
    }    
}