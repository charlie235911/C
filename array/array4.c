#include <stdio.h>

int main(void){
    int n = 0, flag = 1; 
    char arr[100];
    scanf("%s", arr);
    while (arr[n] != '\0'){
        n++;
    }
    for (int i = 0, m = n - 1;  i <= (n -1)/2; i++, m--){
        if (arr[m] != arr[i]){
            flag = 0;
            break;
        }
    }
    if (flag == 0){
        printf("%s\n", "No");
    }else{
        printf("%s\n", "Yes");
    }
}