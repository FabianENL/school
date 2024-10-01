/*
 * labopdracht1.c
 *
 * Created: 1-10-2024 08:38:03
 * Author : fabia
 */ 

#include <avr/io.h>
int main()
{
	PORTE.DIR = PORTE.DIR | PIN0_bm; // maakt port e0 output
	
	while(1)
	{
		if (!(PORTE.IN & PIN2_bm))
		{
			PORTE.OUTCLR = PIN0_bm;
		}
		else
		{
			PORTE.OUTSET = PIN0_bm;
		}
	}
}
