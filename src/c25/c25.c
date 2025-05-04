// 题目：求 1 + 2! + 3! + ... + 20! 的和。

#include <stdio.h>

int main()
{
    int i = 0;
    long forward = 1, sum = 0;
    for (i = 1; i <= 20; i++)
    {
        sum = forward * i + sum;
        forward = forward * i;
    }
    printf("1 + 2! + 3! + ... + 20! = %ld\n", sum);
    return 0;
}