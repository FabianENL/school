#include <stdio.h>


void aaaa(int * a, int * b) {
	*a = *a + *b;
	*b = *b - 200;
}

void main() {
	/*int x = 6;
	int* y = &x;
	printf("%d\n",  * y);
	*y = 20;
	printf("%d\n", x);*/


	int a = 1;
	int b = 2;

	aaaa(&a, &b);

	printf("A: %d, B: %d", a, b);
}