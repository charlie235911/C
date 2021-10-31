#include <stdio.h>

long long int fun (long long int x);
long long int fun1 (long long int y);
long long int fun (long long int x){
    long long int i = 1, a = 1;
    for (i = 1; i <= x; i++){
        a = a * i;
    }
    fun1(a);
}
long long int fun1 (long long int y){
    int b = 0;
    for (; y > 10;){
        if (y % 10 == 0){
            b++;
        }else{
            break;
        }
        y /= 10;
    }
    printf("%d\n",b);
}
int main (void){
    long long int n = 0;
    scanf("%lld",&n);
    fun(n);
}