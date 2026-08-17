//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
int sum_n_natural(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + sum_n_natural(n - 1);
}
int main() {
    int n;
    printf("Enter a integer: ");
    scanf("%d", &n);
    int sum = sum_n_natural(n);
    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}