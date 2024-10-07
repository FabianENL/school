#include <stdio.h>



void main() {
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 1, 2, 3, 4, 5, 6 };

	int gelijk = 1;

	for (int i = 0; i < 6; i++) {
		if (arr1[i] != arr2[i]) {
			gelijk = 0;
			break;
		}
	}

	if (gelijk) {
		printf("gelijk");
	}
	else {
		printf("niet gelijk");
	}
}