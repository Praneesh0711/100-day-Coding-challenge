#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  // read full sentence including spaces

    while(sentence[i] != '\0') {
        if(sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];  // build current word
        } else {
            word[j] = '\0';  // end of word
            if(strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);  // store longest word
            }
            j = 0;  // reset for next word
        }
        i++;
    }

    // Handle last word (if sentence doesn't end with space)
    word[j] = '\0';
    if(strlen(word) > maxLen) {
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
