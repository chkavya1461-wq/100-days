//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int main(){
    int i,j,sum=0;
    printf("Enter the number of rows and columns: ");
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Element [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("The sum of all elements in the matrix is: %d\n", sum);
    return 0;
}