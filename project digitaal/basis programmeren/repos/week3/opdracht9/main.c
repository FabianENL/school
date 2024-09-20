#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int old1 = 0, old2 = 1, num = 1;
	int index;

	printf("Geef een index >> ");
	scanf("%d", &index);

	if (index == 0) {
		printf("0");
		return 0;
	}

	if (index == 1) {
		printf("1");
		return 0;
	}

	for (int i = 2; i <= index; i++) {
		num = old1 + old2;
		old1 = old2;
		old2 = num;
		printf("%d: %d : %d \n", old1, old2, num);
	}

	printf("%d", num);
}