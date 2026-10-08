//Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

//N.B:
//- Print the output for each element in a comma separated fashion.
//- Do not use Stack, use brute force approach (nested loop) to solve.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/

#include <stdio.h>

void printNextGreaterElements(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        int next_greater = -1;
        
        // Inner loop to find the nearest greater element on the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break; // Found the nearest greater element, stop searching
            }
        }
        
        // Print with comma-separated formatting
        if (i == 0) {
            printf("%d", next_greater);
        } else {
            printf(", %d", next_greater);
        }
    }
    printf("\n");
}

int main() {
    // Sample Test Case 1
    int arr1[] = {1, 3, 2, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Output 1: ");
    printNextGreaterElements(arr1, n1); // Expected: 3, 4, 4, -1

    // Sample Test Case 2
    int arr2[] = {6, 8, 0, 1, 3};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Output 2: ");
    printNextGreaterElements(arr2, n2); // Expected: 8, -1, 1, 3, -1

    // Sample Test Case 3
    int arr3[] = {1, 2, 3, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Output 3: ");
    printNextGreaterElements(arr3, n3); // Expected: 2, 3, 5, -1

    // Sample Test Case 4
    int arr4[] = {5, 4, 3, 1};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("Output 4: ");
    printNextGreaterElements(arr4, n4); // Expected: -1, -1, -1, -1

    return 0;
}