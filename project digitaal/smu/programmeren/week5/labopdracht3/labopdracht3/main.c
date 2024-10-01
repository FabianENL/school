/*
 * labopdracht3.c
 *
 * Created: 1-10-2024 09:59:15
 * Author : fabia
 */ 

#include <avr/io.h>


int main(void)
{
	PORTE.DIR = PORTE.DIR | PIN0_bm;
	int on = 1;
    
    while (1) 
    {
		if(on)
		{
			PORTE.OUTCLR = PIN0_bm;
		} 
		else
		{
			PORTE.OUTSET = PIN0_bm;
		}
		on = !on;
    }
}

