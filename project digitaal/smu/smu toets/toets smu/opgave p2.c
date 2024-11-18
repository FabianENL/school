/*
 * P2.c
 *
 * Created: 23-10-2024 13:56:34
 * Author : fabia
 */ 
#define F_CPU 4000000UL


#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	PORTE.DIR = PORTE.DIR | PIN0_bm;
    /* Replace with your application code */
    while (1) 
    {
		PORTE.OUTSET = PIN0_bm;
		_delay_ms(1600);
		PORTE.OUTCLR = PIN0_bm;
		_delay_ms(400);
    }
}

