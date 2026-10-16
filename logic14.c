//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int max_len = 0;
    int start = 0;
    
    // Array to store the last seen index of each ASCII character (initialized to -1)
    int last_seen[256];
    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }
    
    for (int i = 0; i < n; i++) {
        unsigned char ch = s[i];
        
        // If character has been seen and is within the current window
        if (last_seen[ch] >= start) {
            start = last_seen[ch] + 1;
        }
        
        // Update the last seen index of the character
        last_seen[ch] = i;
        
        // Update max length
        int current_len = i - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }
    
    return max_len;
}

int main() {
    // Sample Test Case 1
    char s1[] = "abcabcbb";
    printf("Output 1: %d\n", lengthOfLongestSubstring(s1)); // Expected: 3

    // Sample Test Case 2
    char s2[] = "bbbbb";
    printf("Output 2: %d\n", lengthOfLongestSubstring(s2)); // Expected: 1

    // Sample Test Case 3
    char s3[] = "pwwkew";
    printf("Output 3: %d\n", lengthOfLongestSubstring(s3)); // Expected: 3

    return 0;
}