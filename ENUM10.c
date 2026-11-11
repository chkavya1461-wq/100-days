//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    enum Gender gender;
};

int main(void) {
    char input[32];
    struct Person person;

    // Read input string, supporting formats like "Gender=MALE"
    if (scanf("%31s", input) == 1) {
        char *genderStr = input;

        // If the input includes a prefix like "Gender=", advance the pointer past '='
        char *equalSign = strchr(input, '=');
        if (equalSign != NULL) {
            genderStr = equalSign + 1;
        }

        // Map input string to the enum member inside the struct
        if (strcmp(genderStr, "MALE") == 0) {
            person.gender = MALE;
        } else if (strcmp(genderStr, "FEMALE") == 0) {
            person.gender = FEMALE;
        } else if (strcmp(genderStr, "OTHER") == 0) {
            person.gender = OTHER;
        } else {
            printf("Invalid Gender\n");
            return 1;
        }

        // Display the gender based on the struct's enum value
        switch (person.gender) {
            case MALE:
                printf("Male\n");
                break;
            case FEMALE:
                printf("Female\n");
                break;
            case OTHER:
                printf("Other\n");
                break;
        }
    }

    return 0;
}