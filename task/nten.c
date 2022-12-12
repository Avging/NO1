//
// Created by Han on 2022/11/13.
//
#include <stdio.h>


int main(void)  {
    int A = 1;
    int B = 2;
    int a = A+B;
    int b = A-B;
    int c = A*B;
    int d = A/B;

    scanf("%d %d",&A,&B);

    printf("%d + %d = %d\n",A,B,a);
    printf("%d - %d = %d\n",A,B,b);
    printf("%d * %d = %d\n",A,B,c);
    printf("%d / %d = %d\n",A,B,d);
}