#include <stdio.h>

int main(void){
    int  n = 0, max = 0, m = 0, i = 0, a = 0, b = 0, j = 1;
    scanf("%d", &n);
    char arr[n];
    for (; m < n; m++){
        scanf("%d", &arr[m]);
    }
    if (m == 1){
        m--;
        printf("%d", arr[m]);
    }else{
        for (; m >= 0; m--){
            i = j;
            j = arr[m] * j;
            b = arr[m] * b;
            if (j < i && b < i){
                b = j;
                j = 1;
                a = i;
            }else if (j > i){
                    i = j;
            }else if (b > i){
                j = b;
            }
        }
        if (a > j){
            max = a;
        }else if (a < j){
            max = j;
        }
        printf("%d\n", max);
    }
}