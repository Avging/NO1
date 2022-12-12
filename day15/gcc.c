//
// Created by Han on 2022/11/3.
//
#include<stdio.h>

int main(void)  {
    int a[5] = {1,2,3,4,5};

    int* p = a;
    printf("%p\t",&a[1]);
    printf("%p\n",p+1);

    printf("%d\t",a[1]);
    printf("%d",*(p+1));
    return 0;
}
