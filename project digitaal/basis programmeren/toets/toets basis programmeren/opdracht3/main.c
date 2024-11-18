#include <stdio.h>

double inverseFaculteit(int n) {
	double sum = 1;

	for (int i = 1; i <= n; i++) {
		sum *= i;
		// printf("%d : %d\n", 1, sum);
	}

	return 1 / sum;
}

void main() {
	int n = 5;
	printf("de inverse faculteit van %d = %.10lf", n, inverseFaculteit(n));
}