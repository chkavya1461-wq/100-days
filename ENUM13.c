//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main(void) {
    int n;
    scanf("%d students:", &n);

    struct Student s[n];
    for (int i = 0; i < n; i++) {
        scanf(" %49s %d %d,", s[i].name, &s[i].roll, &s[i].marks);
    }

    int maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIdx].marks) {
            maxIdx = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[maxIdx].name, s[maxIdx].marks);
    return 0;
}