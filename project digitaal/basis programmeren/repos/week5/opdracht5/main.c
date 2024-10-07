#include <stdio.h>

int max(int* arr, int length) {
	int maximum = 0;

	for (int i = 0; i < length; i++) {
		if (arr[i] > maximum) {
			maximum = arr[i];
		}
	}

	return maximum;
}

void main() {
	int b[10] = { 6,47,7,25,88,51,4,55,75,12 };

	printf("Maximum van de array: %d", max(b, 10));
}