#include <stdio.h>
#define MAX 10

void read_matrix(int a[MAX][MAX], int r, int c);
void print_matrix(int a[MAX][MAX], int r, int c);
void multiply_matrix(int a[MAX][MAX], int b[MAX][MAX],
                     int result[MAX][MAX],
                     int r1, int c1, int r2, int c2);

int main() {
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix\n");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    printf("Enter elements of first matrix\n");
    read_matrix(a, r1, c1);

    printf("Enter elements of second matrix\n");
    read_matrix(b, r2, c2);

    multiply_matrix(a, b, result, r1, c1, r2, c2);

    printf("Resultant matrix is:\n");
    print_matrix(result, r1, c2);

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

/* Multiply matrices */
void multiply_matrix(int a[MAX][MAX], int b[MAX][MAX],
                     int result[MAX][MAX],
                     int r1, int c1, int r2, int c2) {
    int i, j, k;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
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
    }
}

