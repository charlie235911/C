#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char a;
    scanf("%c", &a);
    if (isupper(a))
    {
        printf("uppercase");
    }
    else if (islower(a))
    {
        printf("lowercase");
    }
    else
    {
        printf("special character");
    }
    printf("\n");
}