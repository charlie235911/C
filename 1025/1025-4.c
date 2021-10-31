#include <stdio.h>

void fun1 (int a);
void fun (int x, int y);
void fun (int x, int y){
    while (x <= y){
        if (x == 1){
        }else if (x == 2){
            printf("%d ",x);
        }else{
            fun1(x);
        }
    x++;
    }    
}
void fun1 (int a){
    int i = 2;
    while (a >= i){
        if (a % i == 0 && a == i){
            printf("%d ",a);
            break;
        }else if (a % i == 0 && a != i){
            break;
        }else{
            i++;
        }
    }
}
int main (void){
    int n, m;
    scanf("%d%d", &n, &m);
    fun(n,m);
}