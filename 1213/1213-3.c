#include <stdio.h>

int main(void)
{
    int n, m, k, temp, check, flag = 0, judge = 0;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > temp)
            {
                temp = a[i][j];
                k = j;
            }
            else
            {
                flag = 0;
            }
        }
        for (int x = 1; x < n; x++)
        {
            check = a[i][k];
            if (a[x][k] > check)
            {
                m = i;
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            printf("(%d,%d) = %d\n", m, k, a[m][k]);
            judge = 1;
        }
        temp = 0;
    }
    if (judge == 0)
    {
        printf("NONE\n");
    }
}