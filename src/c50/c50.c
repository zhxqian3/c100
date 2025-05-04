// 题目：#include 的应用练习。

#include <stdio.h>
#include "include/test.h"

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    if (a LAG b)
    {
        printf("%d > %d \n", a, b);
    }
    else if (a SMA b)
    {
        printf("%d < %d \n", a, b);
    }
    else if (a EQ b)
    {
        printf("%d = %d \n", a, b);
    }
    return 0;
}