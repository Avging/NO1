//
// Created by Han on 2022/11/11.
//
#include <stdio.h>

void fun(int a,double d)  {
    printf("%d,%.2lf\n",a,d);
}


int main(void)  {
    fun(12,13.13);
    return 0;
}