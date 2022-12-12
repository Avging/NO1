//
// Created by Han on 2022/11/3.
//
#include<stdio.h>

int main(){
    void px(int a[100],int b[100]);
    int a[100];
    int b[100];
    int i;
    printf("给数组a[100]赋值：");
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
    }
    printf("给数组b[100]赋值：");
    for(i=0;i<100;i++){
        scanf("%d",&b[i]);
    }
    px(a,b);
}
void px(int a[100],int b[100]){
    int i,j,k,x;
    int c[200];
    printf("a数组升序排列后：");
    for(i=0; i<100-1; i++){
        for(j=0; j<100-1-i; j++){
            if(a[j]>a[j+1]){
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    for(i=0;i<100;i++){
        printf("%3d",a[i]);
    }
    printf("\n");
    printf("b数组升序排列后：");
    for(i=0; i<100-1; i++){
        for(j=0; j<100-1-i; j++){
            if(b[j]>b[j+1]){
                k=b[j];
                b[j]=b[j+1];
                b[j+1]=k;
            }
        }
    }
    for(i=0;i<100;i++){
        printf("%3d ",b[i]);
    }
    printf("\n");
    j=0;
    for(i=0;i<100;i++){
        if(a[i]==b[i]){
            c[j]=a[i];
            j++;
        }
    }
    for(i=0;i<100;i++){
        if(a[i]!=b[i]){
            c[j]=a[i];
            j++;
        }
    }
    for(i=0;i<100;i++){
        c[j]=b[i];
        j++;
    }
    for(k=0;k<200-1;k++){
        for(i=0;i<200-1-k;i++){
            if(c[i]>c[i+1]){
                x=c[i];
                c[i]=c[i+1];
                c[i+1]=x;
            }
        }
    }
    printf("C数组升序排列后：");
    for(i=0;i<200;i++){
        printf("%3d ", c[i]);
    }
}


