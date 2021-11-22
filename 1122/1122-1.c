#include <stdio.h>
#define SIZE 50

void fun(float *num, int n);
void fun(float *num, int n){
    int i = 0, j = 0;
    float temp = 0;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-1; j++){
            if (num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
}

int main(void){
    int n;
    float num[SIZE];
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%g", &num[i]);
    }
    fun(num, n);
    for (int i = 0; i < n; i++){
        printf("%g ", num[i]);
    }
    printf("\n");
}

