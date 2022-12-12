//
// Created by 黄祥河 on 2022/11/14.
//

#include <stdio.h>

/**
 * 字符数组
 * @return
 */
int main() {

    char a[12] = {'H', 'A', 'N', 'X', 'I', 'A', 'O', 'J', 'I', 'N', 'G', '?'};

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
        printf("%c\t", a[i]);
    }

    printf("\n");

    printf("修改最后一个字符为：");
    scanf("%c", &a[11]);

    printf("\n");
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); ++i) {
        printf("%c\t", a[i]);
    }

}