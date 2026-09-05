//Q46: Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****

/*
Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****

*/
#include <stdio.h>
void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int size=5;
    printPattern(size);
    return 0;
}
