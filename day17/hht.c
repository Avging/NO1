//
// Created by Han on 2022/11/11.
//
#include <stdio.h>

void fun1(int** p)  {
    printf("p = %p \n",p);
    *p = NULL;
    printf("p = %p\n",p);
}

int main(void)  {
    int a = 12;
    int* p1 = &a;
    printf("%p\n",p1);
    fun1(&p1);
    printf("%p\n",p1);
}