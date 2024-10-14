// week 5 7 t/m 16

// 
// VRAAG BIJ OPGAVE 16: moet het niet printMaand(maandArray, 42, huidigeMaand); zijn ipv printMaand(2021, 42, 1);
// (daar ben ik wel vanuit gegaan)
// 

#include <stdio.h>

void printArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void printMaand(int* maand, int length, int maandNr) {
	static char maandToStr[12][4] = { "Jan", "Feb", "Mar", "Apr", "Mei", "Jun", "Jul", "Aug", "Sep", "Okt",  "Nov", "Dec" };
	printf("        %s\n", maandToStr[maandNr - 1]);
	printf("MA DI WO DO VR ZA ZO\n");

	int n = 0;
	for (int i = 0; i < length; i++) {
		n++;
		if (maand[i] == 0) {
			printf("   ");
		}
		else {
			if (maand[i] < 10) {
				printf("%d  ", maand[i]);
			}
			else {
				printf("%d ", maand[i]);
			}
		}
		if (n > 6) {
			printf("\n");
			n = 0;
		}
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
	int dagenOffset = ((jarenOffset * 365) + schrikkelDagen(1, 1, 2000, 1, m - 1, y))+ 5 + dagenInJaar;

	if (m == 3 && isSchrikkel(y)) {
		dagenOffset++;
	}

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

void maandKalender(int m, int y) {
	int maandArray[42] = { 0 };
	vulMaandArray(m, y, maandArray);
	printMaand(maandArray, 42, m);
}


void jaarKalender(int y) {
	printf("        %d\n", y);
	for (int i = 1; i < 13; i++) {
		maandKalender(i, y);
	}
}

void main() {
	jaarKalender(2025);
}