//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main(void) {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSums[rows]; // Array to store the sum of each row

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0; // Reset sum for current row
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    // Output results
    printf("\nRow Sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of Row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}