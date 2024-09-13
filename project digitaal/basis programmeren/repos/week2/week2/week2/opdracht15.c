#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

void main() {
	int n;
	int result = 0;

	printf("Geef een n op >> ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		result *= 10;
		result += i;
		printf("%d \n", result);
	}
}