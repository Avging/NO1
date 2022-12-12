//
// Created by Han on 2022/11/14.
//
#include <stdio.h>

int main(void)  {
    char a,b;

    scanf("%c",&a);
    getchar();
    b = getchar();

    printf("--------\n");

    printf("%c\n",a);
    putchar(b);
    printf("\n");
    printf("--------");

    return 0;
}