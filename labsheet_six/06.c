#include <stdio.h>
int main()
{
    int mat1[2][2] = {
        {1, 2},
        {3, 4}};
    int mat2[2][2] = {
        {3, 6},
        {4, 2}};
    int sum[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            *(*(sum + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", *(*(sum + i) + j));
        }
        printf("\n");
    }
}