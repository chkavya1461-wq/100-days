//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include <stdio.h>

enum student {
    NAME_LENGTH = 50
};

struct Student {
    char name[NAME_LENGTH];
    int roll;
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

void readStudent(struct Student *s) {
    printf("Student: ");
    scanf("%49s %d %d", s->name, &s->roll, &s->marks);
}

int main(void) {
    struct Student s;
    readStudent(&s);
    printStudent(s);
    return 0;
}