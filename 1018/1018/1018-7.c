#include <stdio.h>

int main(void){
    int n = 0, m = 2, i = 1;
    scanf("%d",&n);
    if (n==1){
        printf("NO\n");
    }else if (n==2){
        printf("YES\n");
    }else{
        while ((n+1)/2>=m&&n%m!=0){
            m++;
            i++;
        }if (m<n/2){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
}