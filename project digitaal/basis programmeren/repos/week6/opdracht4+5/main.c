#include <stdio.h>
#include <stdint.h>

void bits(uint8_t x)
{
	for (int i = sizeof(x) << 3; i; i--)
		putchar('0' + ((x >> (i - 1)) & 1));
}

uint8_t BITOR(uint8_t a, uint8_t b) {
	return a | b;
}

uint8_t BITANDINV(uint8_t a, uint8_t b) {
	b = ~b;
	return a & b;
}

uint8_t BITTOGGLE(uint8_t a, uint8_t b) {
	return a ^ b;
}

uint8_t BITSHIFT(uint8_t a, int b) {
	if (b < 0) {
		return a << -b;
	}
	return a >> b;
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

	printf("De or van bit0 = 1 (00000001) en bit1 = 2 (00000010)\n\n");

	bits(BIT0);
	printf("\n");
	bits(BIT1);
	printf("\n");
	printf("-------- | (or)\n");
	bits(BITOR(BIT0, BIT1));
	printf("\n\n\n");

	printf("De and van bit2 = 4 (00000100) en inverse bit3 = 8 (00001000) wordt (11110111)\n\n");

	bits(BIT2);
	printf("\n");
	bits(~BIT3);
	printf("\n");
	printf("-------- & (and)\n");

	bits(BITANDINV(BIT2, BIT3));
	printf("\n\n\n");


	printf("BIT4 = 16 (00010000) naar rechts shiften met 3 (b = 3)\n\n");

	bits(BIT4);
	printf(" --> ");
	bits(BITSHIFT(BIT4, 3));
	printf("\n\n\n");


	printf("BIT5 = 32 (00100000) naar links shiften met 1 (b = -1)\n\n");

	bits(BIT5);
	printf(" --> ");
	bits(BITSHIFT(BIT5, -1));
	printf("\n\n\n");


	printf("De bits van BIT6 = 64 (01000000) toggelen met BIT7 = 128 = (10000000) \n\n");

	bits(BIT6);
	printf("\n");
	bits(BIT7);
	printf("\n");
	printf("-------- ^ (xor)\n");
	uint8_t tempBit = BIT6 ^ BIT7;
	bits(tempBit);


	printf("\n\n");
	printf("Nogmaals:\n\n");

	bits(tempBit);
	printf("\n");
	bits(BIT7);
	printf("\n");
	printf("-------- ^ (xor)\n");
	tempBit ^= BIT7;
	bits(tempBit);



}