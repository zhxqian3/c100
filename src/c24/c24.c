// 题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...
// 求出这个数列的前20项之和。

#include <stdio.h>

int main()
{
    double denoGroup[20] = {1.0, 2.0}; // 分母项组
    double moleGroup[20] = {2.0, 3.0}; // 分子项组

    int i = 0;
    for (i = 2; i < 20; i++)
    {
        denoGroup[i] = denoGroup[i - 1] + denoGroup[i - 2];
        moleGroup[i] = moleGroup[i - 1] + moleGroup[i - 2];
    }

    double resGroup[20] = {0};
    double sum = 0;
    for (i = 0; i < 20; i++)
    {
        resGroup[i] = moleGroup[i] / denoGroup[i];
        sum = sum + resGroup[i];
    }

    printf("前20项之和：%lf\n", sum);
    return 0;
}