//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int parameter(int length, int width) {
    return 2 * (length + width);
}
int area(int length, int width) {
    return length * width;
}
int main() {
    int length, width;
    printf("Enter the length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    printf("Perimeter: %d\n", parameter(length, width));
    printf("Area: %d\n", area(length, width));
    return 0;
}