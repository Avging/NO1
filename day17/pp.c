//
// Created by Han on 2022/11/11.
//
#include <stdio.h>

int main(void)  {
    int a[5] = {5,3,8,22,1};
    int i,j,temp;

    for(i = 0;i < 5;i++)  {
        for(j = i+1;j < 5;j++)  {
            if(a[i] > a[j])  {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i = 0;i < 5;i++)  {
        printf("%d\t",a[i]);
    }
}