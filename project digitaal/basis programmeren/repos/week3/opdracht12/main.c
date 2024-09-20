#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


// faculteit
int faculteit(int num) {
	int result = 1;
	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	return result;
}


// euler
float calcEuler(int lim) {
	float euler = 1;
	for (int i = 1; i <= lim + 3; i++) {
		euler += (1 / (float)(faculteit(i)));
	}

	return euler;
}


// e^x
float calcEpowX(float x, int lim) {
	float sum = 1;

	for (int i = 1; i <= lim; i++) {
		sum += (pow(x, i) / faculteit(i));
	}
}

void main() {

	// faculteit
	int num;

	printf("Geef een n >> ");
	scanf("%d", &num);

	printf("%d faculteit = %d \n", num, faculteit(num));

	// getal van euler
	int lim1;

	printf("Geef een limiet >> ");
	scanf("%d", &lim1);

	printf("euler: %.*f \n", lim1, calcEuler(lim1));


	// e^x
	float x;
	int lim2;

	printf("Geef de waarde van x: ");
	scanf("%f", &x);
	
	printf("Geef het aantal termen (n): ");
	scanf("%d", &lim2);

	printf("e^x: %.10f", calcEpowX(x, lim2));
}