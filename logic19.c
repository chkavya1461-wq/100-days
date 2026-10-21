//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>
#include <stdlib.h>

int findRepeatedElement(int* nums, int numsSize) {
    // Assuming values fit within a reasonable range, we can use a frequency array.
    // For arbitrary or large values, a hash map would be used.
    // Let's find the max element first to size our frequency array, 
    // or use a fixed-size frequency table if elements are bounded.
    
    int max_val = nums[0];
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max_val) {
            max_val = nums[i];
        }
    }
    
    // Allocate frequency array initialized to 0
    int* freq = (int*)calloc(max_val + 1, sizeof(int));
    
    int repeated = -1;
    
    // Single iteration to find the repeated element
    for (int i = 0; i < numsSize; i++) {
        freq[nums[i]]++;
        if (freq[nums[i]] > 1) {
            repeated = nums[i];
            break;
        }
    }
    
    free(freq);
    return repeated;
}

int main() {
    // Sample Test Case 1
    int nums1[] = {1, 3, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", findRepeatedElement(nums1, size1)); // Expected: 3

    // Sample Test Case 2
    int nums2[] = {1, 2, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", findRepeatedElement(nums2, size2)); // Expected: 2

    // Sample Test Case 3
    int nums3[] = {0, 4, 1, 1, 5};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", findRepeatedElement(nums3, size3)); // Expected: 1

    return 0;
}