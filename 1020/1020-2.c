#include <stdio.h>

float max(float v1, float v2, float v3, float v4, float v5){
    float maxVal = v1;
    maxVal = maxVal < v2 ? v2 : maxVal;
    maxVal = maxVal < v3 ? v3 : maxVal;
    maxVal = maxVal < v4 ? v4 : maxVal;
    maxVal = maxVal < v5 ? v5 : maxVal;
    return maxVal;
}

float min(float v1, float v2, float v3, float v4, float v5){
    float minVal = v1;
    minVal = minVal > v2 ? v2 : minVal;
    minVal = minVal > v3 ? v3 : minVal;
    minVal = minVal > v4 ? v4 : minVal;
    minVal = minVal > v5 ? v5 : minVal;
    return minVal;
}

int main(void){
    float x1, x2, x3, x4, x5;
    scanf("%f%f%f%f%f", &x1, &x2, &x3, &x4, &x5);
    printf("max = %f\n",max(x1, x2, x3, x4, x5));
    printf("min = %f\n",min(x1, x2, x3, x4, x5));
}