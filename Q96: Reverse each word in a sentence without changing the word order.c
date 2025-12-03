#include <stdio.h>
#include <string.h>

void reverseWord(char *word) {
    int i, j;
    char temp;
    i = 0;
    j = strlen(word) - 1;
    while(i < j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char sentence[200], word[50];
    int i = 0, j = 0;

    fgets(sentence, sizeof(sentence), stdin);

    while(sentence[i] != '\0') {
        if(sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            reverseWord(word);
            printf("%s ", word);
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    if(strlen(word) > 0) {
        reverseWord(word);
        printf("%s", word);
    }

    return 0;
}
