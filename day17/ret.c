//
// Created by Han on 2022/11/10.
//
#include <stdio.h>

int fun(void)  {
    printf("123\n");

    return 4;
}

int main(void)  {
    int a = fun();

    printf("%d,%d\n",a,fun());
    printf("一个fun");
    return 0;
}