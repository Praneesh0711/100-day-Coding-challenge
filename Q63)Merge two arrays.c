#include <stdio.h>

int main()
{
    int n1, n2, i, arr1[100], arr2[100], merged[200];

    scanf("%d", &n1);
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
        merged[i] = arr1[i];
    }

    scanf("%d", &n2);
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
        merged[n1 + i] = arr2[i];
    }

    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}
