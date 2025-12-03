#include <stdio.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    enum Menu choice;
    int a, b;

    char operation[20];
    scanf("%s %d %d", operation, &a, &b);

    if(strcmp(operation, "ADD") == 0) {
        choice = ADD;
    } else if(strcmp(operation, "SUBTRACT") == 0) {
        choice = SUBTRACT;
    } else if(strcmp(operation, "MULTIPLY") == 0) {
        choice = MULTIPLY;
    } else {
        printf("Invalid operation\n");
        return 1;
    }

    switch(choice) {
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
            printf("Invalid choice\n");
    }

    return 0;
}
