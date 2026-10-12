//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

#include <stdio.h>
#include <stdlib.h>

void printMaxOfSubarrays(int* arr, int n, int k) {
    if (n <= 0 || k <= 0 || k > n) {
        return;
    }

    // Allocate memory for deque to store indices
    int* dq = (int*)malloc(n * sizeof(int));
    int front = 0, rear = -1;

    for (int i = 0; i < n; i++) {
        // Step 1: Remove indices that are out of the current window
        if (front <= rear && dq[front] <= i - k) {
            front++;
        }

        // Step 2: Remove elements from the back that are smaller than the current element
        while (front <= rear && arr[dq[rear]] <= arr[i]) {
            rear--;
        }

        // Step 3: Insert current element index at the back
        dq[++rear] = i;

        // Step 4: The first window is complete, print the maximum (at the front)
        if (i >= k - 1) {
            printf("%d", arr[dq[front]]);
            if (i < n - 1) {
                printf(" ");
            }
        }
    }
    printf("\n");

    // Free allocated memory
    free(dq);
}

int main() {
    // Sample Test Case 1
    int arr1[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 3;
    printf("Output 1: ");
    printMaxOfSubarrays(arr1, n1, k1); // Expected: 3 3 4 5 5 5 6

    // Sample Test Case 2
    int arr2[] = {5, 1, 3, 4, 2};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 1;
    printf("Output 2: ");
    printMaxOfSubarrays(arr2, n2, k2); // Expected: 5 1 3 4 2

    return 0;
}