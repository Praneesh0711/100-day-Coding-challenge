#include <stdio.h>   // Needed for input/output functions like printf() and scanf()

int main() 
{
    // Declare variables:
    // n  → number of elements the user will enter
    // i  → loop counter
    // sum → will store the total sum of all array elements
    // arr → array to store up to 100 integers
    int n, i, sum = 0, arr[100];

    // Ask the user how many numbers they want to input
    printf("Enter number of elements: ");
    scanf("%d", &n);   // Read the value of n from the user

    // Prompt the user to enter n integers
    printf("Enter %d elements:\n", n);

    // Loop runs from i = 0 to i = n-1
    // Each iteration reads one number and adds it to the sum
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);  // Read the i-th element into the array
        sum += arr[i];         // Add the current element to the running total
    }

    // After the loop ends, sum contains the total of all entered numbers
    printf("Sum of array elements: %d\n", sum);

    return 0;   // End of program
}
