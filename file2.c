//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Step 1: Open file in write mode
    FILE *file = fopen("info.txt", "w");
    
    if (file == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }
    
    char name[100];
    int age;
    
    // Step 2: Take user input for Name and Age
    printf("Enter Name: ");
    scanf("%99s", name);
    
    printf("Enter Age: ");
    scanf("%d", &age);
    
    // Step 3: Write data to the file using fprintf()
    fprintf(file, "Name: %s, Age: %d\n", name, age);
    
    // Step 4: Close the file
    fclose(file);
    
    // Step 5: Display confirmation message
    printf("File created successfully! Data written to info.txt\n");
    
    return 0;
}