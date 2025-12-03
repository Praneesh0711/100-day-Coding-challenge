#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    char words[20][50];
    int i = 0, j = 0, k = 0, count = 0;

    fgets(name, sizeof(name), stdin);

    // Split sentence into words
    while(name[i] != '\0') {
        if(name[i] != ' ' && name[i] != '\n') {
            words[count][j++] = name[i];
        } else {
            words[count][j] = '\0';
            count++;
            j = 0;
        }
        i++;
    }
    if(j > 0) { // last word
        words[count][j] = '\0';
        count++;
    }

    // Print initials for all words except last
    for(k = 0; k < count - 1; k++) {
        if(strlen(words[k]) > 0) {
            printf("%c.", words[k][0]);
        }
    }

    // Print last word (surname) in full
    printf("%s\n", words[count - 1]);

    return 0;
}
