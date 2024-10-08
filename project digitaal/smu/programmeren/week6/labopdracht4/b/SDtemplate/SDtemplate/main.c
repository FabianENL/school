
#define F_CPU   (4000000UL)  

#include <avr/io.h>
#include <avr/cpufunc.h>
#include <util/delay.h>
#include <string.h>
#include "FatFS/ff.h"
#include <avr/interrupt.h>


ISR(TCA0_OVF_vect)
{
	disk_timerproc();	// Drive timer procedure of low level disk I/O module
	TCA0.SINGLE.INTFLAGS = TCA_SINGLE_OVF_bm;
}


int main(void)
{
	TCA0.SINGLE.INTCTRL = TCA_SINGLE_OVF_bm;
	TCA0.SINGLE.PER = 156; // tick every 10 msec = 100 hz: clock = 4000000 / 256 = 15625 hz
	TCA0.SINGLE.CTRLA = (TCA_SINGLE_CLKSEL1_bm | TCA_SINGLE_CLKSEL2_bm);
	TCA0.SINGLE.CTRLA |= TCA_SINGLE_ENABLE_bm;

	sei();

	FATFS FatFs;

	// init sdcard
	UINT bw;
	f_mount(&FatFs, "", 1);		// Give a work area to the FatFs module
	
	// open file
	
	
	PORTE.DIR = PORTE.DIR | PIN0_bm;
	
	
	while(1)
	{
		FIL *fp = (FIL *)malloc(sizeof (FIL));
		
		if (f_open(fp, "file.txt", FA_WRITE | FA_OPEN_APPEND) == FR_OK) // Create a file
		{
			char buffer[50];
			
			int bit1 = (PORTE.IN & PIN3_bm) ? 0 : 1;
			int bit2 = (PORTE.IN & PIN2_bm) ? 0 : 1;
			int bit3 = (PORTE.IN & PIN1_bm) ? 0 : 1;
			
			sprintf(buffer, "Hai. %d %d %d\r\n", bit1, bit2, bit3);
			
			f_write(fp, buffer, strlen(buffer), &bw);	// Write data to the file
			f_close(fp);// Close the file
			
			
			PORTE.OUTSET = PIN0_bm;
			_delay_ms(100);
			PORTE.OUTCLR = PIN0_bm;
			_delay_ms(900);zx
			
			
		}else{
			PORTE.OUTSET = PIN0_bm;
		}
	}
}


