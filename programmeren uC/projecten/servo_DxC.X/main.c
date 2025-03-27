#include "mcc_generated_files/system/system.h"
#include <avr/delay.h>
float hoek = 180;
void sw_servo_interrupthandler(void) {
 if (TCA0.SINGLE.CMP0==180){
    TCA0.SINGLE.CMP0 = 665;
}
 else {
     TCA0.SINGLE.CMP0 = 180;
 }
 _delay_ms(100);
}
/*
    Main application
*/

int main(void)
{
    int a = 0;

    SYSTEM_Initialize();
    SW0_SetInterruptHandler(sw_servo_interrupthandler);
    while(1)
    {


      
    }    
}
//180-1150