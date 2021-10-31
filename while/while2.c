#include <stdio.h>

int main(void){
    int n=0,m=2,i=1;
    scanf("%d",&n);
    if (n==1){
        printf("NO, 0\n");}
        else if (n==2){
            printf("YES, 1\n");}
                else{
                    while ((n+1)/2>=m&&n%m!=0){
                        m++;
                        i++;}
                        if (m<n/2){
                            printf("NO, %d\n",i);}
                            else{
                                printf("YES, %d\n",i-1);}}
}