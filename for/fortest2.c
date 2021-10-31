#include <stdio.h>

int main(void){
    unsigned int n = 0;
    int i = 0,m = 0;
    scanf("%d",&n);
    if(n%2==0){
    for ( i=n+1; i <= m; i+=2)
    {
        printf("%d\n",i);
    }
    }else{
        for ( i = n; i <= m; i+=2)
        {
            printf("%d",i);
        }
        
    }
}