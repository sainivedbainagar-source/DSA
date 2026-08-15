#include<stdio.h>
#define m 100

void read_array(int [], int);
void print_array(int [], int);
void insertion_sort(int [], int);

int main() {
    int a[m], n;

    printf("enter array size\n");
    scanf("%d", &n);

    printf("enter array elements\n");
    read_array(a, n);

    printf("array elements before sorting\n");
    print_array(a, n);

    insertion_sort(a, n);

    printf("\narray elements after sorting\n");
    print_array(a, n);

    return 0;
}

void read_array(int a[], int n) {
    int i;
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void print_array(int a[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d\t", a[i]);
}

void insertion_sort(int a[], int n) {
    int i, j, key;

    for(i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;


        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}
