//
// Created by Han on 2022/11/7.
//
#include<stdio.h>

int fun(int* a,int nLength)  {
    int i;
    int maxNum = a[0];

    for(i = 0;i < nLength;i++)  {
        if(maxNum < a[i])  {
            maxNum = a[i];
        }
    }
    return maxNum;
}

int main(void)  {
    int a[5] = {12,3,45,6,7};
    int b[6] = {23,45,12,76,4,6};

    printf("%d\n",fun(a,5));
    printf("%d\n",fun(b,6));
//    int maxNum = a[0];
//    int maxNumb = b[0];
//    int i;
//
//    for(i = 0;i < 5;i++)  {
//        if(maxNum < a[i])  {
//            maxNum = a[i];
//        }
//    }
//    printf("%d\n",maxNum);
//
//    for(i = 0;i < 6;i++)  {
//        if(maxNumb < b[i])  {
//            maxNumb = b[i];
//        }
//    }
//    printf("%d\n",maxNumb);
}