#include <stdio.h>

int main(void)
{
    int n, temp;
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
            temp += a[i][i];
    }
    printf("%d\n", temp);
}