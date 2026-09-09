//Q54: Write a program to print the following pattern:

//   *
//  ***
// *****
//*******
// *****
//  ***
//   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() {
    int rows = 4, total = 2 * rows - 1;

    for (int i = 1; i <= total; i++) {
        int dist = (i <= rows) ? (rows - i) : (i - rows);
        
        printf("%*s", dist, ""); // Print leading spaces
        for (int k = 0; k < rows - dist; k++) printf("* ");
        printf("\n");
    }
    return 0;
}