#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int selection, num;

	printf("typ 0 voor een kwadraat. typ 1 voor een 3e macht >> ");
	scanf("%d", &selection);

	printf("typ het nummer in >> ");
	scanf("%d", &num);

	if (!selection) {
		printf("%d^2 is %d", num, num * num);
	}
	else {
		printf("%d^3 is %d", num, num * num * num);
	}
}