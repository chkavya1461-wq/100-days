//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>

void countVowelsAndConsonants(const char str[], int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            (*vowels)++;
        } 
        // Check if character is an alphabetic consonant
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            (*consonants)++;
        }
    }
}

int main(void) {
    char str[1000];

    // Read an entire line including spaces
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int vowels, consonants;
    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}