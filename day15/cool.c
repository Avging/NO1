//
// Created by Han on 2022/11/1.
//
#include<stdio.h>

int main(void)  {
    int a[3] = {1,2,3};
    int b = 2;
    int c = 3;

    int* p[3] = {&a,&b,&c};

    printf("%d\t",a);
    printf("%d\t",&a);
    printf("%d\n",&a[0]);
    printf("%d\n",p[0][0]);
}