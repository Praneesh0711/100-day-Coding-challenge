#include <stdio.h>

int main()
{
    int n, i, k, arr[100], temp[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);
    k = k % n;

    for(i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    printf("\n");
    return 0;
}
