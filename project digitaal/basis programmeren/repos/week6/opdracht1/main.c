#include <stdio.h>
#include <stdint.h>

void bits(uint8_t x)
{
	for (int i = sizeof(x) << 3; i; i--)
		putchar('0' + ((x >> (i - 1)) & 1));
}

void main() {
	uint8_t BIT0 = 0b00000001;
	uint8_t BIT1 = 0b00000010;
	uint8_t BIT2 = 0b00000100;
	uint8_t BIT3 = 0b00001000;
	uint8_t BIT4 = 0b00010000;
	uint8_t BIT5 = 0b00100000;
	uint8_t BIT6 = 0b01000000;
	uint8_t BIT7 = 0b10000000;


	// opdracht 3
	printf("opdracht 3\n");
	bits(BIT0 = BIT0 & BIT1);
	printf("\n");
	bits(BIT0 &= BIT1);
	printf("\n");
	bits(BIT0 &= ~BIT1);
	printf("\n");
	bits(BIT1 = BIT1 | BIT2);
	printf("\n");
	bits(BIT1 |= BIT2);
	printf("\n");
	bits(BIT1 |= BIT2 | BIT3 | BIT4 | BIT5 | BIT6 | BIT7);
	printf("\n");
	bits(BIT1 ^= BIT4);
	printf("\n");
	bits(BIT2 &= BIT3 | BIT4 | BIT5 | BIT6);
	printf("\n");
}