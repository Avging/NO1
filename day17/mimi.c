//
// Created by Han on 2022/11/9.
//
#include<stdio.h>

void fun1(void);
void fun2(void);

int main(void)  {
    fun1();
    //fun2();
}

void fun1(void)  {
    //fun1();
    printf("123\n");
}

void fun2(void)  {
    fun1();
    printf("456\n");
}
