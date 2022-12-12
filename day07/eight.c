//
// Created by Han on 2022/11/3.
//
#include<stdio.h>
#define PI 3.14
int main(void)  {
    double x;
    double js(double x);
    printf("输入多个圆的半径以-1表示结束输入:");
    scanf("%lf",&x);
    while(x != -1)  {
        printf("的圆,它的半径为%lf",x,js(x));
        scanf("%lf",&x);
        printf("\n");
    }
}
double js(double x)  {
    double c,s;
    c = x*PI;
    s = x*x*PI;
    printf("面积S = %lf;周长C = %lf",s,c);
    return 0;
}
