//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

// Helper function to reverse a segment of a string in-place
void reverseRange(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWordsInPlace(char str[]) {
    int wordStart = -1;
    int i = 0;

    while (1) {
        char ch = str[i];

        // Word boundary encountered (space, tab, newline, or null terminator)
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0') {
            if (wordStart != -1) {
                reverseRange(str, wordStart, i - 1); // Reverse current word
                wordStart = -1;                      // Reset word start marker
            }

            if (ch == '\0' || ch == '\n') {
                if (ch == '\n') str[i] = '\0';       // Strip trailing newline
                break;
            }
        } else {
            if (wordStart == -1) {
                wordStart = i;                       // Mark start of a new word
            }
        }
        i++;
    }
}

int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    reverseWordsInPlace(str);

    printf("%s\n", str);

    return 0;
}