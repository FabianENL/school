#include "mcc_generated_files/system/system.h"

#define F_CPU 4000000UL
#include <avr/io.h>
#include <util/delay.h>

const int stepDelay = 7.5; // Delay between steps in ms

int draaien = 0;

void _start(){
    draaien = 1;
}

void _stop(){
    draaien = 0;
}

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
    
    START_SetInterruptHandler(&_start);
    STOP_SetInterruptHandler(&_stop);
    
    while (1) {
        if(draaien){
            step1();
            step2();
            step3();
            step4();
        } else{
            holdMotor();
        }
    }
}
