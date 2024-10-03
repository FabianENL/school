
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
	
	int i = 0;
	char buffer[10];
		
	while(1)
	{
		GLCD_GotoXY(90,50);
		sprintf(buffer, "%3d", i);
		GLCD_PrintString(buffer);
		
		GLCD_GotoXY(30,0);
		sprintf(buffer, "Goedemiddag!");
		GLCD_PrintString(buffer);
		
		
		GLCD_Render();
		_delay_ms(1000);
		i++;
	}
}
