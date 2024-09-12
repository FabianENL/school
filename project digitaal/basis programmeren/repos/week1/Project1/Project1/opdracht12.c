#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int seconden;
	printf("vul een aantal seconden in >> ");
	scanf("%d", &seconden);

	int uren = seconden / (60 * 60);
	int minuten = (seconden / 60) - (uren * 60);
	int overigeSeconden = seconden % 60;

	printf("%d seconden is %d uur, %d minuten en %d seconde(n)", seconden, uren, minuten, overigeSeconden);
}