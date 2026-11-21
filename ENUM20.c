//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include <stdio.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

// 1. Modify struct members through a pointer using ->
void modifyStudent(Student *ptr) {
    if (!ptr) return;

    printf("Enter Name, Roll, and Marks: ");
    scanf("%49s %d %d", ptr->name, &ptr->roll, &ptr->marks);
}

// 2. Display struct members through a pointer using ->
void displayStudent(const Student *ptr) {
    if (!ptr) return;

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);
}

int main() {
    // Initial default values
    Student s = {"Default", 0, 0};

    // Pointer pointing to the address of struct 's'
    Student *ptr = &s;

    modifyStudent(ptr);
    displayStudent(ptr);

    return 0;
}