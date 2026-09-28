//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

char findFirstRepeatingChar(const char str[]) {
    // Array to keep track of seen lowercase alphabets ('a' through 'z')
    int seen[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        // Strip trailing newline character if present
        if (str[i] == '\n') break;

        // Check if character is a lowercase alphabet
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';

            // If already seen, this is the first repeating character
            if (seen[index]) {
                return str[i];
            }

            // Mark as seen
            seen[index] = 1;
        }
    }

    // Return null character if no repeating lowercase letter exists
    return '\0';
}

int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    char result = findFirstRepeatingChar(str);

    if (result != '\0') {
        printf("First repeating character: %c\n", result);
    } else {
        printf("No repeating lowercase character found.\n");
    }

    return 0;
}