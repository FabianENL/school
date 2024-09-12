#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b;
	printf("vul 2 integers in >> ");
	scanf("%d %d", &a, &b);

	if (a == b) {
		printf("de getallen zijn hetzelfde");
	}
	else {
		printf("de getallen zijn niet hetzelfde");
	}
}