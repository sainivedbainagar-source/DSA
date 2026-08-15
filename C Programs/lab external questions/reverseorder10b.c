
#include <stdio.h>

int main() {
    int a[100], n;
    int *p;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    p = a;

    printf("Elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }

    return 0;
}
