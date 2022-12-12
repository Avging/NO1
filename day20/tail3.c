//
// Created by Han on 2022/11/23.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct Student{
    int ID;
    struct Student* next;
}Student;


void build(Student* head,Student* start,Student* tail)  {
    printf("请输入第1个元素");
    scanf("%d",&start->ID);

    head->next = start;
    start->next = NULL;

    for(int i = 0;i < 4;i++)  {
        tail = start;
        start = (Student*) malloc(sizeof(Student));

        printf("请输入第%d个元素",i+2);
        scanf("%d",&start->ID);

        start->next = NULL;
        tail->next = start;
    }
    start = tail = NULL;

}

void loop(Student* head)  {
    Student* pHead = head->next;
    while(pHead != NULL)  {
        printf("%d",pHead->ID);
        pHead = pHead->next;

    }

    printf("\n");

}

void add(Student* head,Student* start,Student* tail)  {
    start = head;
    tail = head->next;

    while(tail != NULL)  {
        if(tail->ID == 3)  {
            break;
        }
        start = start->next;
        tail = tail->next;
    }

    Student* a1 = (Student*)malloc(sizeof(Student));
    a1->ID = 11;

    start->next = a1;
    a1->next = tail;

    start = tail = a1 = NULL;

    Student* pHead1 = head->next;
    while(pHead1 != NULL)  {
        printf("%d",pHead1->ID);
        pHead1 = pHead1->next;
    }

    printf("\n");
}

void delete(Student* head,Student* start,Student* tail)  {
    start = head;
    tail = head->next;
    while(tail != NULL)  {
        if(tail->ID == 3)  {
            break;
        }
        tail = tail->next;
        start = start->next;
    }

    start->next = tail->next;
    free(tail);
    tail =NULL;
    start = NULL;

    Student* pHead2 = head->next;
    while(pHead2 != NULL)  {
        printf("%d",pHead2->ID);
        pHead2 = pHead2->next;
    }
}

int main(void)  {
    Student* head = (Student*) malloc(sizeof(Student));
    Student* start = (Student*) malloc(sizeof(Student));
    Student* tail = NULL;


    build(head,start,tail);

    loop(head);

    add(head,start,tail);

    delete(head,start,tail);

}