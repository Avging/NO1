//
// Created by Han on 2022/11/2.
//
#include<stdio.h>
#include<malloc.h>

int main(void)  {
    int* p = (int*)malloc(4);

    *p = 4;
    printf("%d\n",*p);
    printf("%p\n",p);

    realloc(p,4);
    p = NULL;
    printf("%p\n",p);

    p = (int*)malloc(4);
    *p = 100;
    printf("%d",*p);
    return 0;
}