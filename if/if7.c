#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a<=b&&b<=c&&a+b>c){
        printf("True");}
        else{
            printf("False");}
}