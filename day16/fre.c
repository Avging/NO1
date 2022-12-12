//
// Created by Han on 2022/11/6.
//
#include<stdio.h>
#include<malloc.h>

int main(void)  {
//    int* p = (int*)malloc(4);
//    *p = 12;
//    printf("%p,%d\n",p,*p);
//
//    free(p);
//    p = NULL;
//
//  //  if(NULL == p)
//    printf("%p\n",p);
    int* p = (int*)malloc(4);
    free(p);
    free(p);

}