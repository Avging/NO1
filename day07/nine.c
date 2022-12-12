//
// Created by Han on 2022/11/3.
//
#include<stdio.h>
int main(){
    char s1[20]="haoge";
    char s2[]="zhengsuai";
    void lj(char s1[10],char s2[10]);
    lj( s1, s2);
    printf("%s",s1);
}
void lj(char s1[10],char s2[10]){
    char *i,*l;
    i=s1;
    l=s2;
    while(*i!='\0'){
        i++;
    }
    while(*l!='\0'){
        *i++ = *l++;
    }
}


