#include <stdio.h>

int main()
{
    int rows, cols, i, j, mat[10][10], sum = 0;

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }

    printf("%d\n", sum);
    return 0;
}
