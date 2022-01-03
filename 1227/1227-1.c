#include <stdio.h>

int main(void)
{
    int ip1[100], ip2[100];
    char a[100];
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            scanf("%d", &ip1[i]);
        }
        else if (i % 2 == 1)
        {
            scanf("%c", &a[i]);
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            scanf("%d", &ip2[i]);
        }
        else if (i % 2 == 1)
        {
            scanf("%c", &a[i]);
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d", ip1[i] & ip2[i]);
        }
        else if (i % 2 == 1)
        {
            printf("%c", a[i]);
        }
    }
}