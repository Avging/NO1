//
// Created by Han on 2022/11/15.
//
#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct student  {
    char name[20];
    int age;
};

int main(void)  {
    struct student* pStu = (struct student*)malloc(sizeof(struct student));

    strcpy(pStu->name,"Aomsir");   //字符串的赋值只能用它
    pStu->age = 20;  //->相当于.

    printf("%s\t",pStu->name);
    printf("%d",pStu->age);
}