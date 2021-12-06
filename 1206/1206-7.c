#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, temp;
    char str[1000][1000];
    while (gets(str[n]))
    {
        n++;
    }
    temp = strlen(str[0]);
    for (int i = 1; i < n; i++)
    {
        if (temp < strlen(str[i]))
        {
            temp = strlen(str[i]);
        }
    }
    for (int j = 0; j < temp; j++)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (j >= strlen(str[i]))
            {
                printf(" ");
            }
            else
            {
                printf("%c", str[i][j]);
            }
        }
        printf("\n");
    }
}