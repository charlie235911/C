#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100], a;
    scanf("%s %c", str, &a);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == a && i == 0)
        {
        }
        else if (str[i] == a)
        {
            printf("\n");
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}