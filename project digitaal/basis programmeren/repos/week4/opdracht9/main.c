#include <stdio.h>


int fibboNogwat(int n) {
    if (n <= 1) {
        return n;  
    }

    int a = 0, b = 1, c;

    for (int i = 2; i <= n; i++) {
        c = a + b;  
        a = b;
        b = c;
    }

    return c;
}

int main() {
    int result = fibboNogwat(10);
    printf("Het 5-de Fibonacci-getal is: %d\n", result);

    return 0;
}
