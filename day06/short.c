//
// Created by Han on 2022/10/11.
//
#include <stdio.h>

int main(void)
{
    short s = 12;

    long l = 13;

    long long ll = 14;

    printf ("short:%hd\n",sizeof(s));
    printf ("short:%hd\n",s);

    printf ("long:%ld\n",sizeof(l));
    printf ("long:%ld\n",l);

    printf ("longlong:%lld\n",sizeof(ll));
    printf ("longlong:%lld\n",ll);

    return 0;
}