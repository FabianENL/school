/*
 * P1ViewTelegram.c
 *
 * Created: 24-8-2022 13:57:29
 * Author : jk0050363
 */ 

#define F_CPU                           (16000000UL)         /* using 16 MHz crystal */

#include <avr/io.h>
#include <avr/cpufunc.h>
#include <util/delay.h>
#include <string.h>
#include "OLED/SSD1306.h"
#include "OLED/Font5x8.h"

enum DSMR {V2, V5};
int dsmr = V5;

#define MAX_COMMAND_LEN 80

#define USART2_BAUD_RATE(BAUD_RATE)     ((float)(64 * F_CPU / (16 * (float)BAUD_RATE)) + 0.5)

// USART2 is the port connected to the P1 port
void USART2_init(void)
{
	// AVR128DB48
	PORTF.DIRCLR = PIN5_bm;										/* set pin 5 of PORT B (RXd) as input*/
	
	PORTMUX_USARTROUTEA |= 0x10;

	if (dsmr == V2)
	{
		USART2.BAUD = (uint16_t)(USART2_BAUD_RATE(9600));		/* set the baud rate*/
		USART2.CTRLC = USART_PMODE1_bm | USART_CHSIZE1_bm;		/* set the data format to 7-bit, even parity*/
	}
	else
	{
		USART2.BAUD = (uint16_t)(USART2_BAUD_RATE(115200));		/* set the baud rate*/
		USART2.CTRLC = USART_CHSIZE1_bm | USART_CHSIZE0_bm;		/* set the data format to 8-bit, no parity*/
	}
	
	USART2.CTRLB |= USART_RXEN_bm;								/* enable receiver*/
}

uint8_t USART2_Read()
{
	while (!(USART2.STATUS & USART_RXCIF_bm));
	
	return USART2.RXDATAL;
}

void CLOCK_XOSCHF_crystal_init(void)
{
	/* Enable crystal oscillator with frequency range 16 MHz and 4K cycles start-up time */
	ccp_write_io((uint8_t *) &CLKCTRL.XOSCHFCTRLA, CLKCTRL_RUNSTDBY_bm
			 	 | CLKCTRL_CSUTHF_4K_gc
				 | CLKCTRL_FRQRANGE_16M_gc
				 | CLKCTRL_SELHF_XTAL_gc
				 | CLKCTRL_ENABLE_bm);

	/* Confirm crystal oscillator start-up */
	while(!(CLKCTRL.MCLKSTATUS & CLKCTRL_EXTS_bm));

	/* Clear Main Clock Prescaler */
	ccp_write_io((uint8_t *) &CLKCTRL.MCLKCTRLB, 0x00);

	/* Set the main clock to use XOSCHF as source, and enable the CLKOUT pin */
	ccp_write_io((uint8_t *) &CLKCTRL.MCLKCTRLA, CLKCTRL_CLKSEL_EXTCLK_gc | CLKCTRL_CLKOUT_bm);

	/* Wait for system oscillator changing to complete */
	while(CLKCTRL.MCLKSTATUS & CLKCTRL_SOSC_bm);

	/* Clear RUNSTDBY for power save during sleep */
	ccp_write_io((uint8_t *) &CLKCTRL.XOSCHFCTRLA, CLKCTRL.XOSCHFCTRLA & ~CLKCTRL_RUNSTDBY_bm);

	/* Change complete and the main clock is 16 MHz */
}

int main(void)
{
	char command[MAX_COMMAND_LEN];
	uint8_t index = 0;
	char c;
	uint16_t counter = 0;
	char buffer[20];
	
	CLOCK_XOSCHF_crystal_init();

	USART2_init();

	GLCD_Setup();
	GLCD_SetFont(Font5x8, 5, 8, GLCD_Overwrite);
	GLCD_GotoXY(1, 1);
	
	if (dsmr == V2)
	{
		GLCD_PrintString("Decoding DSMR V2");
	}
	else
	{
		GLCD_PrintString("Decoding DSMR V5");
	}

	GLCD_Render();

    /* Replace with your application code */
    while (1) 
    {
		// echo received P1 data on USB port
		c = USART2_Read();
		
		if(c != '\n' && c != '\r')
		{
			command[index++] = c;
			if(index > MAX_COMMAND_LEN)
			{
				index = 0;
		    }
		}
		        
		if(c == '\n')
		{
			int kw, deckw;
			        
			command[index] = '\0';
			index = 0;
			
			        
			if (sscanf(command, "1-0:1.7.0(%d.%d*kW)", &kw, &deckw) == 2)
			{
				if (dsmr == V2)
				{
					// v2 is sending 2 digits after the '.', so 10 W accuracy
					deckw *= 10;
				}
				
				counter++;
				        
				sprintf(buffer, "%5d: %5d W", counter, kw * 1000 + deckw);
				
		        GLCD_GotoXY(10, 30);
		        GLCD_PrintString(buffer);
		        GLCD_Render();
				
			}
			
			float usage; 

			if (sscanf(command, "0-1:24.2.1(%f*m3)", &usage) == 1)
			{
				sprintf(buffer, "%5d: %.3f m3", counter, usage);
				
				GLCD_GotoXY(10, 40);
				GLCD_PrintString(buffer);
				GLCD_Render();
			}
		}
    }
}

