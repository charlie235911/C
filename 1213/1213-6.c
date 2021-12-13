#include <stdio.h>
#include <string.h>

int main(void)
{   
    int i = 0, k = 0;
    char str[1000];
    gets(str);
    char *ptr = str;
    while (k < strlen(str))
    {
        for (i = strlen(str) - k; i <= strlen(str); i++)
        {
            printf("%c", *(ptr + i - 1));
        }
        printf("\n");
        k++;
    }
}