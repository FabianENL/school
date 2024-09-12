#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b;

	printf("vul 2 getallin in >> ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		printf("getal 1 is het grootste getal");
	}
	else if (a < b) {
		printf("getal 2 is het grootste getal");
	}
	else {
		printf("beide getallen zijn even groot");
	}
}