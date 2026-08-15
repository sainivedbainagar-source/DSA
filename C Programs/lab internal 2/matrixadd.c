#include <stdio.h>
#define MAX 10

void read_matrix(int a[MAX][MAX], int , int );
void print_matrix(int a[MAX][MAX], int , int );
void add_matrix(int a[MAX][MAX], int b[MAX][MAX],
                int sum[MAX][MAX], int , int );

int main() {
    int a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX];
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix\n");
    scanf("%d %d", &r2, &c2);

    if (r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible\n");
        return 0;
    }

    printf("Enter elements of first matrix\n");
    read_matrix(a, r1, c1);

    printf("Enter elements of second matrix\n");
    read_matrix(b, r2, c2);

    add_matrix(a, b, sum, r1, c1);

    printf("Sum of matrices is:\n");
    print_matrix(sum, r1, c1);

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

/* Add matrices */
void add_matrix(int a[MAX][MAX], int b[MAX][MAX],
                int sum[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
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
