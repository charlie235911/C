#include <stdio.h>

long long int fun(int x);
long long int fun(int x){
    int i = 1;
    while (x > 0){
        i *= x;
        x--;
    }
    return i;
}
int main(void){
    long long int n = 0;
    scanf("%u",&n);
    printf("%u\n",fun(n));
}