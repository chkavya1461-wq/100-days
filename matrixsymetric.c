//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main(void) {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Step 1: Matrix must be square to be symmetric
    if (rows != cols) {
        printf("The matrix is NOT symmetric (must be square).\n");
        return 0;
    }

    int n = rows;
    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 2: Check symmetry condition A[i][j] == A[j][i]
    int isSymmetric = 1; // Flag assuming matrix is symmetric initially

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Only check upper triangle against lower triangle
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    // Step 3: Print result
    if (isSymmetric) {
        printf("\nThe matrix IS symmetric.\n");
    } else {
        printf("\nThe matrix is NOT symmetric.\n");
    }

    return 0;
}