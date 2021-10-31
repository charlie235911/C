#include <stdio.h>

int fun (int n);
int main (void){
    int n;
    scanf("%d",&n);
    printf("%d\n",fun(n));
}
int fun (int n){
    int i = 1, a;
    while (i < n){
        if (n % i == 0){
            printf("%d ",i);
            i++;
        }else{
            i++;
        }
    }
    a = i;
    return a;
}