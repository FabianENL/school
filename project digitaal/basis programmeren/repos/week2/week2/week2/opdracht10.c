#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	int n;

	printf("Geef een n waarde op >> ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		printf("De wortel van %d is %.2f \n", i, sqrt(i));
	}
}