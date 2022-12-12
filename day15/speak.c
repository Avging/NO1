//
// Created by Han on 2022/10/31.
//
#include<stdio.h>

int main(void)  {
    int a = 12;
    int* p = &a;
    //读
    printf("%p,%d,%d\t",p,*p,a);
    //写
    *p = 145;
    printf("%d,%d\t",*p,a);
    //取地址
    printf("%p,%p,%p,%p",&p,p,&*p,&a);
}