#include <stdio.h>
#define SIZE 50

int main(void){
    int n = 0, temp1[SIZE], temp2 = 0, num[SIZE];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < n; j++){
        while (1 == 1){
            if (num[j] / 10 > 10){
                temp1[j] += num[j] % 10;
                printf("%d", temp1[j]);
                num[j] / 10;
                printf("%d", num[j]);
            }else{
                temp1[j] += num[j];
                printf("%d", temp1[j]);
                break;
            }
        }
    }
}