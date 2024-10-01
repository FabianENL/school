/*
 * labopdracht2.c
 *
 * Created: 1-10-2024 08:54:36
 * Author : fabia
 */ 

// A = e3 = (PORTE.IN & PIN3_bm)
// B = e2 = (PORTE.IN & PIN2_bm)
// C = e1 = (PORTE.IN & PIN1_bm)

#include <avr/io.h>
#include <stdio.h>
int main()
{
	PORTE.DIR = PORTE.DIR | PIN0_bm; // maakt port e0 output
	
	while(1)
	{
	
		if (!(PORTE.IN & PIN2_bm) && (PORTE.IN & PIN1_bm) || !(PORTE.IN & PIN2_bm) && !(PORTE.IN & PIN3_bm))
		{
			PORTE.OUTSET = PIN0_bm;
		} 
		else
		{
			PORTE.OUTCLR = PIN0_bm;
		}
	}
}


