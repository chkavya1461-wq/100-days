//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int binarySearch(const int arr[], size_t low, size_t high, int target) {
    if (low > high) return -1;
    
    size_t mid = low + (high - low) / 2;

    if (arr[mid] == target) return (int)mid;
    if (arr[mid] < target)  return binarySearch(arr, mid + 1, high, target);
    if (mid == 0)           return -1; // Prevents unsigned underflow
    
    return binarySearch(arr, low, mid - 1, target);
}

int main(void) {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the target: ");
    scanf("%d", &target);

    int idx = binarySearch(arr, 0, size - 1, target);
    
    if (idx != -1) printf("Found %d at index %d\n", target, idx);
    else           printf("%d not found\n", target);

    return 0;
}