#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Using a simple frequency array to detect repetition in one pass
    int freq[n+1]; 
    for(int i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            printf("%d\n", arr[i]);
            return 0;
        }
        freq[arr[i]] = 1;
    }

    return 0;
}
