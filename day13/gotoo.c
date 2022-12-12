//
// Created by Han on 2022/10/26.
//
#include<stdio.h>

int main(void)  {
    int i = 0;
step:
    printf("hello C3~\n");
    i++;
    if(3 == i)  {
        goto step1;
    }
    goto  step;

step1:
    printf("已经推出！\n");
}