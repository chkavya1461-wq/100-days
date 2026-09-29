//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

void findLongestWord(const char str[]) {
    int maxLen = 0;
    int maxStart = 0;

    int currentLen = 0;
    int currentStart = 0;

    int i = 0;
    while (1) {
        char ch = str[i];

        // Check for word boundary (space, tab, newline, or null terminator)
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = currentStart;
            }
            currentLen = 0;

            if (ch == '\0' || ch == '\n') {
                break;
            }
        } else {
            if (currentLen == 0) {
                currentStart = i; // Mark beginning of new word
            }
            currentLen++;
        }
        i++;
    }

    // Print the longest word
    printf("Longest word: ");
    for (int k = maxStart; k < maxStart + maxLen; k++) {
        printf("%c", str[k]);
    }
    printf("\nLength: %d\n", maxLen);
}

int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    findLongestWord(str);

    return 0;
}