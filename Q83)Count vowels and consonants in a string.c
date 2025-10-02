#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, v = 0, c = 0;

    scanf("%[^\n]", str);

    while(str[i] != '\0')
    {
        char ch = str[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", v, c);
    return 0;
}
