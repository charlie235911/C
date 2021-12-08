#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%2d%2d", &n, &m);
    int a[n][m], b[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%3d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%3d", &b[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%03d\t", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}