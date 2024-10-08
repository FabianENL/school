/*
 * lesOpdracht.c
 *
 * Created: 8-10-2024 09:05:42
 * Author : fabia
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		PORTE.DIRSET = PORTE.DIR | PIN0_bm;
    }
}

