#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++){
        if (n%2==1){
            for (int j = 0; j < n; j++){
                printf("%d\t",a[j][i]);
            }        
        }else{
            for (int j = n; j > 0; j--){
                printf("%d\t",a[j][i]);
            }        
        }
    }
}