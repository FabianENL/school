
#define F_CPU  (4000000UL)      

#include <avr/io.h>
#include <avr/cpufunc.h>
#include <util/delay.h>
#include <string.h>
#include "OLED/SSD1306.h"
#include "OLED/Font5x8.h"


int main(void)
{
	GLCD_Setup();
	GLCD_SetFont(Font5x8, 5, 8, GLCD_Overwrite);
	
	// PORTE.DIRSET = PORTE.DIR | PIN0_bm;
	
	char buffer[10];
	int counter = 0;
		
	while(1)
	{		
		if(PORTE.IN & PIN3_bm){
			while(PORTE.IN & PIN3_bm){
				;
			}
			counter++;
			if(counter>9){counter = 0;}
				
			GLCD_GotoXY(60,30);
			sprintf(buffer, "%d", counter);
			GLCD_PrintString(buffer);
			
			// GLCD_Clear();
			GLCD_Render();
		}
		
		// _delay_ms(1000);
	}
}
