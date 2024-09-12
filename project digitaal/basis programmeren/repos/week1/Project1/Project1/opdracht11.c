#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b;
	printf("geef 2 nummers op om door elkaar te delen >> ");
	scanf("%d %d", &a, &b);

	if ((a % b) == 0) {
		printf("Het antwoord van %d / %d is %d", a, b, a / b);
	}
	else {
		printf("het antwoord van %d / %d is %d rest %d", a, b, a / b, a % b);
	}
}