/*
 * voortgangsopdracht.c
 *
 * Created: 1-10-2024 11:41:00
 * Author : fabia
 */ 

#include <avr/io.h>
int main()
{
	PORTE.DIR = PORTE.DIR | PIN0_bm;
	PORTE.PIN3CTRL = PORTE.PIN3CTRL | PORT_PULLUPEN_bm;
	while(1)
	{
		if ((!(PORTE.IN & PIN3_bm) && !(PORTE.IN & PIN2_bm) || !(PORTE.IN & PIN1_bm) && !(PORTE.IN & PIN2_bm) || !(PORTE.IN & PIN1_bm) && !(PORTE.IN & PIN3_bm)) && !(!(PORTE.IN & PIN3_bm) && !(PORTE.IN & PIN2_bm) && !(PORTE.IN & PIN1_bm)))
		{
			PORTE.OUTSET = PIN0_bm;
		}
		else
		{
			PORTE.OUTCLR = PIN0_bm;
		}
	}
}

