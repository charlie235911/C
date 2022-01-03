#include <stdio.h>
#include <string.h>

int main(void){
    char str[100000], c, k;
    gets(str);
    scanf("%c %c", &c, &k);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            printf("%c", k);
        }
        else
        {
            printf("%c", str[i]);
        }
    }
}