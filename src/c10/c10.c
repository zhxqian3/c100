// 题目：打印楼梯，同时在楼梯上方打印两个笑脸。

#include <stdio.h>

int main()
{
    printf("\uf118\uf118\n");
    int i = 0, j = 0;
    for (i = 1; i < 12; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("\uf0c8\uf0c8");
        }
        printf("\n");
    }
    return 0;
}