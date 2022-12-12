//
// Created by Han on 2022/11/28.
//
#include <stdio.h>

int main(void)  {
    int n,x,i;
    float sum;
    scanf("%d",&x);
    sum = x;

    for(i = 1;i < n;i++)  {
        scanf("%d",&x);
        sum += x;
    }
    printf("%f",sum/n);
}