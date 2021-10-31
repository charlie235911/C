#include <stdio.h>

int fun (int x, int y);
int fun (int x, int y){
    for (; x < y; x++){
        for (int i = 1; i < x; i++){
            if (i == x){
                printf("%d-----",x);
                printf("%d-----",x);
            }
            
        }
        
    }
    
}
int main (void){
    int n = 0, m = 0;
    scanf("%d",&n,&m);
    fun(n,m);
}