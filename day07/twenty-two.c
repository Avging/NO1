//
// Created by Han on 2022/11/3.
//
#include<stdio.h>
double pave, nave;
int main(){
    double a[10];
    int n,i;
    void js(double a[],int n);
    printf("输入要输入数组的长度：");
    scanf("%d",&n);
    printf("输入数值：");
    for(i=0;i<n;i++){
        scanf("%lf",&a[i]);
    }
    js(a,n);
    printf("a数组中正数的平均值：%lf;a数组中负数的平均值：%lf",pave,nave);
}
void js(double a[],int n){
    double k,l,y,x,z;
    int i;
    k=l=y=x=z=0;
    for(i=0;i<n;i++){
        if(a[i]>0){
            k++;
            y=a[i]+y;
        }
        if(a[i]<0){
            l++;
            x=a[i]+x;
        }
    }
    if(z==x){
        nave=0;
        pave=y/k;
    }
    if(z==y){
        pave=0;
        nave=x/l;
    }
    if(z!=x){
        nave=x/l;
    }
    if(z!=y){
        pave=y/k;
    }

}


