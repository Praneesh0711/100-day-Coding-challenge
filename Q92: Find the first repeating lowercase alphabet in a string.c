#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // frequency array for 26 lowercase letters
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';  // map 'a'->0, 'b'->1, ...
        freq[index]++;

        // Check if this character has appeared before
        if(freq[index] == 2) {
            printf("First repeating lowercase alphabet: %c\n", str[i]);
            return 0;  // exit after finding the first repeating
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
