//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int checkAnagram(const char str1[], const char str2[]) {
    int count[256] = {0};
    int len1 = 0, len2 = 0;

    // Process first string
    while (str1[len1] != '\0') {
        if (str1[len1] == '\n') break; // Handle fgets newline
        count[(unsigned char)str1[len1]]++;
        len1++;
    }

    // Process second string
    while (str2[len2] != '\0') {
        if (str2[len2] == '\n') break; // Handle fgets newline
        count[(unsigned char)str2[len2]]--;
        len2++;
    }

    // Length mismatch means not an anagram
    if (len1 != len2) {
        return 0;
    }

    // Check if all frequency counts returned to 0
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    char str1[1000], str2[1000];

    if (fgets(str1, sizeof(str1), stdin) == NULL ||
        fgets(str2, sizeof(str2), stdin) == NULL) {
        return 0;
    }

    if (checkAnagram(str1, str2)) {
        printf("The strings ARE anagrams.\n");
    } else {
        printf("The strings are NOT anagrams.\n");
    }

    return 0;
}