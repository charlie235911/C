#include <stdio.h>
#define SIZE 50

int main(void){
    int n = 0, temp1[SIZE], temp2 = 0, num[SIZE];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    for (int j = 0; j < n; j++){
        while (num[j] / 10 != 0){
            temp1[j] += num[j] % 10;
            num[j] / 10;
        }
        if (temp1[j] > temp1[j+1]){
            temp2 = num[j];
            num[j] = num[j+1];
            num[j+1] = temp2;
        }
        printf("%d", num[j]);
    }
}