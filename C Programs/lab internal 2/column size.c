#include <stdio.h>
#define MAX 10

void read_matrix(int a[MAX][MAX], int r, int c);
void column_sum(int a[MAX][MAX], int r, int c);

int main() {
    int a[MAX][MAX];
    int r, c;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements\n");
    read_matrix(a, r, c);

    printf("Column sums are:\n");
    column_sum(a, r, c);

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

/* Calculate column sum */
void column_sum(int a[MAX][MAX], int r, int c) {
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += a[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
    }
}

