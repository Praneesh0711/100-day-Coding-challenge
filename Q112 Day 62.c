#include <stdio.h>

int kadane(int arr[], int n) {
    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for(int i = 1; i < n; i++) {
        // Either extend the previous subarray or start new from current element
        if(maxEndingHere + arr[i] > arr[i]) {
            maxEndingHere = maxEndingHere + arr[i];
        } else {
            maxEndingHere = arr[i];
        }

        // Update maxSoFar if needed
        if(maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
        }
    }

    return maxSoFar;
}

int main() {
    // Example input
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = kadane(arr, n);
    printf("%d\n", result);

    return 0;
}
