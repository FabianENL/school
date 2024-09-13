#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	int a, b, c;

	printf("Geef een a, b en c op >> ");
	scanf("%d %d %d", &a, &b, &c);

	float d = pow(b, 2) - 4 * a * c;

	if (d < 0) {
		printf("Geen oplossing");
	}
	else {
		float Xeen = -((b + sqrt(d)) / (2 * a));
		float Xtwee = -((b - sqrt(d)) / (2 * a));
		printf("x = %.2f v x = %.2f", Xeen, Xtwee);
	}
}