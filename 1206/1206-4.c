#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char str[100], a, b;
    gets(str);
    scanf("%c %c", &a, &b);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == a)
        {
            printf("%c", b);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}