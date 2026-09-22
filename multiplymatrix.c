//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

void readMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int r1, int c1, const int a[r1][c1], 
                      int r2, int c2, const int b[r2][c2], 
                      int res[r1][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, const int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int r1, c1, r2, c2;

    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0) return 1;
    int a[r1][c1];
    readMatrix(r1, c1, a);

    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0) return 1;
    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 1;
    }

    int b[r2][c2];
    readMatrix(r2, c2, b);

    int result[r1][c2];
    multiplyMatrices(r1, c1, a, r2, c2, b, result);

    printMatrix(r1, c2, result);

    return 0;
}