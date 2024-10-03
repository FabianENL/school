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

	GLCD_GotoXY(30, 0);
	GLCD_PrintString("Goedemiddag!");
	
	GLCD_DrawCircle(45, 32, 10, GLCD_Black);
	GLCD_DrawCircle(45, 32, 2, GLCD_Black);
	
	GLCD_DrawCircle(85, 32, 10, GLCD_Black);
	GLCD_DrawCircle(85, 32, 2, GLCD_Black);
	
	GLCD_DrawLine(45, 50, 85, 50, GLCD_Black);
		
	GLCD_InvertRect(30, 0, 100, 7);
	GLCD_InvertScreen();

	GLCD_Render();
	return 0;
}
