#include <stdio.h>

int main(void)
{
    int n, m, flag;
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
            if (a[i][j] == b[i][j] && i == n-1 && j == m-1)
            {
                printf("Equal");
            }
            else if (a[i][j] != b[i][j])
            {
                printf("No");
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    printf("\n");
}