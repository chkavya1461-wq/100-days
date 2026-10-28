//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char filename[260];
    FILE *file = NULL;
    int ch;

    // Prompt user for the filename
    printf("Enter filename: ");
    if (scanf("%259s", filename) != 1) {
        fprintf(stderr, "Error reading filename.\n");
        return 1;
    }

    // Attempt to open the file in read mode
    file = fopen(filename, "r");

    // Check if the file pointer is NULL
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    // Read and display the content character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    putchar('\n');

    // Close the file stream
    fclose(file);
    return 0;
}