// 题目：判断 101 到 200 之间的素数。

#include <stdio.h>

int main()
{
    int i = 0, j = 0, k = 0;
    int value[100] = {0};
    for (i = 101; i <= 200; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            value[k] = i;
            k++;
        }
    }
    printf("101到200之间的素数：\n");
    int fiveCount = 0;
    for (k = 0; k < 100; k++)
    {
        if (value[k] != 0)
        {
            printf("%d ", value[k]);
            fiveCount++;
        }
        else
        {
            break;
        }

        if (fiveCount == 5)
        {
            printf("\n");
            fiveCount = 0;
        }
    }
    printf("\n");
    return 0;
}