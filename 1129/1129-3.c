#include <stdio.h>
#include <string.h>
#define SIZE 50
int main(void)
{
    int i;
    char str[SIZE];
    char *ptr;
    scanf("%[^\n]", str);
    for (i = 0; i < strlen(str); i++)
    {
        ptr = &str[i];
        ptr++;
    }
    for (i = 0; i < strlen(str); i++)
    {
        ptr--;
        printf("%c", *ptr);
    }
    printf("\n");
}