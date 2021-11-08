#include <stdio.h>
#define SIZE 50

int main(void){
    int i = 0;
    float n = 0; 
    float arr[SIZE];
    while (n != '-999'){
        scanf("%f",&n);
        arr[i] = n;
        i++;
    }
    for (int j = 0; j < i; j++){
        for (int k = j+1; k < i; k++)
        {
            /* code */
        }
        
    }
    printf("%012.3f", arr);
}