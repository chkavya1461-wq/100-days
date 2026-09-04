//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>
//series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
void sumOfSeries(int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int numerator = 2 * i + 1; // odd numbers: 1, 3, 5, ...
        int denominator = 2 * i + 2; // even numbers: 2, 4, 6, ...
        sum += (double)numerator / denominator;
    }
    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    sumOfSeries(terms);
    return 0;
}
