//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/

#include <stdio.h>

int pivotIndex(int* nums, int numsSize) {
    int total_sum = 0;
    
    // Step 1: Calculate the total sum of the array
    for (int i = 0; i < numsSize; i++) {
        total_sum += nums[i];
    }
    
    int left_sum = 0;
    
    // Step 2: Iterate through the array and check left_sum vs right_sum
    for (int i = 0; i < numsSize; i++) {
        // right_sum is total sum minus left sum and the current element
        int right_sum = total_sum - left_sum - nums[i];
        
        if (left_sum == right_sum) {
            return i; // Found the leftmost pivot index
        }
        
        left_sum += nums[i];
    }
    
    return -1; // No pivot index found
}

int main() {
    // Sample Test Case 1
    int nums1[] = {1, 7, 3, 6, 5, 6};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", pivotIndex(nums1, size1)); // Expected: 3

    // Sample Test Case 2
    int nums2[] = {1, 2, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", pivotIndex(nums2, size2)); // Expected: -1

    // Sample Test Case 3
    int nums3[] = {2, 1, -1};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", pivotIndex(nums3, size3)); // Expected: 0

    return 0;
}