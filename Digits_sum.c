//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>
int digitSum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int result = digitSum(number);
    printf("Sum of digits of %d is: %d\n", number, result);
    return 0;
}