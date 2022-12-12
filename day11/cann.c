//
// Created by Han on 2022/10/20.
//
#include<stdio.h>

int main(void)  {
    int i;

    for (i =5; i >= 1; i/= 2)  {
        printf("%d ",i);
    }
    printf("%d",i);
   // i = 1;
    //while(i <= 5)  {
      //  i++;
    //}
    return 0;
}