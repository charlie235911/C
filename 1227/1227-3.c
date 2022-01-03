#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100], b[100];
    int c[100];
    gets(a);
    gets(b);
    int j = 0;
    for (int i = 0; i < strlen(a) - 3; i+=3, j++)
    {
        c[j] = (a[i] - '0')*100 + (a[i+1] - '0')*10 + (a[i+2] - '0');
    }
    for (int i = 0; i < j; i++)
    {
        if (i >= strlen(b))
        {
            int j = i % strlen(b);
            printf("%c", c[i] ^ b[j]);
        }
        else
        {
            printf("%c", c[i] ^ b[i]);
        }
    }
}