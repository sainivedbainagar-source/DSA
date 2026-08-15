#include <stdio.h>

int lcm(int a, int b, int max);

int main() {
    int a, b, max;

    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    printf("LCM is %d\n", lcm(a, b, max));

    return 0;
}

int lcm(int a, int b, int max) {
    if (max % a == 0 && max % b == 0)
        return max;
    else
        return lcm(a, b, max + 1);
}

