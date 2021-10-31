#include <stdio.h>

void fun(int x);
void fun(int x){
    for (int i = 1; i <= x ; i++){
        if (x % i == 0){
            printf("%d ",i);
        }
    }
}
int main(void){
    int n = 0;
    scanf("%d",&n);
    fun(n);
}