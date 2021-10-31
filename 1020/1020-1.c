#include <stdio.h>

int main(void){
    int n = 0, k = 0, m = 1, i = 0, j = 1, a = 1;
    scanf("%d%d", &n, &k);
    i = n - k;
    while (n > 0){
        m *= n;
        n--;
    }while (k > 0){
        j *= k;
        k--;
    }while (i > 0){
        a *= i;
        i--;
    }
    printf("%d\n", m / (j * a));
}