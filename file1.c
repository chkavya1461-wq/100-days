//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertToSentenceCase(char* str) {
    int in_word = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            in_word = 0; // We are outside a word
        } else {
            if (!in_word) {
                // First letter of a word -> Uppercase
                str[i] = toupper(str[i]);
                in_word = 1;
            } else {
                // Remaining letters of a word -> Lowercase
                str[i] = tolower(str[i]);
            }
        }
    }
}

int main() {
    // Sample Test Case 1
    char str1[] = "I am trying to build logic.";
    convertToSentenceCase(str1);
    printf("Output 1: %s\n", str1); // Expected: I Am Trying To Build Logic.

    // Sample Test Case 2
    char str2[] = "The classes are supposed to start early.";
    convertToSentenceCase(str2);
    printf("Output 2: %s\n", str2); // Expected: The Classes Are Supposed To Start Early.

    // Sample Test Case 3
    char str3[] = "We are going to look at 26 different test cases.";
    convertToSentenceCase(str3);
    printf("Output 3: %s\n", str3); // Expected: We Are Going To Look At 26 Different Test Cases.

    return 0;
}