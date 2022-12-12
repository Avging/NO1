//
// Created by Han on 2022/11/19.
//
#include <stdio.h>
int main() {
    int a = 8, b;
    b = a|1;
    b >>= 1;
    printf("%d,%d\n", a, b);
    return 0;
}
