//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

char toUpperChar(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');
    }
    return ch;
}

void printInitials(const char str[]) {
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Stop at newline
        if (ch == '\n') break;

        // Check if current character is not a delimiter (space or tab)
        if (ch != ' ' && ch != '\t') {
            if (!inWord) {
                // First character of a word
                printf("%c.", toUpperChar(ch));
                inWord = 1;
            }
        } else {
            inWord = 0; // Space reached, ready for next word
        }
    }
    printf("\n");
}

int main(void) {
    char name[1000];

    if (fgets(name, sizeof(name), stdin) == NULL) {
        return 0;
    }

    printInitials(name);

    return 0;
}