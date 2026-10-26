//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char sourcePath[260];
    char destPath[260];
    FILE *sourceFile = NULL;
    FILE *destFile = NULL;
    int ch;

    // Read filenames from user
    printf("Enter source filename: ");
    if (scanf("%259s", sourcePath) != 1) {
        fprintf(stderr, "Error reading source filename.\n");
        return 1;
    }

    printf("Enter destination filename: ");
    if (scanf("%259s", destPath) != 1) {
        fprintf(stderr, "Error reading destination filename.\n");
        return 1;
    }

    // Open source file in read mode ("r")
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Open destination file in write mode ("w")
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        perror("Error creating/opening destination file");
        fclose(sourceFile);
        return 1;
    }

    // Copy character by character until EOF is reached
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully to %s\n", destPath);

    // Clean up and close open file pointers
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}