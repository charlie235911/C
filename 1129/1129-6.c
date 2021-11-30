#include <stdio.h>

int main(void)
{
    int a[3][3], b[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int *aptr = a[0], *bptr = b[0];
    int temp;

    for (int i = 0; i < 3; i++)
    {
        for (int m = 0; m < 3; m++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp += *(aptr + i * 3 + j) * *(bptr + j * 3 + m);
            }
            printf("%4d\t", temp);
            temp = 0;
        }
        printf("\n");
    }
}