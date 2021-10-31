#include <stdio.h>

int main(void){
    unsigned int n, i, j;
    scanf("%d", &n);
    for ( unsigned int i = 1; i <= n; n--){
        for (unsigned int j = 1; j <= n; j++){
            printf("%s","*");
        }
        printf("\n");
    }
}