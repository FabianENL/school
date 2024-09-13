#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	char input[65];
	int result = 0;

	printf("Geef een binair getal >> ");
	scanf("%64s", &input);

	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == '1') {
			result += pow(2, strlen(input) - i - 1);
		}
	}
	printf("%d", result);
}

