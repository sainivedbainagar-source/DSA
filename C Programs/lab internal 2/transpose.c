#include <stdio.h>
#define MAX 10

void read_matrix(int a[MAX][MAX], int r, int c);
void print_matrix(int a[MAX][MAX], int r, int c);
void transpose_matrix(int a[MAX][MAX], int t[MAX][MAX], int r, int c);

int main() {
    int a[MAX][MAX], t[MAX][MAX];
    int r, c;

    printf("Enter rows and columns of matrix\n");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix\n");
    read_matrix(a, r, c);

    transpose_matrix(a, t, r, c);

    printf("Original matrix:\n");
    print_matrix(a, r, c);

    printf("Transpose matrix:\n");
    print_matrix(t, c, r);   // note: rows & columns swapped

    return 0;
}

/* Read matrix */
void read_matrix(int a[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

/* Transpose logic */
void transpose_matrix(int a[MAX][MAX], int t[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }
}

/* Print matrix */
void print_matrix(int a[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");

