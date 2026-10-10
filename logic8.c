//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int* nums, int numsSize) {
    int* answer = (int*)malloc(numsSize * sizeof(int));
    
    // Step 1: Calculate left (prefix) products
    answer[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }
    
    // Step 2: Multiply with right (suffix) products on the fly
    int right_product = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] = answer[i] * right_product;
        right_product *= nums[i];
    }
    
    // Step 3: Print the result in the specified format [val1, val2, ...]
    printf("[");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", answer[i]);
        if (i < numsSize - 1) {
            printf(",");
        }
    }
    printf("]\n");
    
    // Free dynamically allocated memory
    free(answer);
}

int main() {
    // Sample Test Case 1
    int nums1[] = {1, 2, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1: ");
    productExceptSelf(nums1, size1); // Expected: [24,12,8,6]

    // Sample Test Case 2
    int nums2[] = {-1, 1, 0, -3, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2: ");
    productExceptSelf(nums2, size2); // Expected: [0,0,9,0,0]

    return 0;
}