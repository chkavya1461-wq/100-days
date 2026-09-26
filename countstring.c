//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

void analyzeString(const char str[], int *spaces, int *digits, int *specials) {
    *spaces = 0;
    *digits = 0;
    *specials = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Ignore trailing newline from fgets
        if (ch == '\n') continue;

        if (ch == ' ') {
            (*spaces)++;
        } else if (ch >= '0' && ch <= '9') {
            (*digits)++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Letter — ignore in count
            continue;
        } else {
            (*specials)++;
        }
    }
}

int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int spaces, digits, specials;
    analyzeString(str, &spaces, &digits, &specials);

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specials);

    return 0;
}