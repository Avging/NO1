//
// Created by Han on 2022/11/13.
//
#include <stdio.h>

int fun(int a,int b)  {
    printf("123");
    return 9;
}

int main(void)  {
    int (*p)(int a,int b) = fun;
    fun(1,2);
}