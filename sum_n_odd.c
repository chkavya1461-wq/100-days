//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int sum_of_odd_numbers(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1); // Calculate the ith odd number and add it to the sum
    }
    return sum;
}
int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; // Exit the program with an error code
    }
    int result = sum_of_odd_numbers(n);
    printf("The sum of the first %d odd numbers is: %d\n", n, result);
    return 0;
}