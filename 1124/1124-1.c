#include <stdio.h>
#include <ctype.h>
#define SIZE 50

int main(void){
    int n; 
    char string[SIZE];
    scanf("%s", string);
    while (string[n] != '\0'){
        n++;
    }
    for (int i = 0; i < n; i++){
        if (isupper(string[i])){
            printf("%c", tolower(string[i]));
        }else if (islower(string[i])){
            printf("%c", toupper(string[i]));
        }
    }
}
