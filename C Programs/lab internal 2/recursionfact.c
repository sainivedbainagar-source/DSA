#include <stdio.h>

int factorial(int n);

int main() {
    int n, result;

    printf("Enter a number\n");
    scanf("%d", &n);

    result = factorial(n);

    printf("Factorial of %d is %d\n", n, result);

    return 0;
}

/* Recursive function to find factorial */
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

