#include <stdio.h>

int main(void){
    int n = 0,i = 0, j = 0;
    scanf("%d",&n);
    while (n>i){
        j=0;
        while (n>j){
            printf("%s","#");
            j++;
        }
        i++;
        printf("%s","\n");
    }
}