#include <stdio.h>

void sorteer(int* arr, int lengte) 
{
	int finished = 0;
	while (!finished) {
		int success = 1;
		for (int i = 0; i < lengte - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				success = 0;
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}

		if (success) { finished = 1; }
	}
}

void printArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void main() {
	int a[10] = { 11,32,49,67,8,96,57,94,7,3 };


	printf("A: ");
	printArray(a, 10);

	sorteer(a, 10);

	printf("A gesorteerd: ");
	printArray(a, 10);
}