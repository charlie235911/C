#include <stdio.h>

int main(void)
{
    int n, m, i;
    scanf("%d", &n);
    int num[n];
    int *ptr;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        ptr++;
        ptr = &num[i];
    }
    for (i = n; i > 0; i--, ptr--)
    {
        if (*ptr == m)
        {
            printf("%d position.", i);
            break;
        }
        else if (i == 1 && *ptr != m)
        {
            printf("none");
            break;
        }
    }
    printf("\n");
}