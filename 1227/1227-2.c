#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100], b[100];
    gets(a);
    gets(b);
    for (int i = 0; i < strlen(a); i++)
    {
        if (i >= strlen(b))
        {
            int j = i % strlen(b);
            printf("%03d", a[i] ^ b[j]);
        }
        else
        {
            printf("%03d", a[i] ^ b[i]);
        }
    }
    printf("-01");
}