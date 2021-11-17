#include <stdio.h>

int main(void){
    int n, m, *nPtr, *mPtr;
    scanf("%d%d", &n, &m);
    nPtr = &n;
    mPtr = &m;
    printf("%d", *nPtr * *mPtr);
}