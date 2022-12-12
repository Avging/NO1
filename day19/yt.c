//
// Created by Han on 2022/11/18.
//
#include <stdio.h>

int main(void)  {
    int i,max,min,a;
    scanf("%d",&a);
    max = min = a;
    for(i = 1;i < 30;i++)  {
        scanf("%d",&a);
        if(max < a)
            max = a;
        if(min > a)
            min = a;
    }
    printf("Max = %d,Min = %d\n",max,min);
}