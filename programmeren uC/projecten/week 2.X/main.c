/*
 * File:   main.c
 * Author: fabia
 *
 * Created on February 11, 2025, 1:11 PM
 */


#include <avr/io.h>

int main(void) {
    /* Replace with your application code */
    PORTB.DIR |= PIN3_bm;
    
    PORTB.PIN2CTRL = PORT_PULLUPEN_bm;
    
    volatile int a = 0; 

    while (1) {
        if(PORTB.IN & PIN2_bm){
            PORTB.OUTSET = PIN3_bm;
        } else {
            PORTB.OUTCLR = PIN3_bm;
            a++;
        }

    }
}
