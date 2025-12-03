#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    int capitalizeNext = 1;

    for(int i = 0; i < len; i++) {
        if(capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        } else if(str[i] == ' ') {
            capitalizeNext = 1;
        }
    }

    printf("%s", str);
    return 0;
}
