#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter number of terms:\n");
    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }

    printf("Fibonacci sequence:\n");

    if (n >= 1)
        printf("%d ", a);

    if (n >= 2)
        printf("%d ", b);

    for (i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}

