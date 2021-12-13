#include <stdio.h>

int main(void){
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    int a[n][m] ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int *aptr = a[0];
}