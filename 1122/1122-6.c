#include <stdio.h>
#define SIZE 20
int main(void){
    int n = 0, temp = 0, total = 0, arr[SIZE];
    char num[SIZE];
    while (n <= 18){
        scanf("%c", &num[n]);
        n++;
    }
    for (int i = 0; i < 10; i++){
        if (num[2*i] == 'X'){
            arr[i] = 10;
        }else{
            arr[i] = (num[2*i]-'0');
        }
        if (i != 0){
            arr[i] += temp;
            temp = arr[i];
            arr[i] += arr[i-1];
        }else{
            temp = arr[i];
        }
        
    }
    if (arr[9] % 11 == 0){
        printf("YES");
    }else{
        printf("NO");
    }
    printf("\n");
}  