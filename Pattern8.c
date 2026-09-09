//Q53: Write a program to print the following pattern:
//*
//**
//*****
//*******
//*********
//*******
//*****
//***
//*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the upper half

    // 1. Upper half of the pattern (1 to 9 stars)
    for (int i = 1; i <= rows; i++) {
        // Print odd number of asterisks starting from 1
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Lower half of the pattern (7 down to 1 stars)
    for (int i = rows - 1; i >= 1; i--) {
        // Print odd number of asterisks
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
