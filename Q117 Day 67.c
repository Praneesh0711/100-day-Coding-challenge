#include <stdio.h>

void mergeArrays(int nums1[], int m, int nums2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Merge both arrays
    while(i < m && j < n) {
        if(nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // Copy remaining elements of nums1
    while(i < m) {
        merged[k++] = nums1[i++];
    }

    // Copy remaining elements of nums2
    while(j < n) {
        merged[k++] = nums2[j++];
    }
}

int main() {
    // Example input
    int nums1[] = {-10, -2, 7};
    int nums2[] = {-3, -1, 7};
    int m = sizeof(nums1)/sizeof(nums1[0]);
    int n = sizeof(nums2)/sizeof(nums2[0]);
    int merged[m+n];

    mergeArrays(nums1, m, nums2, n, merged);

    // Print merged array
    for(int i = 0; i < m+n; i++) {
        printf("%d", merged[i]);
        if(i != m+n-1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
