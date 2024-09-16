#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a;

	printf("Geef een integer op >> ");
	scanf_s("%d", &a);

	while (a < 100) {
		a *= -2;
		printf("A: %d \n", a);
	}
}