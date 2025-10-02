#include <stdio.h>

int main()
{
    int num, digit, freq[10] = {0}, i, maxDigit = 0;

    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for(i = 1; i < 10; i++)
    {
        if(freq[i] > freq[maxDigit])
        {
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);
    return 0;
}
