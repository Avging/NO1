//
// Created by Han on 2022/1
//
#include<stdio.h>

int main(void)  {
    int a;
    int b;
    int c;
    c = (1,2,3);
    int m = 2,n = 2;
    m = (n = 2*2,n*2),m++;
    printf("%d",m);

    return 0;
}