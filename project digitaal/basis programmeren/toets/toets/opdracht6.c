#include <stdio.h>

vul2DArray(char *p[][8], int lengte) {
	for (int i = 0; i < lengte; i++) {
		for (int j = 0; j < lengte; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					p[i][j] = 219;
				}
				else {
					p[i][j] = 255;
				}
			}
			else {
				if (j % 2 == 0) {
					p[i][j] = 255;
				}
				else {
					p[i][j] = 219;
				}
			}
		}
	}
}

print2DArray(char* p[][8], int lengte) {
	for (int i = 0; i < lengte; i++) {
		for (int j = 0; j < lengte; j++) {
			// printf("%d : %d : %c\n", i, j, p[i][j]);
			printf("%c", p[i][j]);
		}
		printf("\n");
	}
}

void main() {
	char a[8][8];

	vul2DArray(a, 8);
	print2DArray(a, 8);
}