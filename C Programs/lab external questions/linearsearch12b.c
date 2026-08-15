#include <stdio.h>

int linearSearch(int a[], int n, int key) {


    for( int i = 0;i<n;i++){
        if(a[i] == key){
           return i;
        }
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

    pos = linearSearch(a, n, key);

    if (pos != -1)
        printf("Key found at position %d\n", pos +1);
    else
        printf("Key not found\n");

    return 0;
}


