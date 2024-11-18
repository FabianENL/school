
#define F_CPU  (4000000UL)      

#include <avr/io.h>
#include <avr/cpufunc.h>
#include <util/delay.h>
#include <string.h>
#include "OLED/SSD1306.h"
#include "OLED/Font5x8.h"

#define sw3 !(PORTE.IN & PIN1_bm)
#define sw2 !(PORTE.IN & PIN2_bm)
#define sw1 !(PORTE.IN & PIN3_bm)


int main(void)
{
	GLCD_Setup();
	GLCD_SetFont(Font5x8, 5, 8, GLCD_Overwrite);
	
	char buffer[100];
		
	while(1)
	{
		GLCD_GotoXY(0,0);
		
		sprintf(buffer, "%3d %3d %3d", sw1, sw2, sw3);
		GLCD_PrintString(buffer);
		
		GLCD_GotoXY(0,20);
		sprintf(buffer, "Er zijn nu %3d", sw1 + sw2 + sw3);
		GLCD_PrintString(buffer);
		GLCD_GotoXY(0,35);
		GLCD_PrintString("ingedrukt");
		
		
		GLCD_Render();
		_delay_ms(200);
	}
}
