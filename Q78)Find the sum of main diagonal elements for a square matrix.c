#include <stdio.h>

int main()
{
    int n, i, j, mat[10][10], sum = 0;

    scanf("%d %d", &n, &n);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
            if(i == j)
            {
                sum += mat[i][j];
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}
