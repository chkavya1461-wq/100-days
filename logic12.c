//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/

#include <stdio.h>

int maxSubArraySum(int* arr, int n) {
    if (n <= 0) {
        return 0;
    }
    
    int current_max = arr[0];
    int global_max = arr[0];
    
    for (int i = 1; i < n; i++) {
        // Decide whether to add to the existing subarray or start fresh from arr[i]
        current_max = (arr[i] > current_max + arr[i]) ? arr[i] : current_max + arr[i];
        
        // Update the overall maximum sum found so far
        if (current_max > global_max) {
            global_max = current_max;
        }
    }
    
    return global_max;
}

int main() {
    // Sample Test Case 1
    int arr1[] = {2, 3, -8, 7, -1, 2, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Output 1: %d\n", maxSubArraySum(arr1, n1)); // Expected: 11

    // Sample Test Case 2
    int arr2[] = {-2, -4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Output 2: %d\n", maxSubArraySum(arr2, n2)); // Expected: -2

    // Sample Test Case 3
    int arr3[] = {5, 4, 1, 7, 8};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Output 3: %d\n", maxSubArraySum(arr3, n3)); // Expected: 25

    return 0;
}