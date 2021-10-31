#include <stdio.h>

int fun(int x);
int fun(int x){
    int m = 2, a = 0;
    while ((x+1)/2>m){
        m++;
        if (x%m == 0){
            a = x/m;
            if (x%a == 0){
                printf("%d %d\n", m, a);
                break;
            }
        }else if(x%m != 0 && x/2 <= m){
            printf("%s\n","No");
            break;
        }
    }
}
int main(void){
    int n = 0;
    scanf("%d",&n);
    fun(n);
}