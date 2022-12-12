//
// Created by Han on 2022/10/13.
//
#include <stdio.h>

int main(void)
{
    //int a= 12;

   // printf ("前：%d\n",a);

   // scanf ("%f",&a);

    //printf ("后:%d\n",a);

    int a = 1,
        b = 2;

    printf ("前：%d,%d\n",a,b);

    printf ("请输入：");

    scanf ("%d,%d",&a,&b);

    printf ("后：%d,%d\n",a,b);

    return 0;
}