#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b;

	printf("Geen 2 integers op (a en b) >> ");
	scanf("%d %d", &a, &b);

	if (a % b == 0) {
		printf("Waar, %d is deelbaar door %d", a, b);
	}
	else {
		printf("Niet waar, %d is niet deelbaar door %d", a, b);
	}
}