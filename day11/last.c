//
// Created by Han on 2022/10/22.
//
#include<stdio.h>

int main(void)  {
    int i = 0;
    for(i = 1;i <= 10;i++)  {
        if(i % 2 == 0)  {
            continue;
        }
        printf("%d  ",i);
    }
}