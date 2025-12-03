#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    // Print first character as initial
    if(name[0] != ' ' && name[0] != '\n') {
        printf("%c.", name[0]);
    }

    // Traverse the string
    for(i = 1; name[i] != '\0'; i++) {
        if(name[i-1] == ' ' && name[i] != ' ' && name[i] != '\n') {
            printf("%c.", name[i]);
        }
    }

    printf("\n");
    return 0;
}
