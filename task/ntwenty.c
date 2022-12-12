//
// Created by Han on 2022/11/14.
//
#include <stdio.h>
#include <math.h>

int main(void)  {
    float x ;
    float result;
    scanf("%f",&x);
    if(x >= 0)  {
        result = sqrt(x);
        printf("f(%.2f) = %.2lf",x,result);
    }
    else  {
        result = (pow(x+1,2) + (2*x) + (1/x));
        printf("f(%f) = %.2f",x,result);
    }
    //10.00
    // printf("f(%lf) = %.2lf",x,result);
}