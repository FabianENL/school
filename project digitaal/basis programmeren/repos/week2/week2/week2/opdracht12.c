#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	int grondgetal, exponent;

	printf("Geef een grondgetal op >> ");
	scanf("%d", &grondgetal);

	printf("Geef een exponent op >> ");
	scanf("%d", &exponent);

	printf("%d ^ %d = %d ", grondgetal, exponent, (int)pow(grondgetal, exponent));
}