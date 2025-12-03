#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status result;

    // Example: set result to FAILURE
    result = FAILURE;

    switch(result) {
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
    }

    return 0;
}
