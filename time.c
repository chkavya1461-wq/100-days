//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int seconds_to_format(int seconds) {
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remaining_seconds = seconds % 60;
    printf("%02d:%02d:%02d\n", hours, minutes, remaining_seconds);
    return 0;
}
int main() {
    int total_seconds;
    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);
    seconds_to_format(total_seconds);
    return 0;
}