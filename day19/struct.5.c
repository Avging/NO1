//
// Created by Han on 2022/11/16.
//
#include <stdio.h>
#include <malloc.h>

typedef struct {
    int studentId;
}student;

int main()  {
    student student1;
    student* pStudent1 = (student*)malloc(sizeof(student));

    student1.studentId = 10908;
    printf("%d\t",student1.studentId);

    pStudent1->studentId = 12223;
    printf("%d",pStudent1->studentId);
}