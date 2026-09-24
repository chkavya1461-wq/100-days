//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

void toUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Equivalent to str[i] - 32
        }
    }
}

int main(void) {
    char str[1000];

    // Read full line including spaces
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    toUppercase(str);

    printf("%s", str);

    return 0;
}