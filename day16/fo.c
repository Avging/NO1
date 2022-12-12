//
// Created by Han on 2022/11/7.
//
#include <stdio.h>
#include<malloc.h>

int main(void) {
    int* p = (int*)malloc(sizeof(int)*5);
    int i = 0;

//    for (i = 0; i < 10; i++) {
//        *(p+i) = 0;
//        printf("*(p+%d) = %d\n", i,*(p+i));
//    }


    for(i = 0;i < 10;i++)  {
        *(p+i) = 0;
    }
    for(i = 0;i < 10;i++)  {
        printf("*(p+%d) = %d\t",i,*(p+i));
    }
}