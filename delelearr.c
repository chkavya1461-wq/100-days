//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

void deleteAt(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) return; // Invalid position safeguard

    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

int main(void) {
    int arr[10] = {10, 20, 30, 40, 50}, n = 5;
    int pos ;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    deleteAt(arr, &n, pos);

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}