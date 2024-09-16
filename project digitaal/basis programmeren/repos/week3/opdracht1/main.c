#include <stdio.h>


void main() {
	int a;

	printf("Geef een integer op >> ");
	scanf_s("%d", &a);

	if (a > 0) {
		printf("Groter dan 0");
	}
	else {
		printf("kleiner of gelijk aan 0");
	}
}