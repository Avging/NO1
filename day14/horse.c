//
// Created by Han on 2022/10/29.
//
#include<stdio.h>
#include<memory.h>

int main(void)  {
//    int a[5] = {1,2,3,4,5};
//    //int b[5] = {a};
//    int b[5];
//    int c[3];

    //b = a;
    int a[3][2] = {1,2,3,4,5,6};
    int b[3][2];


    //memcpy(被赋值的数组,赋值的数组,赋值多少内容);
    memcpy(&b[0][0],&a[0][0],sizeof(int)*6);

}