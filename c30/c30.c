// 题目：一个5位数，判断它是不是回文数。
// 即12321是回文数，个位与万位相同，十位与千位相同。

#include <stdio.h>

int isNOP(int num);

int main()
{
    // 输入
    printf("输入一个5位数：");
    int num = 0;
    scanf("%d", &num);

    // 判断
    if (isNOP(num))
    {
        printf("%d 是回文数\n", num);
    }
    else
    {
        printf("%d 不是回文数\n", num);
    }
    return 0;
}

// 回文数判断
int isNOP(int num)
{
    if (num < 10000 || num > 99999)
    {
        return 0;
    }
    int digitNum[5] = {0};
    digitNum[0] = num / 10000;
    digitNum[1] = num % 10000 / 1000;
    digitNum[2] = num % 1000 / 100;
    digitNum[3] = num % 100 / 10;
    digitNum[4] = num % 10;

    if (digitNum[0] == digitNum[4] && digitNum[1] == digitNum[3])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}