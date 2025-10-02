#include <stdio.h>

int main()
{
    int rows, cols, i, j, mat[10][10], diag[10], count = 0;

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < rows && i < cols; i++)
    {
        diag[count++] = mat[i][i];
    }

    for(i = 0; i < count; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(diag[i] == diag[j])
            {
                printf("False\n");
                return 0;
            }
        }
    }

    printf("True\n");
    return 0;
}
