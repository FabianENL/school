#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float volt, resistance, amp;
	printf("geef de spanning op in volt >> ");
	scanf("%f", &volt);

	printf("geef de weerstand op in ohm >> ");
	scanf("%f", &resistance);

	printf("De stroomsterkte is %.2f ampere", volt / resistance);
}