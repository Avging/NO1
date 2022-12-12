//
// Created by Han on 2022/10/31.
//
#include<stdio.h>

int main(void) {
//    int a = 123;
//    int *p = &a;

//    double d = 123.123;
//    int* p1 = &d;
//
//    printf("%lf,%lf\n",d,*p1);
//
//    *p = 12345;
//    printf("%lf,%lf\n",d,*p1);
    int d = 123;
    double* p1 = &d;
    printf("%lf,%lf\n",d,*p1);
    *p1 = 12345;
    printf("%lf,%lf\n",d,*p1);

}