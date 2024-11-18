#include <stdio.h>

int arrayProduct(int a[], int length) {

	int sum = 1;
	for (int i = 0; i < length; i++) {
		sum *= a[i];
		// printf("%d : %d : %d\n", i, a[0], sum);
	}
	return sum;
}

void main() {
	int a[5] = {1, 2, 3, 4, 5};
	int b[5] = {6, 7, 8, 9, 10};

	printf("De som van alle elementen in de array a = %d\n", arrayProduct(a, 5));
	printf("De som van alle elementen in de array b = %d\n", arrayProduct(b, 5));

}