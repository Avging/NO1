//
// Created by Han on 2022/11/15.
//
#include <stdio.h>

struct student  {
    char name[20];   //name为属性
    int age;
};
struct student stu1 = {"Aomsir",21};

void func()  {
    printf("%d",stu1.age);
}

int main(void)  {
    printf("%s\n",stu1.name);

    struct student stu2 = {"Jewix",24};
    printf("%s",stu2.name);
}