#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a;
	printf("Vul een integer in >> ");
	scanf("%d", &a);

	printf("%d in het kwadraat is %d", a, a * a);
}