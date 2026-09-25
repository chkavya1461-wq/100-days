//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

void reverseString(char str[]) {
    int length = 0;

    // Step 1: Find string length
    while (str[length] != '\0') {
        length++;
    }

    // Handle trailing newline if read by fgets
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Step 2 & 3: Two-pointer in-place swap
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    reverseString(str);

    printf("%s\n", str);

    return 0;
}