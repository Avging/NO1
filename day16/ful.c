//
// Created by Han on 2022/11/6.
//
#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main(void)  {
    int* p = (int*)malloc(sizeof(int)*5);
    int* p1 = (int*)malloc(sizeof(int)*5);
    int i;

    memset(p,0,20);

    for(i = 0;i < 5;i++)  {
        printf("%d\n",p[i]);
    }
    printf("\n");
    for(i = 0;i < 5;i++)  {
        printf("%d\n",*(p+i));
    }
}