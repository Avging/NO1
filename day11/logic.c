//
// Created by Han on 2022/10/19.
//
#include <stdio.h>

int main(void)  {
    //1 < 2 && 3 > 5 && 3 < 1;
    int a = 0,
        b = 2;

    (a = 2 > 1) && (b = 3);

    printf("%d,%d\n",a,b);

    return 0;
}