//
// Created by Han on 2022/11/10.
//
#include <stdio.h>

int main(void) {

    int higher(int x, int y);  //调用higher函数
    int a[10], b[10];  //定义a b 两只球队，并且每个球队的人员10名
    int i;  //用来遍历数组的元素
    int n = 0;  //显示a大于b的次数
    int m = 0;  //显示a等于b的次数
    int k = 0;  //显示a小于b的次数
    printf("请输入a队十个成绩：\n");
    for (i = 0; i < 10; i++)
        scanf_s("%d", &a[i]);  //循环，键入十个数字
    printf("\n");
    printf("请输入n对十个成绩:\n");
    for (i = 0; i < 10; i++)
        scanf_s("%d", &b[i]);//循环 键入十个数字
    printf("\n");

    for (i = 0; i < 10; i++) {
        if (higher(a[i], b[i]) == 1)
            n++;
        else if (higher(a[i], b[i]) == 0)
            m++;
        else
            k = k+1;
    }
    printf("a比b高%d次，a与b等于%d次,a比b小于%d次\n", n, m, k);

    if (n > k)
        printf("a赢了\n");
    else if (n < k)
        printf("b赢了\n");
    else
        printf("平局\n");

    return 0;
}
int higher(int x, int y) {
    int flag;
    if (x > y)
        flag = 1;
    else if (x < y)
        flag = -1;
    else
        flag = 0;
    return(flag);

}
