//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int getSecondLargest(int arr[], int n) {
    if (n < 2) return -1; // Not enough elements

    // Step 1: Find the largest element
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Step 2: Find the largest element strictly less than 'largest'
    int second = -1;
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < largest) {
            if (!found || arr[i] > second) {
                second = arr[i];
                found = 1;
            }
        }
    }

    return found ? second : -1;
}

int main(void) {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = getSecondLargest(arr, n);

    if (result != -1) {
        printf("Second largest element: %d\n", result);
    } else {
        printf("No second largest element found.\n");
    }

    return 0;
}