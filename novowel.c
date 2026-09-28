//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

void removeVowels(char str[]) {
    int write = 0;

    for (int read = 0; str[read] != '\0'; read++) {
        // Strip trailing newline character left by fgets
        if (str[read] == '\n') {
            break;
        }

        // Copy character only if it is NOT a vowel
        if (!isVowel(str[read])) {
            str[write] = str[read];
            write++;
        }
    }

    // Terminate the modified string
    str[write] = '\0';
}

int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    removeVowels(str);

    printf("%s\n", str);

    return 0;
}