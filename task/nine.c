//
// Created by Han on 2022/10/22.
//
# include<stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 9; i++) {
        printf("\n");
        for (j = 1; j <= i; j++) {
            printf("%dx%d=%d    ", i, j, i * j);
        }


    }
    return 0;
}