//
// Created by Han on 2022/10/22.
//
#include<stdio.h>

int main(void)  {
    int i ,j;

//    for(i = 1;i <= 5;i++)  {
//        if(3 == i)  {
//            break;
//        }
//        printf("%d ",i);
//    }
      for(i = 1;i <= 2;i++)  {
          //printf("1\n");
          for(j =1;j < 3 ;j++)  {
              printf("2\n");
              break;
          }
          break;
      }


    return 0;
}