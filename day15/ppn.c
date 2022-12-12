//
// Created by Han on 2022/11/1.
//
#include<stdio.h>

int main(void)  {
    int a[5] = {1,2,3,4,5};
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;

    int* p[5] = {&a,&b,&c,&d,&e};

    printf("%d\n",p[0][0]);
}