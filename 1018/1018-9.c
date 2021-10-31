#include <stdio.h>

int main(void){
    int n = 0, m = 0, a = 0, b = 0;
    scanf("%d%d",&n,&m);
    b = n * m;
    if (n == 1 && m == 1){
        printf("%d\n",1);
        printf("%d\n",1);
    }else if (n == 1 || m == 1){
        printf("%d\n",1);
        printf("%d\n",n * m);
    }else if ( n == m && n != 0){
        printf("%d\n",1);
        printf("%d\n",n);
    }else if (n == 0 || m == 0){
        printf("%d\n",0);
        printf("%d\n",0);
    }else if (n > m && n % m == 0){
            printf("%d\n",m);
            printf("%d\n",n);
    }else if (n > m && m % n == 0){
            printf("%d\n",n);
            printf("%d\n",m);
    }else if (n > m && n % m != 0){
        while (m != 0){
            n = n % m;
            m = m % n;
            a = n;
            printf("%d\n",a);
            printf("%d\n",b / a);
        }
    }else if (m > n && m % n != 0){
        while (n != 0 ){
            m = m % n;
            n = n % m;
            a = m;
            printf("%d\n",a);
            printf("%d\n",b / a);
        }
    }
}