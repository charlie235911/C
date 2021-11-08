#include <stdio.h>

int main(void){
    int n = 0; 
    char c;
    scanf("%d",&n);
    scanf(" %c",&c);
    for (int i = 0; i < n; i++){
        for (int j = n-i-1; j < n; j++){
            printf("%c",c);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++){
        for (int k = i; k < n; k++){
            printf("%c",c);
        }
        printf("\n");
    }
    printf("\n");
}