//
// Created by Han on 2022/10/26.
//
#include<stdio.h>

int main(void)  {
  //  while(1)  {
    int order = 6;
    switch(order)  {
        case 1:
            printf("添加一个学生\n");
            break;
        case 2:  {
            int b = 23;
            printf("删除一个学生%d\n",b);
        }
        break;
        case 3:
            printf("浏览学生信息\n");
        case 4:
            printf("退出系统\n");
            break;
        default:
            printf("系统无该指令\n");
            break;
    }
    if(2 < 3)  {
        printf("1");
    }
    else if(2 < 3)  {
        printf("2");
    }
   // }
}