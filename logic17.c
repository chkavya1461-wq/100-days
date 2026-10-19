//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>
#include <stdlib.h>

void mergeSortedArrays(int* nums1, int m, int* nums2, int n) {
    int* merged = (int*)malloc((m + n) * sizeof(int));
    int i = 0, j = 0, k = 0;
    
    // Compare and merge elements from both arrays
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    
    // Copy remaining elements of nums1, if any
    while (i < m) {
        merged[k++] = nums1[i++];
    }
    
    // Copy remaining elements of nums2, if any
    while (j < n) {
        merged[k++] = nums2[j++];
    }
    
    // Print the merged array space-separated
    for (int idx = 0; idx < m + n; idx++) {
        printf("%d", merged[idx]);
        if (idx < m + n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    free(merged);
}

int main() {
    // Sample Test Case 1
    int nums1_1[] = {2, 7, 11, 15};
    int nums2_1[] = {4, 8, 10};
    int m1 = 4, n1 = 3;
    printf("Output 1: ");
    mergeSortedArrays(nums1_1, m1, nums2_1, n1); // Expected: 2 4 7 8 10 11 15

    // Sample Test Case 2
    int nums1_2[] = {1, 2, 7};
    int nums2_2[] = {9, 10, 17};
    int m2 = 3, n2 = 3;
    printf("Output 2: ");
    mergeSortedArrays(nums1_2, m2, nums2_2, n2); // Expected: 1 2 7 9 10 17

    // Sample Test Case 3
    int nums1_3[] = {-10, -2, 7};
    int nums2_3[] = {-3, -1, 7};
    int m3 = 3, n3 = 3;
    printf("Output 3: ");
    mergeSortedArrays(nums1_3, m3, nums2_3, n3); // Expected: -10 -3 -2 -1 7 7

    return 0;
}