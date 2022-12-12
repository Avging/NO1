//
// Created by Han on 2022/11/17.
//
#include <stdio.h>

int prime(int a)  {
    int i;

    for(i = 2;i < a;i++)  {
        if(a%i == 0)  {
            return 1;
        }
        else
        return 0;
    }
}

int main(void)  {
    int n;
    scanf("%d",&n);

    int c = prime(n);

    if(c == 0)  {
        printf("这是个素数");
    }
    else  {
        printf("这不是个素数");
    }
}