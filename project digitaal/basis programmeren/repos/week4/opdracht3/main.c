#include <stdio.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void main() {
	int a = 10;
	int b = 5;

	printf("A: %d, adress: %p \nB: %d, adress: %p \n\n", a, &a, b, &b);
	swap(&a, &b);
	printf("A: %d, adress: %p \nB: %d, adress: %p", a, &a, b, &b);
}