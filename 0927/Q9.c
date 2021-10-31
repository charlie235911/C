#include <stdio.h>

int main(void){
    int val;
    scanf("%d",&val);
    int v1 = ((val/1000)+7) % 10;
    int v2 = ((val % 1000 /100)+7) %10;
    int v3 = ((val %100 /10)+7) %10;
    int v4 = ((val %10)+7) %10;
    printf("%d%d%d%d\n", v3,v4,v1,v2);
}