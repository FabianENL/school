    #include "mcc_generated_files/system/system.h"

    #define F_CPU 4000000UL
    #include <avr/io.h>
    #include <util/delay.h>

int main(void)
{
    SYSTEM_Initialize();

    while(1)
    {
        servo_SetHigh();
        _delay_ms(2.6);
        servo_SetLow();
        _delay_ms(20);
    }    
}