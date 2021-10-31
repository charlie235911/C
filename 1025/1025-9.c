#include <stdio.h>

int fun(int x);
int fun(int x){
    int i = 0, a = 1;
    i = x;
    while (x <= 100000){
        x *= i;
        a++;
    }
    return a;
}
int main(void){
    int n = 0;
    scanf("%d",&n);
    printf("%d\n",fun(n));
}