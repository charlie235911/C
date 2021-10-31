#include <stdio.h>

int main(void){
    int n = 0;
    double b = 0, c = 0, total = 0;
    scanf("%d",&n);
    for (int m = 1, a = 2; m <= 2*n-1, a <= 2*n; m += 2, a += 2){
        c = m * a;
        b = 1 / c;
        total = total + b;
    }
    printf("%.16f\n",(double)total);
}