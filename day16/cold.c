//
// Created by Han on 2022/11/4.
//
#include <stdio.h>
#include<malloc.h>
#include<memory.h>
//#include<string.h>

int main(void) {
    int *p = (int *) malloc(4);
    int* p1 = p;
    p = (int*)malloc(4);
    *(p+1) = 12;
    free(p);
}