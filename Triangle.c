//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
void classify_triangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid triangle sides. All sides must be positive.\n");
        return;
    }
    if (a == b && b == c) {
        printf("The triangle is Equilateral.\n");
    } else if (a == b || b == c || a == c) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }
}
int main() {
    float side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    classify_triangle(side1, side2, side3);
    return 0;
}