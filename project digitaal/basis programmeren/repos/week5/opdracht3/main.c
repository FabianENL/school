#include <stdio.h>

void optellen(int* arr1, int* arr2, int* arr3, int lengte) {
	for (int i = 0; i < lengte; i++) {
		arr3[i] = arr1[i] + arr2[i];
	}
}

void printArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void main() {
	int a[10] = { 4,22,1,22,3,5,73,12,33,1 };
	int b[10] = { 6,47,7,25,88,51,4,55,75,12 };
	int c[10];

	optellen(a, b, c, 10);

	printf("Array 1: ");
	printArray(a, 10);

	printf("Array 2: ");
	printArray(b, 10);

	printf("Array 3: ");
	printArray(c, 10);

	
}