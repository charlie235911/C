#include <stdio.h>

int main(void)
{
    int m, n, temp = 0, flag = 0;
    scanf("%d %d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i < m - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            temp = a[i][j];
            if (temp > a[i-1][j] && temp > a[i+1][j] && temp > a[i][j+1] && temp > a[i][j-1])
            {
                flag = 1;
                printf("%d %d %d\n", temp, i+1, j+1);
            }
        }
    }
    if (flag == 0)
    {
        printf("None %d %d\n", m, n);
    }
}