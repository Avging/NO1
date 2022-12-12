//
// Created by Han on 2022/11/3.
//
#include<stdio.h>

int main(void)  {
    void js(int x);
    int a;
    printf("输入一个整数:");
    scanf("%d",&a);
    js(a);
}
void js(int x)  {
    int i,a;
    a = 0;
    for(i = 2;i <x/2;i++)  {
        if(x%1 == 0)  {
            a++;
        }
    }
    if(a == 0)  {
        printf("%d是素数。\n",x);
    }
    else  {
        printf("%d不是素数。\n",x);
    }
}