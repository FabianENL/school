#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int n;
	printf("Geef een n (integer) op >> ");
	scanf("%d", &n);

	int sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += i;
		if (i == n) {
			printf("%d = %d", i, sum);
		}
		else {
			printf("%d + ", i);
		}
	}
}