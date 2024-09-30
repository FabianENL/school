#include <stdio.h>

int cijferSwap(int n) {
	int returnNum = 0;
	while (n > 0) {
		returnNum = returnNum * 10 + n % 10;
		n = n / 10;
	}
	return returnNum;
}

void main() {
	int n = 12345;
	printf("%d ==> %d", n, cijferSwap(n));
}