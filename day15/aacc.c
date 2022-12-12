//
// Created by Han on 2022/11/1.
//
#include<stdio.h>

int main(void)  {
    int a[5] = {1,2,3,4,5};

    int* p = a;
    printf("%p\t",p);

    p = &a;
    printf("%p\t",p);

    p = &a[0];
    printf("%p\n",p);

}