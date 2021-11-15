#include <stdio.h>

int main(void){
    int a = 0, b = 0, c = 0, d = 0, num = 0, total = 0;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int arr1[a][b], arr2[c][d];
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            scanf("%d", &arr1[i][j]);        
        }
    }
    for (int i = 0; i < c; i++){
        for (int j = 0; j < d; j++){
            scanf("%d", &arr2[i][j]);        
        }
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < d; j++){
            for (int k = 0; k < b; k++){
                num = arr1[i][k] * arr2[k][j];
                total += num;
            }
            printf("%4d\t", total);
            num = 0;
            total = 0;
        }
        printf("\n");
    }
}