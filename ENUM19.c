//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

// 1. Dynamically allocate and populate a Student struct
Student* createStudent() {
    Student *s = malloc(sizeof(Student));
    if (s == NULL) {
        return NULL;
    }

    printf("Enter Name, Roll, and Marks: ");
    // %49s prevents buffer overflow if someone types a name longer than 49 chars
    if (scanf("%49s %d %d", s->name, &s->roll, &s->marks) != 3) {
        free(s); // Clean up if input is invalid
        return NULL;
    }

    return s;
}

// 2. Display the student details
void printStudent(const Student *s) {
    if (s == NULL) return;
    printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll, s->marks);
}

int main() {
    Student *s = createStudent();
    if (s == NULL) {
        printf("Failed to create student record.\n");
        return 1;
    }

    printStudent(s);

    // Free memory and nullify pointer to prevent dangling pointer bugs
    free(s);
    s = NULL;

    return 0;
}