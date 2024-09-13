#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int x, y;

	printf("Geef 2 getallen op >> ");
	scanf("%d %d", &x, &y);

	if (x % 10 == y % 10) {
		printf("Het laatste nummer van beide getallen is hetzelfde");
	}
	else {
		printf("Het laatste nummer van beide getallen is niet hetzelfde");
	}
}