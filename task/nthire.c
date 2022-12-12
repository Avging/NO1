//
// Created by Han on 2022/11/14.
//
#include <stdio.h>
#include <stdlib.h>

void up_and_down(int);  //函数声明

int main(void){
    up_and_down(1);  //调用函数
    return 0;
}


//定义函数
void up_and_down(int n){
    printf("Level %d: n location %p\n",n , &n);

    if(n < 4){
        up_and_down(n + 1);
    }

    printf("LEVEL %d: n location %p\n",n , &n);
}