#include <stdio.h>

int main()
{
    char str[100];
    int count = 0, i = 0;

    scanf("%[^\n]", str);

    while(str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("%d\n", count);
    return 0;
}
