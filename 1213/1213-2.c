#include <stdio.h>

int main(void)
{
    int n, m, k, a = 0, check = 0;
    scanf("%d", &n);
    int c[n][n];
    while (m < 2 * n - 2)
    {
        if (check == 0)
        {
            for (int i = k; i < n - k; i++)
            {
                a++;
                c[k][i] = a;
            }
            check++;
        }
        else if (check == 1)
        {
            for (int i = 1 + k; i < n - k; i++)
            {
                a++;
                c[i][n - k - 1] = a;
            }
            check++;
        }
        else if (check == 2)
        {
            for (int i = n - k - 2; i >= k; i--)
            {
                a++;
                c[n - k - 1][i] = a;
            }
            check++;
        }
        else if (check == 3)
        {
            for (int i = n - k - 2; i > k; i--)
            {
                a++;
                c[i][k] = a;
            }
            check = 0;
            k++;
        }
        m++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", c[i][j]);
        }
        printf("\n");
    }
}