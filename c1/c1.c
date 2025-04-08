// 题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

#include <stdio.h>

int main()
{
    int num = 0;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            for (int k = 1; k <= 4; k++)
            {
                if (i == j || i == k || j == k)
                {
                    continue;
                }
                else
                {
                    printf("%d ", i * 100 + j * 10 + k);
                    num++;
                }
            }
        }
        if (i == 4)
        {
            printf("\n");
        }
    }
    printf("num: %d\n", num);
    return 0;
}