//
// Created by Han on 2022/11/29.
//
#include <malloc.h>
#include <stdio.h>

typedef struct Student{
    int ID;
    int age;
    int name;
}Student;

int main(void)  {
    Student a;
    Student student;
    scanf("%d%d%d",&student.ID,&student.age,&student.name);
    Student* b = (Student*)malloc(sizeof(Student));

    *b = student;
    a = student;
    printf("%d,%d,%d,%d",a.ID,a.age,a.name,b->name);
}