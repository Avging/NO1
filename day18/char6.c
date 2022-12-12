//
// Created by 黄祥河 on 2022/11/14.
//

#include <stdio.h>
#include <string.h>

/**
 * 字符串 - 初探
 * C语言中没有字符串类型
 *
 * @return
 */
int main() {
    // 字符串有两种实现方法
    // 1-使用字符数组,如数组a,这种写法的最后是必须加上\0的,代表结束
    //      \0的ASCII码值(十进制)是10,代表空字符,''
    //      里面的元素可以修改
    // 2-使用字符串,用单引号引起来的叫字符常量,用双引号引起来的叫做字符串常量
    //      "HXJISGOOD"这个常量在常量区,b[]这个变量在栈区,指过去的,这个常量不能修改,只能够重新指向
    char a[] = {'H', 'X', 'J', 'I','S','G', 'O', 'O',  'D', '\0'};
    char b[] = "HXJISGOOD";

    printf("%s\n", a);   // 字符串的输出得用%s进行转译
    printf("%s\n", b);

    // 思考为啥都是10
    printf("%d\t", sizeof(a) / sizeof(a[0]));
    printf("%d\t", sizeof(b) / sizeof(b[0]));

    printf("%d\t",(int)a[9]);  // 打印为0
    printf("%d",b[9]);

}