//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int main() {
    int arr[5]; // Declare an array of size 5
    int i, search, found = 0;

    // Read elements into the array
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to search for
    printf("Enter the element to search for: ");
    scanf("%d", &search);

    // Perform linear search
    for (i = 0; i < 5; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    // Print the result of the search
    if (found) {
        printf("Element %d found at index %d.\n", search, i);
    } else {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}