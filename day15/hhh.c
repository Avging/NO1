//
// Created by Han on 2022/10/30.
//
#include<stdio.h>

int main(void)  {
    int a = 12;
    int b = 34;
    double d;
    int* p = &a;
    printf("%p,%p,%p\n",&p,p,&a);
    p = &b;
    printf("%p,%p,%p",&p,p,&b);
    p = &d;
}