//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    FILE *file = NULL;
    int number, sum = 0, count = 0;
    double average;

    // Open the file in read mode
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read integers from the file and compute sum and count
    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    // Close the file
    fclose(file);

    // Calculate average
    if (count > 0) {
        average = (double)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No integers found in the file.\n");
    }

    return 0;
}