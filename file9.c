// Q128: Read a text file and count how many vowels and consonants are in the
// file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/

#include <ctype.h>
#include <stdio.h>

int main(void) {
  FILE *file = fopen("text.txt", "r");
  if (file == NULL) {
    perror("Error opening text.txt");
    return 1;
  }

  int vowels = 0;
  int consonants = 0;
  int ch;

  while ((ch = fgetc(file)) != EOF) {
    // Process only alphabetic characters, ignoring numbers and special
    // characters
    if (isalpha(ch)) {
      char lower = tolower(ch);
      if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' ||
          lower == 'u') {
        vowels++;
      } else {
        consonants++;
      }
    }
  }

  fclose(file);

  printf("Vowels: %d\n", vowels);
  printf("Consonants: %d\n", consonants);

  return 0;
}