#include <stdio.h>

int main(void){
    int n = 0, i = 0, j = 1, m = 0;
    scanf("%d", &n);
    m = n;
    for ( i = 0; i < n; n--){
        for ( j = 1; j <= m; j++){
            if (j>=n){
                printf("%s","*");
            }else{
                printf("%s"," ");
            }
    }
        printf("%s","\n");
    }
}