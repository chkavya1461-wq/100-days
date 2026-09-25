//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int isPalindrome(const char str[]) {
    int length = 0;

    // Find length of string
    while (str[length] != '\0') {
        length++;
    }

    // Strip trailing newline character left by fgets if present
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    int start = 0;
    int end = length - 1;

    // Two-pointer comparison
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }

    return 1; // Is a palindrome
}

int main(void) {
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    if (isPalindrome(str)) {
        printf("The string IS a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}