//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/

#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
    int candidate = -1;
    int count = 0;
    
    // Phase 1: Find a candidate using Boyer-Moore Voting Algorithm
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    // Phase 2: Verify if the candidate appears more than n / 2 times
    count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }
    
    if (count > numsSize / 2) {
        return candidate;
    }
    
    return -1; // No majority element exists
}

int main() {
    // Sample Test Case 1
    int nums1[] = {3, 2, 3};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", majorityElement(nums1, size1)); // Expected: 3

    // Sample Test Case 2
    int nums2[] = {2, 2, 1, 1, 1, 2, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", majorityElement(nums2, size2)); // Expected: 2

    // Sample Test Case 3
    int nums3[] = {2, 2, 1, 1, 1, 2, 2, 3};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", majorityElement(nums3, size3)); // Expected: -1

    return 0;
}