//
// Created by Han on 2022/11/15.
//
#include <stdio.h>

//结构体嵌套只能嵌套别人或者嵌套自己的指针类型
struct people   {
    int age;
    struct student  {
        int studentId;
    };

    //定义变量
    struct student student;
};

struct teacher  {
    struct teacher *p;  //结构体自己掏自己，只能够嵌套自己的指针，不然就是死循环了
};

int main() {
    struct people people;
    people.student.studentId = 12311;

    printf("%d", people.student.studentId);
}