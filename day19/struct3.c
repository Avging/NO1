//
// Created by Han on 2022/11/15.
//
#include <stdio.h>
#include <malloc.h>

struct student  {
    int* p;
};

int main(void)  {
    struct student stu;

    stu.p = (int*)malloc(4);
    *stu.p = 10;

    printf("%d",*stu.p);
}