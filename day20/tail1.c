//
// Created by Han on 2022/11/21.
//
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct Student{
    int ID;
    struct Student* next;
}Student;

int main(void)  {
    Student* head = (Student*) malloc(sizeof(Student));
    Student* start = (Student*) malloc(sizeof(Student));
    Student* tail = NULL;

    printf("请输入第1个元素:");
    scanf("%d",&start->ID);

    head->next = start;
    start->next = NULL;

    //链表的建立
    for (int i = 0;i < 9;i++)  {
        tail = start;
        start = (Student*) malloc(sizeof(Student));

        printf("请输入第%d个元素:",i+2);
        scanf("%d",&start->ID);

        start->next = NULL;
        tail->next = start;
    }
    start = NULL;
    tail = NULL;

    //链表的遍历
    Student* pHead = head->next;
    while (pHead != NULL)  {
        printf("%d\t",pHead->ID);
              pHead = pHead->next;
    }

}