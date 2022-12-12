//
// Created by Han on 2022/11/11.
//
#include <stdio.h>

int main(void)  {
    int a[5] = {2,7,9,1,8};
    int i,j,temp;

    for(i = 0;i < 5;i++)  {
        for(j = 0;j < 5-i;j++)  {
            if(a[j] > a[j+1])  {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(i = 0;i < 5;i++)  {
        printf("%d\t",a[i]);
    }
}