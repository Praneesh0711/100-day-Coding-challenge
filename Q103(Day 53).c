#include <stdio.h>

int pivotIndex(int nums[], int n) {
    int totalSum = 0, leftSum = 0;

    // Calculate total sum of array
    for(int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    // Traverse array to find pivot index
    for(int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if(leftSum == rightSum) {
            return i;  // leftmost pivot index
        }
        leftSum += nums[i];
    }

    return -1; // no pivot index found
}

int main() {
    int nums[] = {1,7,3,6,5,6};
    int n = sizeof(nums)/sizeof(nums[0]);

    int result = pivotIndex(nums, n);
    printf("%d\n", result);

    return 0;
}
