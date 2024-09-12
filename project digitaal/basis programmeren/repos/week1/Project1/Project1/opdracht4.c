#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b, c;
	printf("vul 3 integers in >> ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c) {
		printf("getal 1 is het grootste");
	}
	else if (b > a && b > c) {
		printf("getal 2 is het grootste getal");
	}
	else {
		printf("getal 3 is het grootste getal");
	}
}