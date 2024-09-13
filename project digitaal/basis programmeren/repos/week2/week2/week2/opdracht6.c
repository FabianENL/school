#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int i = 0;

	while (i < 2147483647) {
		printf("%d\n", i);
		i++;
	}
}