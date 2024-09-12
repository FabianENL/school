#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float price;
	printf("geef een prijs op excl 21%% btw >> ");
	scanf("%f", &price);

	printf("De prijs inclusief 21%% btw is %.2f", price * 1.21);
}