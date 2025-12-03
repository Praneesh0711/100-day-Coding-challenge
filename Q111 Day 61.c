#include <stdio.h>

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};   // Example input
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    scanf("%d", &k);

    // Traverse all windows of size k
    for(int i = 0; i <= n - k; i++) {
        int firstNegative = 0;  // default if no negative found
        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                firstNegative = arr[j];
                break;  // nearest negative found
            }
        }
        printf("%d", firstNegative);
        if(i != n - k) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
