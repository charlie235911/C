#include <stdio.h>

int main(void){
    int n = 0, i = 10, a = 0, b = 0, total = 0;
    scanf("%d", &n);
    while (n > 0){
        if (n % i == 0){
        b++;
        n = n / 10;
        }else{
        a = n % i;
        total = total + a;
        b++;
        n = n / 10;
        }
    }
    printf("%d\n",b);
    printf("%d\n",total);
}