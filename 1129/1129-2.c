#include <stdio.h>

int main(void)
{
    char c, alph[26];
    int i;
    char *ptr = alph;
    scanf("%c", &c);
    if (c == 'a')
    {
        for (i = 0; i < 26; i++)
        {
            *ptr = i + 'a';
            ptr++;
        }
    }
    else
    {
        for (i = 0; i < 26; i++)
        {
            *ptr = i + 'A';
            ptr++;
        }
    }
    ptr = alph;
    for (i = 0; i < 26; i++)
    {
        printf("%c\t", *ptr);
        ptr++;
    }
    printf("\n");
}