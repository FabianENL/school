/*
 * labopdracht1.c
 *
 * Created: 1-10-2024 08:38:11
 * Author : fabia
 */ 

#include <avr/io.h>
int main()
{
	PORTA.DIR = PORTA.DIR | 0xF0;
    PORTF.DIR = PORTF.DIR | 0xC;
    
    
    while(1)
    {
        PORTF.OUTSET = PIN3_bm;
        // PORTA.OUTSET = 0x30;
		
		
		if(!(PORTE.IN & PIN3_bm) && (PORTE.IN & PIN2_bm) && (PORTE.IN & PIN1_bm) || (PORTE.IN & PIN3_bm) && (PORTE.IN & PIN2_bm) && !(PORTE.IN & PIN1_bm) || (PORTE.IN & PIN3_bm) && !(PORTE.IN & PIN2_bm) && (PORTE.IN & PIN1_bm)){
			if(PORTA.OUTSET != 0x10){
				PORTA.OUTCLR = 0xFF;
				PORTA.OUTSET = 0x10;
			}
		} else if(!(PORTE.IN & PIN3_bm) && !(PORTE.IN & PIN2_bm) && (PORTE.IN & PIN1_bm) || (PORTE.IN & PIN3_bm) && !(PORTE.IN & PIN2_bm) && !(PORTE.IN & PIN1_bm)){
			if(PORTA.OUTSET != 0x20){
				PORTA.OUTCLR = 0xFF;
				PORTA.OUTSET = 0x20;
			}
		} else if(!(PORTE.IN & PIN3_bm) && !(PORTE.IN & PIN2_bm) && !(PORTE.IN & PIN1_bm)){
			if(PORTA.OUTSET != 0x30){
				PORTA.OUTCLR = 0xFF;
				PORTA.OUTSET = 0x30;
			}
		}
		else{
			if(PORTA.OUTSET != 0x00){
				PORTA.OUTCLR = 0xFF;
				PORTA.OUTSET = 0x00;
			}
		}
		
    }
}