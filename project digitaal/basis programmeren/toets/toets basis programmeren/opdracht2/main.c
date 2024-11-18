#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b, c;

	int a2, b2;

	printf("Geef int a op >>> ");
	scanf("%d", &a);

	printf("Geef int b op >>> ");
	scanf("%d", &b);

	printf("Geef int c op >>> ");
	scanf("%d", &c);

	if (a > b && a > c) {
		printf("%d\n", a);
		a2 = b;
		b2 = c;
	}
	else if (b > a && b > c) {
		printf("%d\n", b);
		a2 = a;
		b2 = c;
	}
	else {
		printf("%d\n", c);
		a2 = a;
		b2 = b;
	}

	if (a2 > b2) {
		printf("%d \n%d", a2, b2);
	}
	else{
		printf("%d \n%d", b2, a2);
	}

	


}