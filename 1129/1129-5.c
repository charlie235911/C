#include <stdio.h>

int main(void)
{
    int row, col;
    scanf("%d%d", &row, &col);
    int a[row][col], b[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int *aptr = a[0], *bptr = b[0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d\t", *(aptr + i*row + j) + *(bptr + i*row + j));
        }
        printf("\n");
    }
}