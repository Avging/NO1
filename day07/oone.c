//
// Created by Han on 2022/11/10.
//
#include <stdio.h>

int main()
{
    double capital=0 ,rate=0 ,total=0;
    scanf("%lf %lf",&capital ,&rate);
    total = capital*rate*0.01 + capital;
    printf("本金:%11.2lf元\n利息:%11.2lf元\n合计:%11.2lf元\n",capital,rate*0.01*capital,total);

    return 0;
}


