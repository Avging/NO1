//
// Created by Han on 2022/10/25.
//
#include<stdio.h>

int main(void)  {
    int a = 55;

    if(a < 60)  {
        printf("不及格\n");
    }
    else if(a >= 60 && a<= 70)  {
        printf("良\n");
    }
    else if(a >= 70 && a < 80)  {
        printf("好\n");
    }
    else if(a >= 80 && a < 90)  {
        printf("优\n");
    }
    else  {
        printf("完美\n");
    }

}