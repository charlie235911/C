#include <stdio.h>

int main(void){
    float h = 0, w = 0, bmi = 0; //h = height, w = weight
    printf("%s","身高：");
    scanf("%f",&h);
    h = h / 100;
    h = h * h;
    printf("%s","體重：");
    scanf("%f",&w);
    bmi = w / h;
    printf("%s%f\n","BMI：", bmi);
    if (bmi < 18.5){
        printf("%s\n","體重過輕");
    }else if (bmi >= 18.5 && bmi < 24){
        printf("%s\n","健康體位");
    }else if (bmi >= 24 && bmi < 27){
        printf("%s\n","過重");
    }else if (bmi >= 27 && bmi < 30){
        printf("%s\n","輕度肥胖");
    }else if (bmi >= 30 && bmi < 35){
        printf("%s\n","中度肥胖");
    }else{
        printf("%s\n","重度肥胖");
    }
}