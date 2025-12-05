#include <stdio.h>      // Provides input/output functions like fgets() and printf()
#include <ctype.h>      // Provides character classification and conversion functions (isalpha, toupper)
#include <string.h>     // Provides string handling functions like strlen()

int main() {

    // Create a character array (string buffer) that can hold up to 199 characters + null terminator.
    char str[200];

    // Read one full line of input from the user, including spaces.
    // fgets() stops when:
    //   - it reads a newline
    //   - it reaches the buffer limit
    //   - or EOF occurs
    // It also automatically adds '\0' at the end.
    fgets(str, sizeof(str), stdin);

    // Compute the length of the string so we know how many characters to process.
    int len = strlen(str);

    // This flag tells us whether the next alphabetic character should be capitalized.
    // We start with 1 because the first character of the string should be checked.
    int capitalizeNext = 1;

    // Loop through each character of the string from index 0 to len-1.
    for(int i = 0; i < len; i++) {

        // CASE 1: We should capitalize the next alphabetic character.
        // Conditions:
        //   - capitalizeNext == 1 → we are at the start of a word
        //   - isalpha(str[i]) → the character is a letter (not space, digit, punctuation)
        if(capitalizeNext && isalpha(str[i])) {

            // Convert the current character to uppercase.
            // toupper() only affects alphabetic characters; others remain unchanged.
            str[i] = toupper(str[i]);

            // After capitalizing the first letter of a word,
            // we turn OFF the flag so the rest of the word stays unchanged.
            capitalizeNext = 0;
        }

        // CASE 2: We detect a space.
        // A space means the next non-space character begins a new word.
        else if(str[i] == ' ') {

            // Turn ON the flag so the next alphabetic character will be capitalized.
            capitalizeNext = 1;
        }

        // Any other character (digits, punctuation, lowercase letters inside a word)
        // simply passes through unchanged.
        // No 'else' block needed because we don't modify them.
    }

    // Print the modified string.
    // Since we edited the string in-place, str now contains the title-cased version.
    printf("%s", str);

    return 0;   // End of program
}
