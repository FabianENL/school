#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	float rekening = 1000.0;

	printf("Jaar %d, Saldo: %.2f \n", 0, rekening);

	for (int i = 1; i <= 15; i++) {
		rekening *= 1.02f;
		printf("Jaar %d, Saldo: %.2f \n", i, rekening);
	}
}