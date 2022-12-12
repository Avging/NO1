//
// Created by Han on 2022/10/28.
//
#include<stdio.h>

int main(void)  {
    int a[5] = {7,2,5,3,6};

    printf("%d\n",sizeof(a));

    printf("%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4]);
    printf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    printf("%d,%d",&a,&a+1);
}
int a[3] = {4,3,8};
{{1,2},{4,3},{10,10}}