#include <stdio.h>

int pivotInteger(int n) {
    int totalSum = n * (n + 1) / 2;  // sum of 1 to n

    for(int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;          // sum of 1 to x
        int rightSum = totalSum - leftSum + x;  // sum of x to n
        if(leftSum == rightSum) {
            return x;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int result = pivotInteger(n);
    printf("%d\n", result);

    return 0;
}
