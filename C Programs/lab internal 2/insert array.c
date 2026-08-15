#include <stdio.h>
#define m 100

int main() {
    int n, pos, a[m], i, x;

    printf("Enter array size:\n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nEnter position (0 to %d):\n", n);
    scanf("%d", &pos);

    printf("Enter element:\n");
    scanf("%d", &x);
pos = pos - 1;

    if (pos < 0 || pos > n || n >= m) {
        printf("Invalid operation\n");
        return 1;
    } else {

        for (i = n; i > pos; i--) {
            a[i] = a[i - 1];
        }
        a[pos] = x;
        n++;
    }

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
