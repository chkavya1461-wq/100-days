//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

enum User_roles {
    ADMIN,
    USER,
    GUEST
};
void displayMessage(enum User_roles role) {
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid Role\n");
            break;
    }
}
int main(void) {
    char roleStr[20];
    if (scanf("%19s", roleStr) == 1) {
        enum User_roles role;
        if (strcmp(roleStr, "ADMIN") == 0) {
            role = ADMIN;
        } else if (strcmp(roleStr, "USER") == 0) {
            role = USER;
        } else if (strcmp(roleStr, "GUEST") == 0) {
            role = GUEST;
        } else {
            printf("Invalid Role\n");
            return 1;
        }
        displayMessage(role);
    }
    return 0;
}