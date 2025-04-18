#include "mcc_generated_files/system/system.h"
#include <avr/sleep.h>
#include <util/delay.h>
#include <avr/interrupt.h>  // Nodig voor sei()

volatile uint16_t adc_res = 0;
volatile uint8_t send_flag = 0;

//void usart_putchar(uint8_t data) {
//    while (!(USART3.STATUS & USART_DREIF_bm));
//    USART3.TXDATAL = data;
//}

void ADC0_InterruptHandler() {
    // Kopieer de ADC uitlezing naar adc_res
    adc_res = ADC0.RES; 

    // Maak send_flag 1
    //send_flag = 1;
}

int main(void) {
    SYSTEM_Initialize();

    // Koppel de interrupt handler functie aan ADC0 ISR.
    ADC0_ConversionDoneCallbackRegister(ADC0_InterruptHandler);
    while (1) {
        //if (send_flag) {
        //    // Verstuur de 8 meest significante bits (schuif 4 opzij)
        //    usart_putchar(adc_res >> 4);
        //    
        //    // Reset send_flag
        //    send_flag = 0;
        //}
    }
}
