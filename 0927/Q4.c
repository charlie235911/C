#include <stdio.h>

int main(void){
    int v1,v2;
    scanf("%d%d",&v1,&v2);
    printf("%d\n",v1+v2);
    printf("%d\n",v1-v2);
    printf("%d\n",v1*v2);
    printf("%.2f\n",(float)v1/v2);
    printf("%d\n",v1%v2);
}