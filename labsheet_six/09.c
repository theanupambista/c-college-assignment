#include <stdio.h>
int main()
{
    int row, col;
    printf("Entet the no of row and column(square matrix): ");
    scanf("%d%d", &row, &col);
    int mat[row][col];
    int tras[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the element mat[%d][%d]", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tras[i][j] = mat[j][i];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", tras[i][j]);
        }
        printf("\n");
    }
}