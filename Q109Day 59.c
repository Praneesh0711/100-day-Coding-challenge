#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) {
    if(k > n) return -1;  // invalid case

    // Step 1: Compute sum of first window of size k
    int windowSum = 0;
    for(int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Step 2: Slide the window
    for(int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];  // add next element, remove first of window
        if(windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}

int main() {
    // Example input
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;

    scanf("%d", &k);

    int result = maxSumSubarray(arr, n, k);
    printf("%d\n", result);

    return 0;
}
