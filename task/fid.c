//
// Created by Han on 2022/11/17.
//
#include <stdio.h>

int main(void)  {
    int m;
    int tu1 = 1,tu2 = 1,tu3;
    scanf("%d",&m);

    for(int i = 3;i <= m;i++)  {
        tu3 = tu1 + tu2;
        tu1 = tu2;
        tu2 = tu3;
    }
    printf("%d\n",tu3);
}