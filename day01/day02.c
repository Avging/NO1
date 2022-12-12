//
// Created by Han on 2022/10/6.
//

#include<stdio.h>
int main()
{
    char a, b;
    printf("输入一个小写字母：\n");
    a = getchar();
    b = a - 32;
    printf("转换后的字母为：%c\n", b);
    return 0;
}


// 我给你演示一下创建新项目要干些啥

// 1.新建一个目录，比如我刚刚创建的day02，然后再在这个目录下新建一个cmakelists。txt，只用新建，不用管
// 2.新建一个c源文件，再编写代码
// 3.在刚刚新建的源文件哪里，右键点一下那个就行
// 4.去最外层的CMakeLists。txt开启自动加载（这一步，一个项目只需要一次）  一定记得是最外层的哈
// 5.以后如果出现运行出错，不是源码的问题，就来删除所有的add_executable，然后所有需要运行的代码就得重新执行第三步