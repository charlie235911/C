#include <stdio.h>

int main(void){
    int n = 0, i = 7;
    char data[]="00000000";
    scanf("%d",&n);
    while (n > 1 || n > 0){
        if (n % 2 == 1){
            data[i] = '1';
            n = (n - 1) / 2;
        }else{
            data[i] = '0';
            n = n / 2;
        }
        i--;
    }
    printf("%s\n",data);
}