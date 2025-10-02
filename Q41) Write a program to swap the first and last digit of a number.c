#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = (int)log10(num);
    first = num / pow(10, digits);
    last = num % 10;
    middle = (num % (int)pow(10, digits)) / 10;
    result = last * pow(10, digits) + middle * 10 + first;

    printf("Swapped number: %d\n", result);
    return 0;
}
