#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int i = 0;

	while (i < 200) {
		i++;

		if (!(i % 2 > 0)) {
			printf("%d \n", i);
		}
	}
}