//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>

// Function to find length of a string
int strLength(const char str[]) {
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    return len;
}

// Function to check if sub is a substring of mainStr
int isSubstring(const char mainStr[], const char sub[]) {
    int mainLen = strLength(mainStr);
    int subLen = strLength(sub);

    for (int i = 0; i <= mainLen - subLen; i++) {
        int j;
        for (j = 0; j < subLen; j++) {
            if (mainStr[i + j] != sub[j]) {
                break;
            }
        }
        if (j == subLen) {
            return 1; // Substring found
        }
    }
    return 0;
}

int isRotation(const char s1[], const char s2[]) {
    int len1 = strLength(s1);
    int len2 = strLength(s2);

    // Rotations must have identical lengths
    if (len1 != len2 || len1 == 0) {
        return 0;
    }

    // Create concatenated string: s1 + s1
    char concat[2000];
    int idx = 0;

    // Append first copy of s1
    for (int i = 0; i < len1; i++) {
        concat[idx++] = s1[i];
    }
    // Append second copy of s1
    for (int i = 0; i < len1; i++) {
        concat[idx++] = s1[i];
    }
    concat[idx] = '\0';

    // Check if s2 is a substring of concat
    return isSubstring(concat, s2);
}

int main(void) {
    char s1[1000], s2[1000];

    if (fgets(s1, sizeof(s1), stdin) == NULL ||
        fgets(s2, sizeof(s2), stdin) == NULL) {
        return 0;
    }

    if (isRotation(s1, s2)) {
        printf("The strings ARE rotations of each other.\n");
    } else {
        printf("The strings are NOT rotations of each other.\n");
    }

    return 0;
}