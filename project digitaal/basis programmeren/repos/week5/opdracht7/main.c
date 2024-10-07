// week 5 7 t/m 16 en week 6

#include <stdio.h>

int isSchrikkel(int jaar) {
	if ((jaar % 4 == 0 && !(jaar % 100 == 0)) || jaar % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}


void main() {
	for (int i = 0; i < 2023; i++) {
		printf("%d: %d\n", i, isSchrikkel(i));
	}
}