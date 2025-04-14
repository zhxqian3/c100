// 题目：输入三个整数 x、y、z，请把这三个数由小到大输出。

#include <stdio.h>

int main()
{
    int valu[3] = {0};
    scanf("%d %d %d", &valu[0], &valu[1], &valu[2]);

    int small = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < 2; i++)
    {
        small = valu[i];
        for (j = 1; j <= 2 - i; j++)
        {
            if (valu[i] > valu[i + j])
            {
                small = valu[i + j];
                valu[i + j] = valu[i];
                valu[i] = small;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d ", valu[i]);
    }
    printf("\n");

    return 0;
}