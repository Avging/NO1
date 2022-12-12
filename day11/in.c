//
// Created by Han on 2022/10/21.
//
#include<stdio.h>

int main(void)  {
    int i = 1;
    int j = 5;

    for(i = 1, j = 5; i <= 5; i++)  {
        printf("%d %d\n",i,j);
        j--;
    }

    return 0;
}