//
// Created by Han on 2022/11/17.
//
#include <stdio.h>

int main(void) {
    int name[] = {72, 88, 74, 68, 72, 80};

    while (1) {
        for (int i = 0; i < 6; ++i) {
            printf("%c", name[i]);
        }
        printf("\n");
    }
}