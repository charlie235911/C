#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1001];
    int count[128];
    while (gets(str))
    {
        for (int i = 0; i < 128; i++)
        {
            count[i] = 0;
        }
        for (int i = 0; i < strlen(str); i++)
        {
            count[str[i]]++;
        }
        for (int i = 1; i <= strlen(str); i++)
        {
            for (int j = 127; j >= 32; j--)
            {
                if (count[j] == i)
                {
                    printf("%d %d\n", j, i);
                }
            }
        }
        printf("\n");
    }
}