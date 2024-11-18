#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	double a, b, c;

	printf("Geef double a op >>> ");
	scanf("%lf", &a);

	printf("Geef double b op >>> ");
	scanf("%lf", &b);

	printf("Geef double c op >>> ");
	scanf("%lf", &c);

	printf("%.3f * %.3f * %.3f = %.3f", a, b, c, a * b * c);
}