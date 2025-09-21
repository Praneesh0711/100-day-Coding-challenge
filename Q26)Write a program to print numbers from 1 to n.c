#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number till which the result should be printed: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        printf("%d", i);
        if (i < n) 
        {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
