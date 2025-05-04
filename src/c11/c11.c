// 题目：古典问题（兔子生崽）：有一对兔子，
// 从出生后第3个月起每个月都生一对兔子，
// 小兔子长到第三个月后每个月又生一对兔子，
// 假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）

#include <stdio.h>

int main()
{
    // 每月代数的对数
    int descendantNum[40] = {1};

    // 每月的数量
    int monthNum[40] = {2};

    for (int i = 2; i <= 40; i++)
    {
        if (i - 3 >= 0)
        {
            for (int j = 0; j <= i - 3; j++)
            {
                descendantNum[i - 1] = descendantNum[i - 1] + descendantNum[j];
            }
            for (int j = 0; j <= i - 3; j++)
            {
                monthNum[i - 1] = monthNum[i - 1] + descendantNum[j] * 2;
            }
            monthNum[i - 1] = monthNum[i - 1] + monthNum[i - 2];
        }
        else
        {
            descendantNum[i - 1] = 0;
            monthNum[i - 1] = monthNum[0];
        }
    }

    for (int i = 0; i < 40; i++)
    {
        printf("第%d月：%d\n", i + 1, monthNum[i]);
    }

    return 0;
}