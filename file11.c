//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main(void) {
    int n;
    const char *filename = "students.txt";

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    struct Student *students = malloc(n * sizeof(struct Student));
    if (students == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%49s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    // 1. Write records to file using fprintf()
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        free(students);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%s %d %d\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(fp);
    free(students);

    // 2. Read records from file using fscanf() and display
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("\n--- Reading Records from File ---\n");
    char name[50];
    int roll;
    int marks;

    while (fscanf(fp, "%49s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}