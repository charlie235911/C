#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(void){
    int a = 0, temp, seed, arr[SIZE];
    scanf("%d",&seed);
    srand(seed);
    for (int n = 0; n < 6; n++){
        a = rand() % 42 + 1;
        arr[n] = a;
    }
    for (int i = 0; i < 6; i++){
        for (int j = i + 1; j < 6; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%-4d",arr[i]);
    }
}