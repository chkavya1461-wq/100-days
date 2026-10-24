//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Step 1: Open the existing file in read mode
    FILE *file = fopen("info.txt", "r");
    
    // Check if the file successfully opened
    if (file == NULL) {
        printf("Error: Could not open file info.txt. Ensure the file exists.\n");
        return 1;
    }
    
    char buffer[256];
    
    // Step 2: Read contents line by line until EOF using fgets()
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    // Step 3: Close the file stream
    fclose(file);
    
    return 0;
}