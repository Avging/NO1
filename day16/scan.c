//
// Created by Han on 2022/11/6.
//
#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main(void)  {
    unsigned int a;
    int* p;
    scanf("%u",&a);

    p = (int*)malloc(a);
    free(p);
}