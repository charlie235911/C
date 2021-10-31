#include <stdio.h>

int main(void){
    int n = 0, i = 0, j = 0;
    scanf("%d", &n);
    for ( i = 0; i < n; n--){
        for ( j = 0; j < n; j++){
            printf("%s","*");
    }
        printf("%s","\n");
    }
}