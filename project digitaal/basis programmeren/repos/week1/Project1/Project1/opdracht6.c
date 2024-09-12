#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	float num;
	printf("vul een float in (gebruik een . als decimaal) >> ");
	scanf("%f", &num);

	printf("de float afgerond op 4 decimalen: %.4f", num);
}