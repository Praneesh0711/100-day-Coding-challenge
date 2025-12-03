#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    scanf("%s %s", s, t);

    // If lengths differ, not an anagram
    if(strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};  // frequency array for lowercase letters

    // Count frequency from s
    for(int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    // Subtract frequency using t
    for(int i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
