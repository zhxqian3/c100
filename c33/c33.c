// 题目：判断一个数字是否为质数。

#include <stdio.h>
#include <math.h>

int isPrime(int num);

int main()
{
    // 输入一个数
    printf("请输入一个整数：");
    int num = 0;
    scanf("%d", &num);

    // 判断
    if (isPrime(num))
    {
        printf("%d 是质数。\n", num);
    }
    else
    {
        printf("%d 不是质数。\n", num);
    }
    return 0;
}

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    int i = 0;
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}