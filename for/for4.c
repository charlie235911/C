#include <stdio.h>

int main(void){
    int n = 0, i = 0, j = 1, m = 0, a = 0, b = 0;
    scanf("%d", &n);
    b = n - 1;
    m = n;
    for ( i = 0; i < n; n--, b++){
        for ( j = 1; j <= m; j++){
            if (j >= n){
                printf("%s","*");
            }else{
                printf("%s"," ");
            }
        }
            for ( a = 2 * m ; a >= m; a--){
                if (a <= b ){
                     printf("%s","*");
                }
            }
        printf("%s","\n");
    }
}