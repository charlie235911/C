#include <stdio.h>

int square(int n, int arr[n]);
int square(int n, int arr[n]){
    int i = 0;
    while (i <= n - 1){
        arr[i] = arr[i] * arr[i];
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}
int main(void){
    int  n = 0;
    int arr[100];
    scanf("%d", &n);
    for (int m = 0; m <= n - 1; m++){
        scanf("%d", &arr[m]);
    }
    square(n, arr);
}