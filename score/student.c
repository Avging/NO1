#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct Student{
    int ID;
    int name;
    int classes;
    int score;
    int phone;
    struct Student* next;
} Student;

void menu(void);
void show(Student* head);
void record(Student* head,Student student);


int main()  {
    int a = 0;
    Student* head = (Student*)malloc(sizeof(Student));
    Student student;

    printf("log3");
    while(1)  {
        printf("log1");
        menu();
        printf("log2");

        scanf("%d",&a);

        printf("\n");

        switch(a)  {
            case 0:
                printf("欢迎再次使用本系统");
                printf("\n");
                return 0;
            case 1:
                printf("请依次在一行内输入学号、姓名、班级、成绩、电话号\n");
                scanf("%d%d%d%d%d",&student.ID,&student.name,&student.classes,&student.score,&student.phone);
                record(head,student);
                break;
            case 2:
                // TODO:删除
                break;
            case 3:
                // amend();
                // TODO: 修改
                break;
            case 4:
                //TODO:查询
                //lookup();
                break;
            case 5:
                show(head);
                break;
            default:
                printf("输入错误，请重新输入\n");
                break;
        }
    }
}



void menu(void)  {  //菜单
    printf("----------菜单----------\n");
    printf("退出系统点击------0\n");
    printf("录入信息点击------1\n");
    printf("删除信息点击------2\n");
    printf("修改信息点击------3\n");
    printf("查询信息点击------4\n");
    printf("打印所有学生信息点击------5\n");
}


void show(Student* head)  {
    Student* phead = head->next;

    while(phead != NULL)  {
        printf("%d,%d,%d,%d,%d\n",phead->ID,phead->name,phead->classes,phead->score,phead->phone);
        phead = phead->next;
    }
}

void record(Student* head,Student student)  {
    Student* start = (Student*)malloc(sizeof(Student));
    Student* tail;

    head->next = start;
    start->next = NULL;
    tail = start;
    *start = student;
    while(1) {
        start = (Student *) malloc(sizeof(Student));
        break;
    }
}