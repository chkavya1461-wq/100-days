// Q127: Write a program that reads text from input.txt, converts all lowercase
// letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
  FILE *inputFile = fopen("input.txt", "r");
  if (inputFile == NULL) {
    perror("Error opening input.txt");
    return 1;
  }

  FILE *outputFile = fopen("output.txt", "w");
  if (outputFile == NULL) {
    perror("Error opening output.txt");
    fclose(inputFile);
    return 1;
  }

  int ch;
  // Read character by character until End-Of-File (EOF)
  while ((ch = fgetc(inputFile)) != EOF) {
    // toupper() converts lowercase to uppercase and leaves other characters
    // unchanged
    fputc(toupper(ch), outputFile);
  }

  // Close open file streams
  fclose(inputFile);
  fclose(outputFile);

  return 0;
}