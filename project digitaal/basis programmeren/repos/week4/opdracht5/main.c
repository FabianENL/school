#include <stdio.h>

int som37(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
		if (i % 7 == 0) {
			sum += i;
		}
	}
	return sum;
}

void main() {
	printf("%d", som37(10));
}