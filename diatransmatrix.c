//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

void printDiagonalZigZag(int rows, int cols, const int matrix[rows][cols]) {
    int totalDiagonals = rows + cols - 1;

    for (int d = 0; d < totalDiagonals; d++) {
        if (d % 2 == 0) {
            // Even diagonals go UP-RIGHT
            int r = (d < rows) ? d : rows - 1;
            int c = d - r;

            while (r >= 0 && c < cols) {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        } else {
            // Odd diagonals go DOWN-LEFT
            int c = (d < cols) ? d : cols - 1;
            int r = d - c;

            while (c >= 0 && r < rows) {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");
}

int main(void) {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        return 1;
    }

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                return 1;
            }
        }
    }

    printDiagonalZigZag(rows, cols, matrix);

    return 0;
}