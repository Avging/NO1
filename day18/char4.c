//
// Created by 黄祥河 on 2022/11/14.
//

#include <stdio.h>
#include <stdlib.h>

/**
 * 输入缓冲区 - 问题解决
 * @return
 */
int main() {
    int a,b,c,d,e;

    // 这里输入1 2 3 4 5 80,再回车(注意空格)
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    printf("%d\t", a);
    printf("%d\t", b);
    printf("%d\t", c);
    printf("%d\t", d);
    printf("%d\n", e);


    int age;

    // 下面这一句是清空缓冲区的,直接记住就行
    while( (age = getchar()) != '\n' && age != EOF){}

    printf("请输入您的年龄: ");
    scanf("%d", &age);
    printf("您的年龄是%d", age);

    return 0;
}