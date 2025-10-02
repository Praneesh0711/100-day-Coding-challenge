#include <stdio.h>

int main() {
    int num, reversed = 0, temp, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp = temp / 10;
    }

    if(num == reversed)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
