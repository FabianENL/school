#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	int n;

	printf("Geef een n waarde op >> ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		printf("De afgerone wortel van %d is %d \n", i, (int)sqrt(i));
	}
}