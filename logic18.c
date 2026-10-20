//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include <stdio.h>

int missingNumber(int* nums, int n) {
    // Expected sum of numbers from 0 to n
    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;
    
    // Calculate the sum of elements in the array
    for (int i = 0; i < n; i++) {
        actual_sum += nums[i];
    }
    
    // The difference is the missing number
    return expected_sum - actual_sum;
}

int main() {
    // Sample Test Case 1
    int nums1[] = {0, 3, 2, 4};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: %d\n", missingNumber(nums1, n1)); // Expected: 1

    // Sample Test Case 2
    int nums2[] = {1, 2, 3};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: %d\n", missingNumber(nums2, n2)); // Expected: 0

    // Sample Test Case 3
    int nums3[] = {0, 4, 3, 1, 5};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: %d\n", missingNumber(nums3, n3)); // Expected: 2

    return 0;
}