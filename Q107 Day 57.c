#include <stdio.h>

int main() {
    int arr[] = {6, 8, 0, 1, 3};   // Example input
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        int prevGreater = -1;
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;  // nearest greater on the left found
            }
        }
        printf("%d", prevGreater);
        if(i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
