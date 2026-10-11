//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int maxSumSubarray(int* arr, int n, int k) {
    if (n < k || k <= 0) {
        return -1; // Invalid case
    }
    
    int current_sum = 0;
    
    // Step 1: Compute sum of the first window of size k
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    
    int max_sum = current_sum;
    
    // Step 2: Slide the window across the rest of the array
    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k]; // Add new element, remove old element
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    return max_sum;
}

int main() {
    // Sample Test Case 1
    int arr1[] = {100, 200, 300, 400};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    printf("Output 1: %d\n", maxSumSubarray(arr1, n1, k1)); // Expected: 700

    // Sample Test Case 2
    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 4;
    printf("Output 2: %d\n", maxSumSubarray(arr2, n2, k2)); // Expected: 39

    // Sample Test Case 3
    int arr3[] = {100, 200, 300, 400};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 1;
    printf("Output 3: %d\n", maxSumSubarray(arr3, n3, k3)); // Expected: 400

    return 0;
}