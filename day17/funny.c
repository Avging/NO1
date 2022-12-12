//
// Created by Han on 2022/11/7.
//
#include <stdio.h>

int FindMaxNum(int* p,int* p1)  {
    int i = 0;
    int maxnum = p[0];

    for(i = 1;i < 6;i++)  {
        if(maxnum < p[i])  {
            maxnum = p[i];
        }
    }
    *p1 = maxnum;
    return maxnum;
}

int main(void)  {
    int a[6] = {12,34,32,45,32,21};
    int n = 0;
    printf("%d\n",FindMaxNum(a,&n));
    printf("%d\n",n);
}