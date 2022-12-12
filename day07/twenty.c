//
// Created by Han on 2022/11/3.
//
#include<stdio.h>
#include<string.h>

char a[10000];
int main()
{
    int zh(char a []);
    printf("输入十六进制数：") ;
    scanf("%s",&a);
    zh(a);
}
int zh(char a[] ){
    int m=16;
    int f=0;
    for(int i=0;i<strlen(a);i++)
    {
        f*=m;
        if (a[i]=='A'||a[i]=='B'||a[i]=='C'||a[i]=='D'||a[i]=='E'||a[i]=='F')
            f+=(a[i]-'A'+10);
        else
            f+=(a[i]-'0');
    }
    printf("转换为十进制为：%d",f);
    return 0;
}


