#include <stdio.h>

int main(void){
    int  n = 0, i = 0, temp1 = 0, temp2 = 0, temp3 = 0;
    scanf("%d", &n);
    char arr[n]; 
    int num[n], total[n];
    for (int m = 0; m < n; m++){
        scanf(" %c%d", &arr[m], &num[m]);
    }
    for (int i = 0; i < n; i++){
        if (arr[i] == 'S'){
            total[i] = 39 + num[i];
        }else if (arr[i] == 'H'){
            total[i] = 26 + num[i];
        }else if (arr[i] == 'D'){
            total[i] = 13 + num[i];
        }else if (arr[i] == 'C'){
            total[i] = 0 + num[i];
        }
    }
    for (int j = 0; j < n; j++){
        for (int k = j + 1; k < n; k++){
            if (total[j] < total[k]){
                temp1 = total[j];
                temp2 = arr[j];
                temp3 = num[j];
                total[j] = total[k];
                arr[j] = arr[k];
                num[j] = num[k];
                total[k] = temp1;
                arr[k] = temp2;
                num[k] = temp3;
            } 
        }
        printf("%c%d ", arr[j], num[j]);
    }
    printf("\n");
}