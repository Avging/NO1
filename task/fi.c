//
// Created by Han on 2022/11/17.
//
#include <stdio.h>

int main(void)  {
    int fid = 0;
    int fid1 = 1;
    int fid2 = 1;
    int i;
    for(i = 3;i <= 20;i++)  {
        fid = fid1 + fid2;
        fid2 = fid1;
        fid1 = fid;
    }
    printf("%d",fid);
}