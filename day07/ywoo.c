//
// Created by Han on 2022/11/10.
//
#include <stdio.h>

void main()
{
    double sum,t;				/*t为累乘器，初值通常为1；sum为累加器，初值有时为0、有时为累加的第一个数；i为计数器，									初值为1，即为2^1的指数*/
    int i;
    for(t = 1,sum = 1,i = 1;i <= 63;i++)
    {
        t = t*2;
        sum = sum+t;
    }
    printf("豆子总数为：%e\n",sum);
    printf("折合体积为：%e立方米\n",sum/1.42e8);
}
