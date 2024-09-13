#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
	char character;

	char klinkers[] = "aeiouy";
	char medeklinkers[] = "bcdfghjklmnpqrstvwxz";

	printf("Geef een karakter op >> ");
	scanf("%c", &character);

	if (strchr(klinkers, tolower(character)) != NULL) {
		printf("%c is een klinker!", character);
	}
	else {
		printf("%c is een medeklinker!", character);
	}
}