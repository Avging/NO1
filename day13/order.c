//
// Created by Han on 2022/10/25.
//
#include<stdio.h>

int main(void)  {
    int order = -1;
    scanf("%d",&order);

    if(1 == order)  {
        printf("添加一个学生\n");
    }
    else if(2 == order)  {
        printf("删除一个学生信息\n");
    }
    else if(3 == order)  {
        printf("浏览学生信息\n");
    }
    else if(4 == order)  {
        printf("退出系统\n");
    }
    else  {
        printf("系统无该指令\n");
    }

    switch(order)  {
        case 1:
            printf("添加一个学生\n");
            break;
        case 2:
            printf("删除一个学生信息\n");
            break;
        case 3:
            printf("浏览学生信息\n");
            break;
        case 4:
            printf("退出系统\n");
            break;
        default:
            printf("系统无该指令\n");
            break;
    }

}
switch(匹配定义的)  {
    case 1:
        语句1;
        break;
    case 2:
        语句2;
    break;
    ``````
    default:缺省语句；
}