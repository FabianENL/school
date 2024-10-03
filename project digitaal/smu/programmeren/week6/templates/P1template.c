/*
 * P1template.c
 *
 * Created: 24-8-2022 13:57:29
 * Author : jk0050363
 */ 

#define F_CPU     (16000000UL)         /* using 16 MHz crystal */

#include <avr/io.h>
#include <avr/cpufunc.h>
#include <util/delay.h>
#include <string.h>

enum DSMR {V2, V5};
int dsmr = V5;

#define USART3_BAUD_RATE(BAUD_RATE)     ((float)(64 * F_CPU / (16 * (float)BAUD_RATE)) + 0.5)
#define USART2_BAUD_RATE(BAUD_RATE)     ((float)(64 * F_CPU / (16 * (float)BAUD_RATE)) + 0.5)

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

void USART3_sendChar(char c)
{
	while(!(USART3.STATUS & USART_DREIF_bm));
	
	USART3.TXDATAL = c;
}

void USART3_sendString(char *str)
{
	for(size_t i = 0; i < strlen(str); i++)
	{
		USART3_sendChar(str[i]);
	}
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
	char c;
	
	CLOCK_XOSCHF_crystal_init();
	
	USART2_init();
	USART3_init();

    /* Replace with your application code */
    while (1) 
    {
		// echo received P1 data on USB port
		c = USART2_Read();
		USART3_sendChar(c);
    }
}

