//
// Created by Han on 2022/11/19.
//
#include <stdio.h>

int main() {
    int m = 0;
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= i; j++) {
            if (j % 2 != 0)
                continue;
            m++;
        }
    }
    printf("%d\n",m);
    return 0;
}