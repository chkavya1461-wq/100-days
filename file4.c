//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void analyzeTextFile(const char* filename) {
    FILE *file = fopen(filename, "r");
    
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return;
    }
    
    int char_count = 0;
    int word_count = 0;
    int line_count = 0;
    
    int ch;
    int in_word = 0;
    int has_content = 0;
    
    while ((ch = fgetc(file)) != EOF) {
        char_count++;
        has_content = 1;
        
        // Count lines on encountering newlines
        if (ch == '\n') {
            line_count++;
        }
        
        // Track words using whitespace separation
        if (isspace(ch)) {
            in_word = 0;
        } else {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        }
    }
    
    // If the file contains text, account for the final line even if it lacks a trailing newline
    if (has_content) {
        line_count++;
    }
    
    fclose(file);
    
    // Print the results in the required format
    printf("Characters: %d\n", char_count);
    printf("Words: %d\n", word_count);
    printf("Lines: %d\n", line_count);
}

int main() {
    // Creating sample.txt for testing purposes matching the sample case
    FILE *file = fopen("sample.txt", "w");
    if (file != NULL) {
        fprintf(file, "Hello world\nThis is C programming");
        fclose(file);
    }
    
    // Analyze the file
    analyzeTextFile("sample.txt");

    return 0;
}