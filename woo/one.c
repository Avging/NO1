//
// Created by Han on 2022/11/28.
//
#include <stdio.h>

int main(void) {
    int a,b,c,temp;

    scanf("%d%d%d",&a,&b,&c);

    if(a > b)  {
        temp = a;
        a = b;
        b = temp;
    }

    if(a > c)  {
        temp = a;
        a = c;
        c = temp;
    }

    if(b > c)  {
        temp = b;
        b = c;
        c = temp;
    }

    printf("%d，%d,%d",a,b,c);
}