#include <stdio.h>

int main(void){
    int i = 0; 
    char string;
    while (scanf("%c", &string)!= EOF){
        if (string == '"'){
            i++;
            if (i % 2 == 1){
                printf("``");
            }else if (i % 2 == 0){
                printf("''");
            }
        }else{
            printf("%c", string);
        }
    }
}