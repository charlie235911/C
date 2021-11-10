#include <stdio.h>

int main(void){
    int n , b = 1;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++){
        if (i%2==0){
            for (int j = 0; j < n; j++){
                a[i][j] = b;
                b++;
                printf("%d\t",a[i][j]);
            }        
        }else{
            for (int j = n-1; j >= 0; j--){
                a[i][j] = b;
                b++;
                printf("%d\t",a[i][j]);
            }        
        }
        puts("");
    }
}