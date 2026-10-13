//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/

#include <stdio.h>
#include <stdlib.h>

void printFirstNegativeInWindows(int* arr, int n, int k) {
    if (n <= 0 || k <= 0 || k > n) {
        return;
    }

    // Allocate memory for queue to store indices of negative numbers
    int* queue = (int*)malloc(n * sizeof(int));
    int front = 0, rear = -1;
    int first_element = 1; // Flag to handle space separation properly

    for (int i = 0; i < n; i++) {
        // Step 1: Remove indices that are out of the current window
        if (front <= rear && queue[front] <= i - k) {
            front++;
        }

        // Step 2: If the current element is negative, store its index
        if (arr[i] < 0) {
            queue[++rear] = i;
        }

        // Step 3: Once the first window of size k is reached, print the result
        if (i >= k - 1) {
            if (!first_element) {
                printf(" ");
            }
            first_element = 0;

            // If queue has elements, the front index points to the first negative
            if (front <= rear) {
                printf("%d", arr[queue[front]]);
            } else {
                printf("0");
            }
        }
    }
    printf("\n");

    // Free allocated memory
    free(queue);
}

int main() {
    // Sample Test Case 1
    int arr1[] = {-8, 2, 3, -6, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    printf("Output 1: ");
    printFirstNegativeInWindows(arr1, n1, k1); // Expected: -8 0 -6 -6

    // Sample Test Case 2
    int arr2[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    printf("Output 2: ");
    printFirstNegativeInWindows(arr2, n2, k2); // Expected: -1 -1 -7 -15 -15 0

    // Sample Test Case 3
    int arr3[] = {12, 1, 3, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 3;
    printf("Output 3: ");
    printFirstNegativeInWindows(arr3, n3, k3); // Expected: 0 0

    return 0;
}