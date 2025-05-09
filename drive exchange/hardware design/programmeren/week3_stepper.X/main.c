#include "mcc_generated_files/system/system.h"

#define F_CPU 4000000UL
#include <avr/io.h>
#include <util/delay.h>

const int steps = 125;
const int stepDelay = 10; // Delay between steps in ms

//void step1();
//void step2();
//void step3();
//void step4();
// void stopMotor();

void holdMotor(){
  M1In1_SetHigh();  
  M1In2_SetHigh();  
  M2In1_SetHigh();  
  M2In2_SetHigh();  
}

void stopMotor(){
    M1In1_SetLow();
    M1In2_SetLow();
    M2In1_SetLow();
    M2In2_SetLow();
}

void step1(){
    M1In1_SetHigh();
    M1In2_SetLow();
    M2In1_SetHigh();
    M2In2_SetLow();
    _delay_ms(stepDelay);
}

void step2(){
    M1In1_SetLow();
    M1In2_SetHigh();
    M2In1_SetHigh();
    M2In2_SetLow();
    _delay_ms(stepDelay);
}

void step3(){
    M1In1_SetLow();
    M1In2_SetHigh();
    M2In1_SetLow();
    M2In2_SetHigh();
    _delay_ms(stepDelay);
}

void step4(){
    M1In1_SetHigh();
    M1In2_SetLow();
    M2In1_SetLow();
    M2In2_SetHigh();
    _delay_ms(stepDelay);
}

int main(void) {
    SYSTEM_Initialize();
    
    while (1) {
        for (int i = 0; i <= steps; i++) {
            step1();
            step2();
            step3();
            step4();
        }
        
        stopMotor();
        _delay_ms(2000);
        
        for (int i = 0; i <= steps; i++) {
            step3();
            step2();
            step1();
            step4();
        }
        
        holdMotor();
        _delay_ms(2000);
    }
}
