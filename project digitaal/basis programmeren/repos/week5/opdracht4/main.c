#include <stdio.h>

int komtVoor(int* arr, int length, int getal) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == getal) {
			return 1;
		}
	}
	return 0;
}

void main() {
	int a[10] = { 22,90,3,26,58,34,34,2,19,14 };

	if (komtVoor(a, 10, 35)) {
		printf("Ja!");
	}
	else {
		printf("Nee!");
	}
}