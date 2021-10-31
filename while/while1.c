#include <stdio.h>

int main(void){
    int n=0,m=1;
    scanf("%d",&n);
    while (n>0){
        m *=  n;
        n--;}
        printf("%d",m);
}