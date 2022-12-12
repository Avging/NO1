//
// Created by Han on 2022/11/16.
//
#include <stdio.h>

int main(void)  {
    int a[5] = {1,4,5,7,8};
    int max = a[0];
    int min = a[0];
    int s = 0;

    for(int i = 0;i < 5;i++)  {
        if(max < a[i])  {
            max = a[i];
        }
        if(min > a[i])  {
            min = a[i];
        }
        s = s + a[i];
    }
    printf("%d\t%d\t%d",max,min,s);
}