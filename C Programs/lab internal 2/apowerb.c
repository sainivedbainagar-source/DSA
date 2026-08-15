#include <stdio.h>

int power(int a, int b);

int main() {
    int a, b;

    printf("Enter base (A) and exponent (B)\n");
    scanf("%d %d", &a, &b);

    printf("%d power %d = %d\n", a, b, power(a, b));

    return 0;
}

/* Recursive function to find power */
int power(int a, int b) {
    if (b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}

