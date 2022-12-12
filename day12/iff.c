//
// Created by Han on 2022/10/23.
//
#include<stdio.h>

int main(void)  {
    //成绩的变量

    int score = -1;
    //输入成绩
    scanf("%d",&score);
    //判断
    if(score >= 60)  {
        printf("%d分及格",score);
    //满足，打印及格
    //跳过，程序结束
    }

    return 0;
}