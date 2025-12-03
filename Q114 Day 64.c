#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLen = 0;
    int start = 0;  // sliding window start
    int lastIndex[256];  // store last index of each character

    // Initialize lastIndex with -1
    for(int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    for(int end = 0; end < n; end++) {
        // If character already seen, move start
        if(lastIndex[(unsigned char)s[end]] >= start) {
            start = lastIndex[(unsigned char)s[end]] + 1;
        }

        // Update last seen index of current character
        lastIndex[(unsigned char)s[end]] = end;

        // Update max length
        int currentLen = end - start + 1;
        if(currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    return maxLen;
}

int main() {
    char s[100];
    scanf("%s", s);

    int result = lengthOfLongestSubstring(s);
    printf("%d\n", result);

    return 0;
}
