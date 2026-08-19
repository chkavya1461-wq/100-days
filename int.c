//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>
int check(int number) {
    if (number < 0) {
        printf("Negative number\n");
        return -1;
    } else if (number == 0) {
        printf("Zero\n");
        return 0;
    } else {
        printf("Positive number\n");
        return 1;
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check(num);
    return 0;
}