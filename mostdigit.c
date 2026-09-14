//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    char str[100];
    int count[10] = {0};

    printf("Enter the number: ");
    scanf("%s", str);

    printf("The digits of the number are: ");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            int digit = str[i] - '0';
            printf("%d ", digit);
            count[digit]++;
        }
    }
    printf("\n");

    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > count[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Most frequent digit: %d\n", maxDigit);

    return 0;
}