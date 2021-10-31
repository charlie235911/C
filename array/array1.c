#include <stdio.h>

int main(void){
    int  n = 0, i = 0;
    char arr[100]; 
    scanf("%[^\n]", arr);
    while (arr[n] != '\0'){
        n++;
    }
    for (i = n - 1; i >= 0; i--){
        printf("%c", arr[i]);
    }
    printf("\n");
}