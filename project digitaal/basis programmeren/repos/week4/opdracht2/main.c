#include <stdio.h>

int n = 0;
int aantalkeer() {
	n++;
	return n;
}

void main() {
	for (int i = 0; i < 10; i++) {
		aantalkeer();
	}

	printf("aantalkeer() is %d keer aangeroepen", n);
}