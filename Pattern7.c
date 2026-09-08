//Q52: Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    // Array containing the number of stars for each of the 5 rows
    int stars_per_row[] = {1, 3, 5, 3, 1};
    int total_rows = 5;

    for (int i = 0; i < total_rows; i++) {
        // Print the stars for the current row, separated by spaces
        for (int j = 0; j < stars_per_row[i]; j++) {
            printf("* \n");
        }
        
        // Print two newlines to create the blank space between rows
        printf("\n\n");
    }

    return 0;
}
