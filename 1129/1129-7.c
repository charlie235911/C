#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[50], b[50];
    char *aptr, *bptr;
    gets(a);
    gets(b);
    for (int i = 0; i < strlen(a); i++)
    {
        aptr++;
        aptr = &a[i];
        printf("%c", *aptr);
    }
    printf(" ");
    for (int i = 0; i < strlen(b); i++)
    {
        bptr++;
        bptr = &b[i];
        printf("%c", *bptr);
    }
    printf("\n");
}