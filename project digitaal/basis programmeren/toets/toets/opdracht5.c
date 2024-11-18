#include <stdio.h>

void draaiOm(int *p, int lengte) {
	int temp[10];
	for (int i = 0; i < lengte; i++) {
		temp[i] = p[i];
	}

	for (int i = 0; i < lengte; i++) {
		p[i] = temp[lengte - i - 1];
	}

	//for (int i = 0; i < lengte; i++);
}

void main() {
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	draaiOm(a, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
}