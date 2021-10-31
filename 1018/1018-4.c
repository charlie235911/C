#include <stdio.h>

int main(void){
    unsigned long long int n = 0, total = 1;
    scanf("%lld",&n);
    while (n > 0){
        total = total * n;
        n--;
    }
    printf("%lld\n",total);
}