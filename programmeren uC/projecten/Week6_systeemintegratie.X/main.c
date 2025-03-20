#include "mcc_generated_files/system/system.h"
#include <avr/sleep.h>
#include <util/delay.h>

volatile uint16_t sensor_res = 0;
volatile uint16_t potmeter_res = 0;

volatile uint16_t waarde;

volatile uint8_t sendflag = 0;

void switchInput(){
    if(ADC0.MUXPOS == 0x4){
        ADC0.MUXPOS = 0x5;
    } else{
        ADC0.MUXPOS = 0x4;
    }
}

void ADC0InterruptHandler() {
    // TODO: Voeg hier de juiste ISR callback functie toe.
    // Kopieer de ADC uitlezing naar adcres
    // Tip: gebruik ADC0.RES of de juiste functie
    // Maak sendflag 1.
    
    switch(ADC0.MUXPOS){
        case(0x04): {
            sensor_res = ADC0.RES;
            sendflag = 1;
            break;
        }
        case(0x05): {
            potmeter_res = ADC0.RES;
            sendflag = 2;
            break;
        }
    }
    
}

/* Zet een char klaar op de transmitlijn van UART3. Deze wordt hardwarematig verstuurd */
void usart_putchar(uint8_t data) {
    while (!(USART3.STATUS & USART_DREIF_bm));
    USART3.TXDATAL = data;
}

int main(void) {
    SYSTEM_Initialize();
    
    SW0_SetInterruptHandler(&switchInput);
    
    // Koppel bovenstaande interrupt handler functie aan ADC0 ISR.
    ADC0_ConversionDoneCallbackRegister(ADC0InterruptHandler);

    // sendflag bepaalt of er een nieuwe meting is
    // We versturen de 8 meest significante bits (schuif 4 opzij)
    // We resetten sendflag
    while (1) {
        sleep_mode(); 
        
        waarde = ADC0.MUXPOS;
        
        if (sendflag == 1) {
            usart_putchar((sensor_res >> 4));
            TCA0_SPLIT_HCMP0 = (sensor_res >> 4);
            
            sendflag = 0;
        }
        if (sendflag == 2) {
            usart_putchar((potmeter_res >> 4));
            TCA0_SPLIT_HCMP0 = (potmeter_res >> 4);
            
            sendflag = 0;
        }
    }
}
