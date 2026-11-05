//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT,
    UNKNOWN
};

void printStatusMessage(enum Status status) {
    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
            break;
    }
}

int main(void) {
    char input[20];

    if (scanf("%19s", input) == 1) {
        enum Status currentStatus;

        if (strcmp(input, "SUCCESS") == 0) {
            currentStatus = SUCCESS;
        } else if (strcmp(input, "FAILURE") == 0) {
            currentStatus = FAILURE;
        } else if (strcmp(input, "TIMEOUT") == 0) {
            currentStatus = TIMEOUT;
        } else {
            currentStatus = UNKNOWN;
        }

        printStatusMessage(currentStatus);
    }

    return 0;
}