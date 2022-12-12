//
// Created by Han on 2022/10/25.
//
#include<stdio.h>

int main(void)  {
    if(1)  {
        printf("真\n");
        if(1)  {
            printf("内真\n");
        }
        else  {
            printf("内假\n");
        }
    }
    else  {
        printf("假\n");
    }
    1 ? printf("真\n"),1 ? printf("内真") :printf("内假”）: printf("假\n");

    getchar();
    return 0;
}