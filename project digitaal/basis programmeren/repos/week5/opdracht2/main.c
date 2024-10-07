#include <stdio.h>

int som(int* arr, int lengte) {
	int som = 0;

	for (int i = 0; i < lengte; i++) {
		som += arr[i];
	}

	return som;
}

void main() {
	int b[10] = { 6,47,7,25,88,51,4,55,75,12 };

	printf("De som van de array: %d", som(b, 10));
}