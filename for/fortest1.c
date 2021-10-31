#include <stdio.h>

int main(void){
    unsigned int n = 0;
    scanf("%d",&n);
    for ( int i = 2; i <= n; i+=2)
    {
        printf("%d\n",i);
    }
}