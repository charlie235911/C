#include <stdio.h>

int main(void)
{
    int n = 0, a = 2, b = 2, i, j, k;
    scanf("%d", &n);
    while (a <= b)
    {
        for (i = a; i <= n/2; i++)
        {
            for (j = 2; j <= i; j++)
            {
                if (i % j == 0 && j == i)
                {
                    a = i;
                    b = n - a;
                    for (k = 2; k <= b; k++)
                    {
                        if (b % k == 0 && b == k)
                        {
                            printf("%d+%d", a, b);
                            printf("\n");
                            break;
                        }
                        else if (b % k != 0)
                        {
                            continue;
                        }
                        else
                        {
                            break;
                        }
                    }
                    break;
                }
                else if (i % j != 0)
                {
                    continue;
                }
                else
                {
                    break;
                }
            }
            break;
        }
        a++;
    }
}