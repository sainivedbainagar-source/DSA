#include<stdio.h>
#define m 100

void read_array(int [], int);
void print_array(int [], int);
void selection_sort(int [], int);

int main() {
    int a[m], n;

    printf("enter array size\n");
    scanf("%d", &n);

    printf("enter array elements\n");
    read_array(a, n);

    printf("array elements before sorting\n");
    print_array(a, n);

    selection_sort(a, n);

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

void selection_sort(int a[], int n) {
    int i, j, min, temp;

    for(i = 0; i < n-1; i++) {
        min = i;


        for(j = i+1; j < n; j++) {
            if(a[j] < a[min])
                min = j;
        }


        if(min != i) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}
