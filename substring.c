//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>

void printAllSubstrings(const char str[]) {
    int length = 0;

    // Calculate string length manually
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    int count = 0;

    // Generate substrings
    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            // Print characters from index i to j
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
            count++;
        }
    }

    printf("\nTotal Substrings: %d\n", count);
}

int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    printAllSubstrings(str);

    return 0;
}