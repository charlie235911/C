#include <stdio.h>

int main(void){
    int year, month;
    scanf("%d%d", &year, &month);
    int a = (year -1) / 4;
    int b = (year -1) / 100;
    int c = (year -1) / 400;
    int d = a - b + c;
    int e = year -1 - d;
    int n = d * 366 + e * 365;
    
} 