//
// Created by Han on 2022/11/11.
//
#include <stdio.h>

//void fun(int b)  {
//    printf("b = %d\n",b);
//    b = 12;
//    printf("b = %d\n",b);
//}
void fun(int* p)  {
    printf("p = %d\n",*p);
    *p = 12;
    printf("p = %d\n",*p);
}

int main(void)  {
    int a = 2;
    printf("a = %d\n",a);
    fun(&a);
    printf("a = %d\n",a);
}