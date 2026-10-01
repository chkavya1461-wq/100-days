//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

char toUpperChar(char ch) {
    if (ch >= 'a' && ch <= 'z') return ch - ('a' - 'A');
    return ch;
}

char toLowerChar(char ch) {
    if (ch >= 'A' && ch <= 'Z') return ch + ('a' - 'A');
    return ch;
}

void printInitialsWithSurname(const char str[]) {
    int totalWords = 0;
    int inWord = 0;

    // Pass 1: Count total words in the string
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            if (!inWord) {
                totalWords++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    if (totalWords == 0) return;

    // Pass 2: Process words and print initials + full surname
    int currentWord = 0;
    inWord = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            if (!inWord) {
                currentWord++;
                inWord = 1;

                if (currentWord < totalWords) {
                    // Print initial for first/middle names
                    printf("%c. ", toUpperChar(str[i]));
                } else {
                    // Print surname: First letter uppercase
                    printf("%c", toUpperChar(str[i]));
                }
            } else if (currentWord == totalWords) {
                // Print remaining characters of surname in lowercase
                printf("%c", toLowerChar(str[i]));
            }
        } else {
            inWord = 0;
        }
    }
    printf("\n");
}

int main(void) {
    char name[1000];

    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 0;
    }

    printInitialsWithSurname(name);

    return 0;
}