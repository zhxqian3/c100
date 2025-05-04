// 题目：利用递归方法求 5!。

#include <stdio.h>

int factor(int num);

int main()
{
    int result = factor(5);
    printf("5! = %d\n", result);
    return 0;
}

int factor(int num)
{
    int result = 0;
    if (num == 1 || num == 0)
    {
        result = 1;
        return result;
    }
    else
    {
        result = factor(num - 1) * num;
        return result;
    }
}