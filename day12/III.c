//
// Created by Han on 2022/10/24.
//
#include<stdio.h>

int main(void)  {
    int a = 40;
    int b = 80;

    if(a >= 60)  {
        printf("及格\n");
    }
    if(a < 60)  {
        printf("不及格\n");
    }

    if(b >= 60)  {
        printf("及格=\n");
    }
    else  {
        printf("不及格\n");
    }

    return 0;
}