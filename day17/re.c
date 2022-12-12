//
// Created by Han on 2022/11/8.
//
#include <stdio.h>

void fun(void)  {
    printf("123\n");
}

int main(void)  {
    void(*p)(void) = fun;
    fun();
    (&fun)();
    p();

    printf("%d,%p\n",fun,&fun);
   //((void(*)(void))94705457)();

}