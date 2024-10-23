#define F_CPU (4000000UL)   //Specify CPU frequency.      

#include <avr/io.h>			//This header file includes the appropriate IO definitions for the device.
#include <avr/cpufunc.h>	//This header file contains macros that access special functions of the AVR CPU which do not fit into any of the other header files.
#include <util/delay.h>		//The functions in this header file are wrappers around the basic busy-wait functions from <util/delay_basic.h>.
#include <string.h>			//The string.h header defines one variable type, one macro, and various functions for manipulating arrays of characters.

#define USART3_BAUD_RATE(BAUD_RATE)     ((float)(64 * F_CPU / (16 * (float)BAUD_RATE)) + 0.5)
// USART3 is the port connected to the PC

void USART3_init(void)
{
	// AVR128DB48
	PORTB.DIRSET = PIN0_bm;										/* set pin 0 of PORT B (TXd) as output*/
	PORTB.DIRCLR = PIN1_bm;										/* set pin 1 of PORT B (RXd) as input*/
	
	USART3.BAUD = (uint16_t)(USART3_BAUD_RATE(115200));			/* set the baud rate*/
	
	USART3.CTRLC = USART_CHSIZE0_bm	| USART_CHSIZE1_bm;			/* set the data format to 8-bit*/
	
	USART3.CTRLB |= USART_TXEN_bm;								/* enable transmitter*/
}

void USART3_sendChar(char c)
{
	while(!(USART3.STATUS & USART_DREIF_bm))
	{
		;
	}
	USART3.TXDATAL = c;
}

void USART3_sendString(char *str)
{
	for(size_t i = 0; i < strlen(str); i++)
	{
		USART3_sendChar(str[i]);
	}
}

int main(void)
{
	USART3_init();
    
    while (1) 
    {
		USART3_sendString("Hello World!\r\n")
    }
}

