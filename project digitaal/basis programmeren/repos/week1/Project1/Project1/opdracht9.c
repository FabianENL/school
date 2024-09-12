#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float speed;

	printf("geef een snelheid op in km/h >> ");
	scanf("%f", &speed);

	printf("de snelheid is omgerekend %.2f m/s", speed / 3.6);
}