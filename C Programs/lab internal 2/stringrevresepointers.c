#include <stdio.h>

int main() {
    int a[100], n, i;
    int *p;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    p = a;   // pointer points to array

    printf("Enter array elements\n");
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Array elements in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }

    return 0;
}
