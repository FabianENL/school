/*
 * labopdracht4_v3.c
 *
 * Created: 1-10-2024 15:48:57
 * Author : fabia
 */ 

#include <avr/io.h>

void write(int data){
	// check of je niet een oneindige re-write krijgt naar het 7 segmenten display
	if(PORTA.OUTSET != data){
		// clear de display en schrijf de nieuwe data
		PORTA.OUTCLR = 0xFF;
		PORTA.OUTSET =  data;
	}
}

int main(void)
{
	// definieer de outputs
	PORTA.DIR = PORTA.DIR | 0xF0;
	PORTF.DIR = PORTF.DIR | 0xC;
	
	int counter;
	
    while (1) 
    {
		// zet blanking op high
		PORTF.OUTSET = PIN3_bm;
		
		// tel hoeveel knoppen er in zijn gedrukt
		counter = !(PORTE.IN & PIN3_bm) + !(PORTE.IN & PIN2_bm) + !(PORTE.IN & PIN1_bm);
		
		// roep de functie write om en zet decimaal cijfer om in hexadecimaal cijfer
		write(counter * 16);
    }
}

