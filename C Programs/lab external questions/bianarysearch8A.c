#include <stdio.h>

int binarySearch(int a[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key)
            return mid;
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main() {
    int a[100], n, key, pos;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter key to search:\n");
    scanf("%d", &key);

    pos = binarySearch(a, n, key);

    if (pos != -1)
        printf("Key found at position %d\n", pos + 1);
    else
        printf("Key not found\n");

    return 0;
}

