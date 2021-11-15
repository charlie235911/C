#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a = 0, b = 0, c = 0, seed;
    scanf("%d %d %d", &a, &b, &seed);
    srand(seed);
    int arr[a][b];
    for (int n = 0; n < a; n++){
        for (int m = 0; m < b; m++){
            c = rand() % 100;
            arr[n][m] = c;
        }
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    printf("----------\n");
    for (int i = 0; i < b; i++){
        for (int j = 0; j < a; j++){
            printf("%4d",arr[j][i]);
        }
        printf("\n");
    }
}