#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(void)
{
    int i;
    char str[100000];
    while(gets(str))
    {
        for (i = 0; i < strlen(str); i++)
        {
            if (isupper(str[i]))
            {
                str[i] = tolower(str[i]);
            }
        }
        
        for (i = 0; i < strlen(str); i++)
        {
            switch (str[i])
            {
            case 'b':
                printf("c");
                break;
            case 'c':
                printf("z");
                break;
            case 'd':
                printf("a");
                break;
            case 'e':
                printf("q");
                break;
            case 'f':
                printf("s");
                break;
            case 'g':
                printf("d");
                break;
            case 'h':
                printf("f");
                break;
            case 'i':
                printf("y");
                break;
            case 'j':
                printf("g");
                break;
            case 'k':
                printf("h");
                break;
            case 'l':
                printf("j");
                break;
            case 'm':
                printf("b");
                break;
            case 'n':
                printf("v");
                break;
            case 'o':
                printf("u");
                break;
            case 'p':
                printf("i");
                break;
            case 'r':
                printf("w");
                break;
            case 't':
                printf("e");
                break;
            case 'u':
                printf("t");
                break;
            case 'v':
                printf("x");
                break;
            case 'y':
                printf("r");
                break;

            case '\\':
                printf("[");
                break;
            case '=':
                printf("0");
                break;
            case '-':
                printf("9");
                break;
            case '0':
                printf("8");
                break;
            case '9':
                printf("7");
                break;
            case '8':
                printf("6");
                break;
            case '7':
                printf("5");
                break;
            case '6':
                printf("4");
                break;
            case '5':
                printf("3");
                break;
            case '4':
                printf("2");
                break;
            case '3':
                printf("1");
                break;
            case '2':
                printf("`");
                break;
            case '/':
                printf(",");
                break;
            case ',':
                printf("n");
                break;
            case 39:
                printf("l");
                break;
            case ';':
                printf("k");
                break;
            case ']':
                printf("p");
                break;
            case '[':
                printf("o");
                break;
            case ' ':
                printf(" ");
                break;
            case '.':
                printf("m");
                break;
            }
        }
        printf("\n");
    }
}