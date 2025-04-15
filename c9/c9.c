// 题目：要求输出国际象棋棋盘。

#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("\uf0c8 ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}