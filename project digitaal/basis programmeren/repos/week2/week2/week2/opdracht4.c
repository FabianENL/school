#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char character;
	printf("Geef een karakter op >> ");
	scanf("%c", &character);

	printf("De ascii index an %c is %d", character, (int)character);
}