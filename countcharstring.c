//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
#include <stdio.h>

int countLength(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main(void) {
    char str[1000];

    // Read an entire line including whitespace
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    // Strip trailing newline character ('\n') left by fgets if present
    int len = countLength(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("%d\n", len);

    return 0;
}