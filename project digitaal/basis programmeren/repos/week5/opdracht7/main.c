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

int schrikkelDagen(int d1, int m1, int y1, int d2, int m2, int y2) {
	int count = 0;

	if ((d1 <= 29 && m1 <= 2) || m1 < 2) {
		count += 1;
	}

	if ((d2 >= 29 && m2 >= 2) || m2 > 2) {
		count += 1;
	}

	for (int i = y1 + 1; i < y2 - 1; i++) {
		if (isSchrikkel(i)) {
			count += 1;
		}
	}

	return count;
}


void main() {
	int dagen = schrikkelDagen(1, 1, 2000, 3, 3, 2020);
	printf("%d", dagen);
}