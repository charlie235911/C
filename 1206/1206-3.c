#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char str[100];
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
        {
            printf("%c", tolower(str[i]));
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}