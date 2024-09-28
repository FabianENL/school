#include <avr/io.h>
int main()
{
	PORTE.DIR = PORTE.DIR | PIN0_bm;
	PORTE.PIN3CTRL = PORTE.PIN3CTRL | PORT_PULLUPEN_bm;
	while(1)
	{
		if (PORTE.IN & PIN3_bm)
		{
			PORTE.OUTCLR = PIN0_bm;
		}
		else
		{
			PORTE.OUTSET = PIN0_bm;
		}
	}
}