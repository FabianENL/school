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

int priemSom(int range) {
	int sum = 0;
	for (int n = 1; n <= range; n++) { 
		if (isPriem(n)) {
			sum += n;
		}
	}
	return sum;
}

void main() {
	int range = 13;
	printf("De som van alle priem getallen tot en met %d = %d", range, priemSom(range));
}