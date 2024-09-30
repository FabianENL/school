#include <stdio.h>

int kleinsteSomDeler(int n) {
	int iteration = 1;
	int finished = 0;
	while (!finished) {
		int correct = 1;
		for (int i = 1; i <= n; i++) {
			if (!(iteration % i == 0)) {
				correct = 0;
			}
			// printf("%d : %d : %d : %d\n", iteration, i, correct, (iteration % i == 0));
		}
		if (correct) {
			finished = 1;
		}
		else {
			iteration++;
			
		}
	}
	return iteration;
}

void main() {
	int n = 10;
	printf("Kleinste deler van %d = %d", n, kleinsteSomDeler(n));
}