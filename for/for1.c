#include <stdio.h>

int main(void){
    int n = 0;
    float i = 0, max = 0, min =0;
    i = max = min;
    for ( ; n < 10; n++){
        scanf("%f", &i);
        if (n == 0){
            max = i;
            min = i;
        }else if (i > max){
            max = i;
        }else if (i < min){
            min = i;   
        }
    }
    printf("max: %.2f\n", max);
    printf("min: %.2f\n", min);
}