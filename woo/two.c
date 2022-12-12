//
// Created by Han on 2022/11/28.
//
#include <stdio.h>

int main(void)  {
    int n,max,min,x;
    float sum;

    scanf("%d%d",&n,&x);
    max = min = sum = x;

    for(int i = 1;i < n;i++)  {
        scanf("%d",&x);
        sum += x;
        if(max < x)  {
            max = x;
        }
        if(min > x)   {
            min = x;
        }
    }
    printf("%d,%d,%f",max,min,sum/n);
}

