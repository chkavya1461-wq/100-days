//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

void insertSorted(int arr[], int *n, int capacity, int key) {
    // Check if array has enough space
    if (*n >= capacity) {
        printf("Error: Array is full!\n");
        return;
    }

    int i = *n - 1;

    // Shift elements greater than key one position to the right
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert key at its correct position
    arr[i + 1] = key;

    // Increment current size of array
    (*n)++;
}

int main(void) {
    int arr[10] = {2, 5, 8, 12, 16, 23}; // Array capacity is 10
    int n = 6;                          // Current number of elements
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int key ;
    printf("Enter the key to insert: ");
    scanf("%d", &key);

    printf("Original array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    insertSorted(arr, &n, capacity, key);

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}