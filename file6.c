//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char filename[260];
    char text[1024];
    FILE *file = NULL;

    // Read the filename from the user
    printf("Enter filename: ");
    if (scanf("%259s", filename) != 1) {
        fprintf(stderr, "Error reading filename.\n");
        return 1;
    }

    // Clear input buffer newline leftover from scanf
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    // Prompt and read the line of text to append
    printf("Enter text to append: ");
    if (fgets(text, sizeof(text), stdin) == NULL) {
        fprintf(stderr, "Error reading input text.\n");
        return 1;
    }

    // Open file in append mode ("a")
    file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Append the text to the end of the file
    fputs(text, file);

    printf("File updated successfully with appended text.\n");

    // Close the file
    fclose(file);
    return 0;
}