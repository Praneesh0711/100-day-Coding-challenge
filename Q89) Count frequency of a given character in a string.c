#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, count = 0;

    scanf("%s", str);
    scanf(" %c", &ch);

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        }
        i++;
    }

    printf("%d\n", count);
    return 0;
}
