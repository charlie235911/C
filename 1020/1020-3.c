#include <stdio.h>

int fun(int x);
int main(void){
    int n, k;
    scanf("%d%d", &n, &k);
    printf("%d\n",fun(n) / (fun(k) * fun(n - k)));
}

int fun(int x){
    long int r = 1;
    for (int i = 1; i <= x; i++){
        r *= i;
    }
    return r;
}