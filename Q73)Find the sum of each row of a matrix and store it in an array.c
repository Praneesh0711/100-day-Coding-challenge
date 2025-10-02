#include <stdio.h>

int main()
{
    int rows, cols, i, j, mat[10][10], rowSum[10];

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++)
    {
        rowSum[i] = 0;
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
            rowSum[i] += mat[i][j];
        }
    }

    for(i = 0; i < rows; i++)
    {
        printf("%d ", rowSum[i]);
    }

    printf("\n");
    return 0;
}
