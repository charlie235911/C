#include <stdio.h>

int main(void){
    int n = 0, b = 0, string, arr[100];
    scanf("%d%s", &n, &string);
    b = n;
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    if (string == 'a'){
        for (int i = 0; i < b; i++){
            for (int j = i + 1; j < b; j++){
                if (arr[i] > arr[j]){
                    int a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
    }else{
        for (int i = 0; i < b; i++){
            for (int j = i + 1; j < b; j++){
                if (arr[i] < arr[j]){
                    int a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }
    }
    for (int i = 0; i < b; i++){
        printf("%d ", arr[i]);
    }
}