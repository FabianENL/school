#include "mcc_generated_files/system/system.h"
#include <avr/sleep.h>
#include <util/delay.h>

volatile uint16_t adcres = 0;
volatile uint8_t sendflag = 0;

void ADC0InterruptHandler() {
    // TODO: Voeg hier de juiste ISR callback functie toe.
    // Kopieer de ADC uitlezing naar adcres
    // Tip: gebruik ADC0.RES of de juiste functie
    // Maak sendflag 1.
    adcres = ADC0.RES;
    sendflag = 1;
}

/* Zet een char klaar op de transmitlijn van UART3. Deze wordt hardwarematig verstuurd */
void usart_putchar(uint8_t data) {
    while (!(USART3.STATUS & USART_DREIF_bm));
    USART3.TXDATAL = data;
}

int main(void) {
    SYSTEM_Initialize();

    // Koppel bovenstaande interrupt handler functie aan ADC0 ISR.
    ADC0_ConversionDoneCallbackRegister(ADC0InterruptHandler);

    // sendflag bepaalt of er een nieuwe meting is
    // We versturen de 8 meest significante bits (schuif 4 opzij)
    // We resetten sendflag
    while (1) {
        sleep_mode();
       TCA0_SPLIT_HCMP0 = adcres >> 4;
        if (sendflag) {
            usart_putchar(adcres >> 4);
            
            sendflag = 0;
        }
    }
}
