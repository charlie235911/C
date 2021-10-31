#include <stdio.h>

int fun (int x);
int fun (int x){
    int a = 0, b = 0, c = 0;
    c = x;
    while (x >= 3){
        a = x / 3;
        b = x % 3;
        x = a + b;
        c += a;
    }
    printf("%d\n",c);
}
int main (void){
    int n = 0;
    scanf("%d",&n);
    fun(n);
}