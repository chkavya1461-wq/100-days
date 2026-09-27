//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int countCharacterFrequency(const char str[], char key) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == key) {
            count++;
        }
    }

    return count;
}

int main(void) {
    char str[1000];
    char key;

    // Read input string
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    // Read target character to find
    if (scanf(" %c", &key) != 1) {
        return 0;
    }

    int frequency = countCharacterFrequency(str, key);

    printf("Frequency of '%c': %d\n", key, frequency);

    return 0;
}