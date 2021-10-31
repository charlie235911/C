#include <stdio.h>

int fun(int x, int y);
int fun(int x, int y){
    int i = 12,a = 0, b = 0;
    char data[] = "000000000000";
    while (x > y){
        a = x % y;
        b = x / y;
        x = b;
        data[i] = '0' + a;
        i--;
    }
    data[i]= '0' + b;
    printf("%s\n",data);
}
int main(void){
    int n = 0, m = 0;
    scanf("%d%d", &n, &m);
    fun(n,m);
}