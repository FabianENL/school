#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num;

	printf("Geef een nummer op >> ");
	scanf("%d", &num);

	if (num == 2) {
		printf("Priemgetal!");
	}
	else {
		for (int i = 2; i < num; i++) {
			if (num % i == 0) {
				printf("Geen priemgetal!");
				return 0;
			}
		}
		printf("Priemgetal!");
	}

}