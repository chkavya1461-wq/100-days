//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

void replaceSpacesWithHyphens(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Strip trailing newline character left by fgets
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }

        // Replace space with hyphen
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}

int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    replaceSpacesWithHyphens(str);

    printf("%s\n", str);

    return 0;
}