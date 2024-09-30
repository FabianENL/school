#include <stdio.h>

int isPriem(int n) {
	if (n == 2) {
		return 1;
	}
	else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

void main() {
	if (isPriem(13)) {
		printf("Priem!");
	}
	else {
		printf("Geen priem");
	}
}