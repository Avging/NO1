//
// Created by Han on 2022/11/17.
//
#include <stdio.h>

char my_strcpy(char* a[],char* b[])  {
    *a = *b;
    return 1;
}

int main(void)  {
    char str1[] = "hello";
    char str2[] = "hi";

     my_strcpy(&str1,&str2);
    printf("%s\t%s",str1,str2);
}