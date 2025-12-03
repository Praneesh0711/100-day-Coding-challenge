#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] >= x) {
            result = mid;       // possible ceil found
            high = mid - 1;     // search for smaller index on left
        } else {
            low = mid + 1;      // search right
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;

    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    printf("%d\n", index);

    return 0;
}
