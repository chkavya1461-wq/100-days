//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID_OP
};

enum Operation getOperation(const char *opStr) {
    if (strcmp(opStr, "ADD") == 0) return ADD;
    if (strcmp(opStr, "SUBTRACT") == 0) return SUBTRACT;
    if (strcmp(opStr, "MULTIPLY") == 0) return MULTIPLY;
    return INVALID_OP;
}

int main(void) {
    char opStr[20];
    int a, b;

    if (scanf("%19s %d %d", opStr, &a, &b) == 3) {
        enum Operation op = getOperation(opStr);

        switch (op) {
            case ADD:
                printf("%d\n", a + b);
                break;
            case SUBTRACT:
                printf("%d\n", a - b);
                break;
            case MULTIPLY:
                printf("%d\n", a * b);
                break;
            default:
                printf("Invalid Operation\n");
                break;
        }
    }

    return 0;
}