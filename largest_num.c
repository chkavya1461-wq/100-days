//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int num(int a, int b, int c) {
    if (a >= b && a >= c) {
        printf("%d is the largest number.\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the largest number.\n", b);
    } else {
        printf("%d is the largest number.\n", c);
    }
    return 0;
}
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    num(num1, num2, num3);
    return 0;
}