//
// Created by Han on 2022/10/28.
//
#include<stdio.h>

int main(void)  {
    //{{2,3},{4,5}{7,8}}
    int a[3][2] = {{1,2},
                   {3,4},
                   {5,6}};

    int a2[3][2] = {{1,2},{3,4}};
    int a3[3][2] = {{1},{3,4}};
    int a4[3][2] = {1,2,3,4,5,6};
    int a5[][2] = {{1,2},{3,4}};

    printf("%d",sizeof(a));
}