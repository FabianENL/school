#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float a, b, c;

	printf("Vul 3 getallen in >> ");
	scanf("%f %f %f", &a, &b, &c);

	float average = (a + b + c) / 3;

	printf("De gemiddelde van de 3 integers is %.3f", average);
}