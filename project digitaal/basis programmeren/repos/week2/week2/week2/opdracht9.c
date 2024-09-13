#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float piekverbruik, dalverbruik;

	printf("Geef uw piek verbruik op in kWh >> ");
	scanf("%f", &piekverbruik);

	printf("Geef uw piek dalverbruik op in kWh >> ");
	scanf("%f", &dalverbruik);

	printf("Uw jaarkosten zijn: %.02f euro", piekverbruik * 0.46 + dalverbruik * 0.4 + 80);
}