//
// Created by Han on 2022/11/12.
//
#include <stdio.h>

void fun1(int c,int d)  {
    int temp = c;
    c = d;
    d = temp;
}

void fun2(int* p1,int* p2)  {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void)  {
    int a = 2,
        b = 3;
    fun1(a,b);
    printf("%d,%d\n",a,b);
    fun2(&a,&b);
    printf("%d,%d\n",a,b);
}