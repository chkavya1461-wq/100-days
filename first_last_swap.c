//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int swapFirstLastDigit(int num) {
    if (num < 10) {
        return num; // No swap needed for single-digit numbers
    }

    int lastDigit = num % 10;
    int firstDigit = num;
    int divisor = 1;

    // Find the first digit and the divisor to isolate it
    while (firstDigit >= 10) {
        firstDigit /= 10;
        divisor *= 10;
    }

    // Swap the first and last digits
    int swappedNum = lastDigit * divisor + (num % divisor / 10) * 10 + firstDigit;

    return swappedNum;
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int swappedNumber = swapFirstLastDigit(number);
    printf("Number after swapping first and last digit: %d\n", swappedNumber);
    return 0;
}