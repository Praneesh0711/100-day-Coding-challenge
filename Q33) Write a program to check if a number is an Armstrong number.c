#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;

    while(temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    if(sum == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
