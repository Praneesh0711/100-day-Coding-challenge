#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, len = 0, isPalin = 1;

    scanf("%s", str);

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            isPalin = 0;
            break;
        }
    }

    if(isPalin)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    return 0;
}
