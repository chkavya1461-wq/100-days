//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
void prime(int num) {
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return;
        }
    }
    printf("%d is a prime number.\n", num);
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    prime(number);
    return 0;
}