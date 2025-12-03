#include <stdio.h>

int main() {
    int nums[] = {-1,1,0,-3,3};   // Example input
    int n = sizeof(nums)/sizeof(nums[0]);
    int answer[n];

    // Step 1: Compute prefix products
    int prefix[n];
    prefix[0] = 1;
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    // Step 2: Compute suffix products
    int suffix[n];
    suffix[n-1] = 1;
    for(int i = n-2; i >= 0; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    // Step 3: Compute answer[i] = prefix[i] * suffix[i]
    for(int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    // Print result
    printf("[");
    for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i != n-1) printf(",");
    }
    printf("]\n");

    return 0;
}
