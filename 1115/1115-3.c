#include <stdio.h>
#define SIZE 50

int main(void){
    int a = 0, b = 0, c = 0, num = 0, arr1[SIZE], arr2[SIZE], arr3[SIZE];
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++){
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < b; i++){
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            if (arr1[i] == arr2[j]){
                arr3[c] = arr2[j] - '0';
                c++;
            }
        }
    }
    num = c + 1;
    for (int i = 0; i < c; i++){
        for (int j = i + 1; j < c; j++){
            if (arr3[i] != arr3[j]){
                num -= 1;   
            }
        }
    }
    printf("%d", num);
}