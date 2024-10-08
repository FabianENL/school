// week 5 7 t/m 16 en week 6

#include <stdio.h>

void printArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}



int isSchrikkel(int jaar) {
	if ((jaar % 4 == 0 && !(jaar % 100 == 0)) || jaar % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int schrikkelDagen(int d1, int m1, int y1, int d2, int m2, int y2) {
	int schrikkeldagen = 0;

	for (int jaar = y1; jaar <= y2; jaar++) {
		if (isSchrikkel(jaar)) {
			if ((jaar > y1 || (jaar == y1 && (m1 < 2 || (m1 == 2 && d1 <= 29)))) && (jaar < y2 || (jaar == y2 && (m2 > 2 || (m2 == 2 && d2 >= 29))))) {
				schrikkeldagen++;
			}
		}
	}

	return schrikkeldagen;
}


int eersteWeekDagMaand(int m, int y) {
	int dagen[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isSchrikkel(y)) { dagen[1] = 29; }

	int dagenInJaar = 0;
	for (int i = 0; i < m - 1; i++) {
		dagenInJaar += dagen[i];
	}

	int jarenOffset = y - 2000;
	int dagenOffset = jarenOffset * 365 + schrikkelDagen(1, 1, 2000, 1, 1, y) + 5 + dagenInJaar;

	return (dagenOffset % 7);
}


int vulMaandArray(int m, int y, int* maand) {
	int maanden[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (isSchrikkel(y)) {
		maanden[1] = 29;
	}

	for (int i = 0; i < maanden[m]; i++) {
		maand[i] = i + 1;
	}

	
}


void main() {
	int maand[31] = {0};
	vulMaandArray(1, 2024, maand);


	printArray(maand, 31);
}