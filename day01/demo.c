//
// Created by Han on 2022/10/5.
//
#include <stdio.h>
#include <process.h>

int main(void)
{
    for (float y=1.5f;y>-1.5f;y-=0.1f)
    {
        for(float x=-1.5f;x<1.5f;x+=0.05f)  {
        float a=x*x+y*y-1;
        putchar(a*a*a-x*x*y*y*y<=0.0f?'*':' ');
    }
        system("color 0c");
        putchar('\n');
}

    while (1) {

    }
    return 0;
}