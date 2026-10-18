//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/
#include <stdio.h>

void twoSum(int* nums, int numsSize, int target) {
    int found = 0;
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                return;
            }
        }
    }
    
    if (!found) {
        printf("-1 -1\n");
    }
}

int main() {
    // Sample Test Case 1
    int nums1[] = {2, 7, 11, 15};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: ");
    twoSum(nums1, size1, 9); // Expected: 0 1

    // Sample Test Case 2
    int nums2[] = {3, 2, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: ");
    twoSum(nums2, size2, 6); // Expected: 1 2

    // Sample Test Case 3
    int nums3[] = {3, 3};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Output 3: ");
    twoSum(nums3, size3, 6); // Expected: 0 1

    return 0;
}
