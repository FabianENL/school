#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float radius;
	printf("geef de radius van een cirkel in cm (met decimalen) >> ");
	scanf("%f", &radius);

	float A = 3.14 * (radius * radius);
	printf("de oppervlakte van uw cirkel is %.4f cm", A);
}