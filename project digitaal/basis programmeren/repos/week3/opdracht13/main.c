#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int cijfer;
	printf("Geef een afgerond cijfer op (1-10) >> ");
	scanf("%d", &cijfer);

	switch (cijfer) {
		case 1:
			printf("zwaar onvoldoende");
			break;
		case 2:
			printf("onvoldoende");
			break;
		case 3:
			printf("zeer matig");
			break;
		case 4:
			printf("matig");
			break;
		case 5:
			printf("bijna voldoende");
			break;
		case 6:
			printf("voldoende");
			break;
		case 7:
			printf("redelijk goed");
			break;
		case 8:
			printf("goed");
			break;
		case 9:
			printf("zeer goed");
			break;
		case 10:
			printf("uitmuntend");
			break;
		default:
			printf("ongeldig cijfer (1-10)");
			break;
	}
}