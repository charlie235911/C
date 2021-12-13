#include <stdio.h>

int main(void){
    int n, m, k, count = 0;
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
    for (int i = 0; i < n * m; i++)
    {
        if (*(aptr + i) == k)
        {
            count++;
        }
    }
    printf("%d\n", count);
}