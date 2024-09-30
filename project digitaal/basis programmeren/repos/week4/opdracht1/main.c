#include <stdio.h>

double gemiddelde(int a, int b, int c, int d) {
	return ((a + b + c + d) / 4);
}

void main() {
	int a, b, c, d;
	printf("Geef 4 ints op >> ");
	scanf_s("%d %d %d %d", &a, &b, &c, &d);

	printf("\nHet gemiddelde is: %.2f", gemiddelde(a, b, c, d));
}