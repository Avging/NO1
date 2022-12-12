//
// Created by Han on 2022/10/17.
//
#include <stdio.h>

int main(void)   {
    int a = 12;
    int b = 12;

    int c = (a++);

    int d = ++b;

    printf ("%d,%d,%d,%d\n",a,b,c,d);

    return 0;
}