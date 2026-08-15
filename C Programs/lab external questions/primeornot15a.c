#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number:\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not a prime number\n");
        return 0;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("Not a prime number\n");
            return 0;
        }
    }

    printf("Prime number\n");
    return 0;
}

