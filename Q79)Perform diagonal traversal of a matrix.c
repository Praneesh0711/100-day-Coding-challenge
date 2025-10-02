#include <stdio.h>

int main()
{
    int rows, cols, i, j, mat[10][10];

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(int d = 0; d < rows + cols - 1; d++)
    {
        for(i = 0; i <= d; i++)
        {
            j = d - i;
            if(i < rows && j < cols)
            {
                printf("%d ", mat[i][j]);
            }
        }
    }

    printf("\n");
    return 0;
}
