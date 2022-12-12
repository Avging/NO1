//
// Created by Han on 2022/11/10.
//
#include <stdio.h>

int main()
{
    int n, i, j, count = 0, b[20] = { 0 }, c[20] = { 0 };
    float a[20][100];
    scanf_s("%d", &n);
    for (j = 0.0;; j++)
    {
        for (i = 0;; i++)
        {
            scanf_s("%f", &a[j][i]);
            b[j]++;
            if (a[j][i] == 0 || a[j][i] == -1)
                break;
        }
        if (a[j][i] == -1 && i == 0)
            break;
    }
    for (j = 0;; j++)
    {
        for (i = 0; i < b[j] - 2; i++)
        {
            for (int k = i + 1; k < b[j] - 1; k++)
                if ((float)a[j][i] / a[j][k] == n || (float)a[j][k] / a[j][i] == n)
                    c[j]++;
        }
        count = j;
        if (a[j][0] == -1)
            break;
    }
    for (j = 0; j < count; j++)
        printf("%d\n", c[j]);
    return 0;
}
