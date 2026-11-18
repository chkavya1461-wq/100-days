//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    // 1. Take employee details as input
    printf("Enter Name, ID, and Salary: ");
    scanf("%s %d %f", e1.name, &e1.id, &e1.salary);

    // 2. Write struct to a binary file ("wb" = write binary)
    fp = fopen("employee.dat", "wb");
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // 3. Read struct back from the binary file ("rb" = read binary)
    fp = fopen("employee.dat", "rb");
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // 4. Display the data read from the file
    printf("\nEmployee Details from File:\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n", e2.name, e2.id, e2.salary);

    return 0;
}