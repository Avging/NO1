//
// Created by Han on 2022/10/21.
//
#include<stdio.h>

int main(void)  {
   int i,j;
    int ncount = 0;
    //for( i = 1;i <= 3 ;i++ )  {

      //  printf("外部循环\n");
      //  for(j = 1 ;j < 3 ;j++ )  {
          //  ncount++;
          //printf("内部循环%d\n",ncount);
        //}
    //}
    i = 1;
    j = 1;
    while(i <= 3)  {
        j = 1;
        while(j < 3)  {
            printf("次数\n");
            j++;
        }
        i++;
    }

}