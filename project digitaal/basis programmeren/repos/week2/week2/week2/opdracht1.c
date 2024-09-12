#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int overflow = 21478364;

    int a, b;

    printf("2 positieve waardes aub >> ");
    scanf("%d %d", &a, &b);

    if (a * b >= overflow) {
        printf("oeiii, overflow.");
    }
    else {
        printf("%d * %d = %d", a, b, a * b);
    }
}