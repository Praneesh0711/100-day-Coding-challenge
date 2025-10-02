#include <stdio.h>

int main()
{
    int n, i, arr[100], max, second;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(arr[0] > arr[1])
    {
        max = arr[0];
        second = arr[1];
    }
    else
    {
        max = arr[1];
        second = arr[0];
    }

    for(i = 2; i < n; i++)
    {
        if(arr[i] > max)
        {
            second = max;
            max = arr[i];
        }
        else if(arr[i] > second && arr[i] != max)
        {
            second = arr[i];
        }
    }

    printf("%d\n", second);
    return 0;
}
