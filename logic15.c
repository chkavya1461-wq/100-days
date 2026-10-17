//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    int len_s = strlen(s);
    int len_t = strlen(t);
    
    // If lengths differ, they cannot be anagrams
    if (len_s != len_t) {
        return false;
    }
    
    int count[26] = {0};
    
    // Count frequencies of characters in both strings
    for (int i = 0; i < len_s; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    
    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Sample Test Case 1
    char s1[] = "anagram";
    char t1[] = "nagaram";
    printf("Output 1: %s\n", isAnagram(s1, t1) ? "Anagram" : "Not Anagram"); // Expected: Anagram

    // Sample Test Case 2
    char s2[] = "rat";
    char t2[] = "car";
    printf("Output 2: %s\n", isAnagram(s2, t2) ? "Anagram" : "Not Anagram"); // Expected: Not Anagram

    return 0;
}