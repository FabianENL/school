#define F_CPU 4000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    PORTE.DIR |= PIN0_bm;
    PORTD.DIR |= PIN5_bm;
    PORTB.DIR |= PIN3_bm;
    
    while (1) {
        PORTE.OUT |= PIN0_bm;
        PORTB.OUT |= PIN3_bm;
         _delay_ms(500);
         
         PORTE.OUTCLR = PIN0_bm;
         PORTD.OUTCLR = PIN5_bm;
         _delay_ms(500);
         
        PORTD.OUT |= PIN5_bm;
        PORTB.OUTCLR = PIN3_bm;
        _delay_ms(500);
    }

    return 0;
}
