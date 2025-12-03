#include <stdio.h>

int main() {
    int arr[] = {6, 8, 0, 1, 3};   // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        int nextGreater = -1;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;  // nearest greater found
            }
        }
        printf("%d", nextGreater);
        if(i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
