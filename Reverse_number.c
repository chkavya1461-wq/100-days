//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int reverse_number(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        num /= 10; // Remove the last digit from the original number
    }
    return reversed;
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int reversed_number = reverse_number(number);
    printf("The reversed number is: %d\n", reversed_number);
    return 0;
}