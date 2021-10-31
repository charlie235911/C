#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (j < n-i+1){
                printf(" ");
            }else{
                printf("%s","*");
            }
        }
        for (int k = 2 * n; k > n; k--){
            if (k > 2*n-i+1){
                printf("%s","*");
            }
        }
        printf("%s","\n");     
    }
}