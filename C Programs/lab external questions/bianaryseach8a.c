#include <stdio.h>

int binarySearch(int a[], int low, int high, int key) {
    int mid;

    if (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key)
            return mid;
        else if (key < a[mid])
            return binarySearch(a, low, mid - 1, key);
        else
            return binarySearch(a, mid + 1, high, key);
    }

    return -1;
}

int main() {
    int a[100], n, key, pos;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter key to search:\n");
    scanf("%d", &key);
    int low= 0,high = n - 1;


    pos = binarySearch(a, low, high, key);

    if(pos != -1)
        printf("Key found at position %d\n", pos + 1);
    else
        printf("Key not found\n");

    return 0;
}
