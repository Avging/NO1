//
// Created by 黄祥河 on 2022/11/14.
//

#include <stdlib.h>
#include <stdio.h>

/**
 * 每个字符都有自己对应的编码,常用的字母以及英语符号
 * @return
 */
int main() {
    char a;
    int b;

    // 注意,因为第二个是int型,需要使用空格/回车进行隔开
    scanf("%c", &a);  // 这里手动输入A
    scanf("%d", &b);  // 这里手动输入66

    printf("%c对应的ASCII码值是%d\n", a,(int) a);
    printf("%d对应的字符是%c\n", b,(char) b);

    /**
     * 也可以写成如下的样子
     * printf("%c对应的ASCII码值是%d\n", a, a);
     * printf("%d对应的字符是%c\n", b, b);
     */
}