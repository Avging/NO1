//
// Created by Han on 2022/10/29.
//
#include<stdio.h>

int main(void)  {
    int a[3][2] = {1,2,3,4,5,6};
    printf("%d,%d,%d,%d,%d,%d\n",&a[0][0],&a[0][1],&a[1][0],&a[1][1],&a[2][0],&a[2][1]);
    printf("%d,%d\n",&a[0][0],&a[0][0]+1);
    printf("%d,%d,%d\n",&a[0],&a[1],&a[2]);
    printf("%d,%d\n",&a[0],&a[0]+1);
    printf("%d\n",&a);
    printf("%d",&a+1);
}