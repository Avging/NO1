//
// Created by Han on 2022/10/15.
//
#include <stdio.h>

int main(void)
{
    float f = 12.23f;
    double d = 13.12345678;
    long double ld =123.459768756757666;

    printf ("%-8 .2f,%lf,%lf",f,d,ld);

    scanf("%f",&d);

    printf ("%f",d);

    return 0;
}