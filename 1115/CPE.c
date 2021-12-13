#include <stdio.h>

int main(void){
    unsigned int a, b;
    while (scanf("%d %d",&a, &b) != EOF){
        if (a > b){
            printf("%d\n", a - b);
        }else if (b > a){
            printf("%d\n", b - a);
        }
    }
}
