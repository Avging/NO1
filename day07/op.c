//
// Created by Han on 2022/11/19.
//
#include <stdio.h>

int func(int x){
    int count = 0;
    while (x){
        count++;
        x = x&(x - 1);//与运算
    }
    return count;
}

int main(void)  {
    int i = 9999;
    printf("%d",func(i));
}