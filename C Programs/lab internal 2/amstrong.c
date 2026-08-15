#include <stdio.h>
#include <math.h>

int count_digits(int n);
int armstrong_sum(int n, int digits);

int main() {
    int n, digits, sum;

    printf("Enter a number\n");
    scanf("%d", &n);

    digits = count_digits(n);
    sum = armstrong_sum(n, digits);

    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    return 0;
}

/* Recursive function to count digits */
int count_digits(int n) {
    if (n == 0)
        return 0;
    else
        return 1 + count_digits(n / 10);
}

/* Recursive function to calculate Armstrong sum */
int armstrong_sum(int n, int digits) {
    if (n == 0)
        return 0;
    else
        return pow(n % 10, digits) + armstrong_sum(n / 10, digits);
}

