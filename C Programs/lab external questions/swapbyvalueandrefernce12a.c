#include <stdio.h>


void byvalue(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}


void byreference(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a ,b;
    printf("enetr a and b values\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    byvalue(a, b);
    printf("After byValue:\n");
    printf("a = %d, b = %d\n", a, b);

    byreference(&a, &b);
    printf("After byreference:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
