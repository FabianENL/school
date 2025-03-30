#include "mcc_generated_files/system/system.h"
#include <avr/sleep.h>
#include <util/delay.h>


void usart_putchar(uint8_t data) {
    while (!(USART3.STATUS & USART_DREIF_bm));
    USART3.TXDATAL = data;
}

int main(void) {
    SYSTEM_Initialize();
    
    while (1) {
        usart_putchar(121);
        _delay_ms(1000);
    }
}
