// 题目：将一个正整数分解质因数。例如：输入 90,打印出 90=2*3*3*5

#include <stdio.h>

void split(int num);
int isPrime(int num);

int main()
{
    // 输入
    printf("输入要分解的正整数：");
    int input = 0;
    scanf("%d", &input);

    // 分解
    split(input);

    return 0;
}

void split(int num)
{
    printf("%d=", num);
    int i = 2;
    while (num != 1)
    {
        if (isPrime(i))
        {
            while (num % i == 0)
            {
                num = num / i;
                printf("%d", i);
                if (num != 1)
                {
                    printf("*");
                }
            }
        }
        i++;
    }
    printf("\n");
}

// 判断质数
int isPrime(int num)
{
    int i = 0;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }
    if (i == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}