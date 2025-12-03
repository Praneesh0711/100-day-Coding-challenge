#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role role;
    char input[20];

    printf("Enter role (ADMIN/USER/GUEST): ");
    scanf("%s", input);

    if(strcmp(input, "ADMIN") == 0) {
        role = ADMIN;
    } else if(strcmp(input, "USER") == 0) {
        role = USER;
    } else if(strcmp(input, "GUEST") == 0) {
        role = GUEST;
    } else {
        printf("Invalid role!\n");
        return 1;
    }

    switch(role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Unknown role!\n");
    }

    return 0;
}
