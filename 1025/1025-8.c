#include <stdio.h>

int fun(int x);
int fun(int x){
    int f[x], a = 2;
    f[1] = 2;
    while (x >= a){
        f[a] = f[a-1] + f[a/2];
        a++;
    }
    printf("%d\n",f[x]);
}
int main(void){
    int n = 0;
    scanf("%d",&n);
    fun(n);
}