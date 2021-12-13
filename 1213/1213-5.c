#include <stdio.h>

int main(void)
{
    int n, m, k, count = 0;
    scanf("%d %d %d", &n, &m, &k);
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int *aptr = a[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (*(aptr + i * m + j) == k)
            {
                printf("%d %d\n", i, j);
                count = 1;
            }
        }
    }
    if (count == 0)
    {
        printf("-1 -1\n");
    }
}