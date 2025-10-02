#include <stdio.h>

int main()
{
    int rows, cols, i, j, mat[10][10], trans[10][10];

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
            trans[j][i] = mat[i][j];
        }
    }

    for(i = 0; i < cols; i++)
    {
        for(j = 0; j < rows; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
