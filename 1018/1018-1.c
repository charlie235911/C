#include <stdio.h>

int main(void){
    int n = 0, total = 0;
    scanf("%d",&n);
    while (n > 0){
        if (n % 3 == 0){
            total = n + total;
            n = n - 3;
        }else if (n % 3 == 1){
            n = n - 1;
        }else if (n % 3 == 2){
            n = n - 2;
        }
    }
    printf("%d\n",total);
}