//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>
#include <string.h>

enum Color {
    RED,
    YELLOW,
    GREEN,
    COLOR_COUNT // This will help in iterating through the enum
};

int main(void) {
    for (int i = 0; i < COLOR_COUNT; i++) {
        switch (i) {
            case RED:
                printf("RED=%d\n", RED);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", YELLOW);
                break;
            case GREEN:
                printf("GREEN=%d\n", GREEN);
                break;
            default:
                break;
        }
    }
    return 0;
}