#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int leeftijd;

	printf("Geef uw leeftijd op >> ");
	scanf("%d", &leeftijd);

	printf("U bent %d maanden oud.", leeftijd * 12);
}