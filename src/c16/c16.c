// 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。

#include <stdio.h>

int GetMaxComDiv(int num1, int num2);
int GetMinComMul(int num1, int num2);

int main()
{
    int m = 0, n = 0;
    printf("输入两个正整数: ");
    scanf("%d %d", &n, &m);

    // 求最大公约数
    int maxCommonDivisor = 0;
    maxCommonDivisor = GetMaxComDiv(n, m);

    // 求最小公倍数
    int minCommonMultiple = 0;
    minCommonMultiple = GetMinComMul(n, m);

    printf("最大公约数：%d\n", maxCommonDivisor);
    printf("最小公倍数：%d\n", minCommonMultiple);

    return 0;
}

// 计算最大公约数
int GetMaxComDiv(int num1, int num2)
{
    int comDiv = 1;
    int size = num1 > num2 ? num2 : num1;
    for (int i = 1; i <= size; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            comDiv = i;
        }
    }
    return comDiv;
}

// 计算最小公倍数
int GetMinComMul(int num1, int num2)
{
    int comMul = 1;
    int start = num1 > num2 ? num1 : num2;
    for (int i = start;; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            comMul = i;
            break;
        }
    }

    return comMul;
}