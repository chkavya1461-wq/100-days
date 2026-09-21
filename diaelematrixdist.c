//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main(void) {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Diagonal elements only exist cleanly for square matrices
    if (rows != cols) {
        printf("The matrix must be square to check the main diagonal.\n");
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

    // Check if main diagonal elements (matrix[i][i]) are distinct
    int distinct = 1; // Flag assuming distinct initially

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0; // Found duplicate on diagonal
                break;
            }
        }
        if (!distinct) break;
    }

    // Output result
    if (distinct) {
        printf("\nAll elements on the main diagonal ARE distinct.\n");
    } else {
        printf("\nElements on the main diagonal are NOT distinct.\n");
    }

    return 0;
}