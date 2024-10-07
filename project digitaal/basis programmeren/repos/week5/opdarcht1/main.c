#include <stdio.h>

void kwadrateer(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		arr[i] = arr[i] * arr[i];
	}
	return arr;
}

void main() {
	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };
	
	printf("Voor: \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}

	kwadrateer(a, 10);

	printf("\nNa: \n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
}