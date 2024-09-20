#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float a, b, c, d, e, f;
	printf("Geef 6 floats op >> ");
	scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

	float gemiddelde = (a + b + c + d + e + f) / 6;

	if (gemiddelde >= 5.5) {
		printf("Goed bezig! je hebt een %.1f gemiddeld.", gemiddelde);
	}
	else {
		printf("Oeii, onvoldoende. Je hebt een %.1f gemiddeld.", gemiddelde);
	}
}