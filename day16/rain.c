//
// Created by Han on 2022/11/5.
//
#include <stdio.h>
#include<malloc.h>

int main(void)  {
    int* p = (int*)malloc(40);  //40个字节，即有10个元素可以作为数组
    printf("%d",*p);
//    int i = 0;
//
//    for(i = 0;i < 10;i++)  {
//        p[i] = 0;
//        printf("p[%d] = %d\n",i,p[i]);
    }