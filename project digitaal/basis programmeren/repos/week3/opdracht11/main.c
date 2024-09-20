#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct keyValue {
	char letter;
	int definitie;
};

void main() {
	int jaartal;

	printf("Geef een een jaartal (> 0, <= 2000) >> ");
	scanf("%d", &jaartal);

	int normaal[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	char* romeins[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

	if (jaartal > 0 && jaartal <= 2000) {
		printf("%d = ", jaartal);
		for (int i = 0; i < 13; i++) {
			while (jaartal >= normaal[i]) {
				printf("%s", romeins[i]);
				jaartal -= normaal[i];
			}
		}
	}
	else {
		printf("Buiten bereik. (meer dan 0 minder dan 2000)");
	}
}