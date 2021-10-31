#include <stdio.h>

int main(void){
    int n = 0, m = 0, total = 0;
    scanf("%d",&n);
    while (n > 0){
        m = n * (n+1);
        total = m + total;
        n--;
    }
    printf("%d\n",total);
}