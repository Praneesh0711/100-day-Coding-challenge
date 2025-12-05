#include <stdio.h>      // For input/output functions (fgets, printf)
#include <ctype.h>      // For character handling functions (isalpha, toupper)
#include <string.h>     // For strlen()

int main() {
    char str[200];      // Buffer to store the input string

    // Read a full line of text from the user, including spaces
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);   // Get the length of the string
    int capitalizeNext = 1;  // Flag: 1 = next letter should be capitalized

    // Loop through each character in the string
    for(int i = 0; i < len; i++) {

        // If the flag is ON and the current character is alphabetic
        if(capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);  // Convert to uppercase
            capitalizeNext = 0;        // Turn OFF flag until next word
        }

        // If we encounter a space, the next character starts a new word
        else if(str[i] == ' ') {
            capitalizeNext = 1;        // Turn ON flag
        }
    }

    // Print the modified string
    printf("%s", str);

    return 0;
}
