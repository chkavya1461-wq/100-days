//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
int catagorize_roots(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        printf("The roots are real and distinct.\n");
        return 1; // Real and distinct
    } else if (discriminant == 0) {
        printf("The roots are real and equal.\n");
        return 2; // Real and equal
    } else {
        printf("The roots are complex.\n");
        return 3; // Complex
    }
}
int main() {
    float a, b, c;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return 1;
    }
    catagorize_roots(a, b, c);
    return 0;
}