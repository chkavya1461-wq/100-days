//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

// Helper function to reverse a section of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    if (n <= 1) return;

    k = k % n; // Handle k larger than array size
    if (k == 0) return;

    // Step 1: Reverse entire array
    reverse(arr, 0, n - 1);
    
    // Step 2: Reverse first k elements
    reverse(arr, 0, k - 1);
    
    // Step 3: Reverse remaining n - k elements
    reverse(arr, k, n - 1);
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    rotateRight(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}