#include <stdio.h>

int main(void){
    int a[5][7]={{},{}};
    scanf("%d",&a[5][7]);
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 7; j++){
            printf("%d\t",a[j][i]);        
        }
    }
}