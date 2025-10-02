#include <stdio.h>

int main()
{
    int n, i, j, mat[10][10], isSymmetric = 1;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(mat[i][j] != mat[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if(isSymmetric == 0)
        {
            break;
        }
    }

    if(isSymmetric)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
