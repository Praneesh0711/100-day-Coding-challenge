#include <stdio.h>

int main()
{
    int n, i, key, arr[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    i = n - 1;
    while(i >= 0 && arr[i] > key)
    {
        arr[i + 1] = arr[i];
        i--;
    }

    arr[i + 1] = key;
    n++;

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
