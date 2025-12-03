#include <stdio.h>

// Function to sort array using simple Bubble Sort
void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};  // Example input
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;

    scanf("%d", &k);

    // Sort the array
    bubbleSort(arr, n);

    // kth smallest element (0-based index is k-1)
    if(k > 0 && k <= n) {
        printf("%d\n", arr[k-1]);
    } else {
        printf("Invalid k\n");
    }

    return 0;
}
