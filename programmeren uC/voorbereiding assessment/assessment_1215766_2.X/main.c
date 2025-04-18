#include "mcc_generated_files/system/system.h"
#include <avr/sleep.h>
#include <util/delay.h>
#include <avr/interrupt.h>  // Nodig voor sei()

volatile uint16_t analoge_button = 0;
volatile uint16_t a = 0;

volatile uint16_t button_results[200] = {};
volatile uint16_t result[200] = {};


void ADC0_InterruptHandler() {
    analoge_button = ADC0.RES; 
    //button_results[a] = analoge_button;
    button_results[a] = ADC0.RES;
    if(a >= 200){
        for(int i = 0; i < 200; i++){
            result[i] = button_results[i];
        }
        a = 0;
    } else{
        a++;
    }
}

int main(void) {
    SYSTEM_Initialize();

    ADC0_ConversionDoneCallbackRegister(ADC0_InterruptHandler);
    while (1) {

    }
}
