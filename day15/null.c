//
// Created by Han on 2022/11/1.
//
#include <stdio.h>
#include <malloc.h>    // 视频使用的malloc.h,如果使用不了就使用这个
#include <stdlib.h>


int main() {
    int* p = (int*)malloc(4);   // 将指针p指向堆区一块4字节的空间

    *p = 4;  // 将堆区空间的内容设置为4
    printf("%d\n", *p);   // 输出内容
    printf("%p\n", p);

    free(p);  // 释放p指向的堆区那块4字节空间
    p = NULL;   // 因为p刚刚指向堆区的那块4字节空间已经被释放了,我们没权限使用,但是p还指向着它在,以免写代码写忘记导致对那块空间误操作(比如释放后分给别的程序了,然后我们给改了等等)
    printf("%p\n", p);


    // 我现在有需要一块4字节的空间,直接在申请一块堆区内存就行
    // 这样我栈区就只占用了一块int*类型的空间
    p = (int*)malloc(4);
    *p = 100;
    printf("%p",p);
    return 0;
}