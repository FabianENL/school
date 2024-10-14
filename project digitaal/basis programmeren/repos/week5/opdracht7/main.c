// week 5 7 t/m 16

#include <stdio.h>

void printArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}



int isSchrikkel(int jaar) {
	return ((jaar % 4 == 0 && !(jaar % 100 == 0)) || jaar % 400 == 0);
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

	int dagenInJaar = 0;
	for (int i = 0; i < m - 1; i++) {
		dagenInJaar += dagen[i];
	}

	int jarenOffset = y - 2000;
	int dagenOffset = ((jarenOffset * 365) + schrikkelDagen(1, 1, 2000, 1, m, y))+ 5 + dagenInJaar;

	return (dagenOffset % 7);
}


int vulMaandArray(int m, int y, int* maand) {
	int maanden[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (isSchrikkel(y)) { maanden[1] = 29; }


	int offset = eersteWeekDagMaand(m, y);

	for (int i = 0; i < offset - 1; i++) {
		maand[i] = 0;
	}


	for (int i = offset; i < maanden[m - 1] + offset; i++) {
		maand[i] = i + 1 - offset;
	}

}


void main() {
	int maand[38] = {0};
	vulMaandArray(2, 2024, maand);
	printf("eerste dag week maand shit: %d \n", eersteWeekDagMaand(2, 2024));
	
	printArray(maand, 38);

	// printf("%d\n", eersteWeekDagMaand(10, 2024));


}