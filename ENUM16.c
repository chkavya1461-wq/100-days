//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[100];
    int id;
    Date joiningDate;
} Employee;

// Helper to remove trailing spaces from a string
void trimTrailingSpaces(char *str) {
    int len = (int)strlen(str);
    while (len > 0 && isspace((unsigned char)str[len - 1])) {
        str[--len] = '\0';
    }
}

// Parses the formatted input line into an Employee struct
int readEmployee(Employee *emp) {
    char line[256];
    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 0;
    }

    int matched = sscanf(line, " Employee: %99[^|] | ID: %d | Joining Date: %d %d %d",
                         emp->name,
                         &emp->id,
                         &emp->joiningDate.day,
                         &emp->joiningDate.month,
                         &emp->joiningDate.year);

    if (matched != 5) {
        return 0;
    }

    trimTrailingSpaces(emp->name);
    return 1;
}

// Prints employee details in the required format
void printEmployee(const Employee *emp) {
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp->name,
           emp->id,
           emp->joiningDate.day,
           emp->joiningDate.month,
           emp->joiningDate.year);
}

int main(void) {
    Employee emp;

    if (readEmployee(&emp)) {
        printEmployee(&emp);
    } else {
        fprintf(stderr, "Invalid input format.\n");
        return 1;
    }

    return 0;
}