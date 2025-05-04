// 题目：给一个不多于5位的正整数，
// 要求：一、求它是几位数，二、逆序打印出各位数字。

#include <stdio.h>
#include <math.h>

int getDigitNum(int num);
void printReverse(int num);

int main()
{
    // 输入
    int num = 0;
    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &num);

    int digitNum = getDigitNum(num);
    printf("位数：%d\n", digitNum);
    printReverse(num);

    return 0;
}

// 求位数
int getDigitNum(int num)
{
    int count = 0;
    while (1)
    {
        if (num / 10.0 >= 1)
        {
            count++;
            num = num / 10.0;
        }
        else
        {
            count++;
            break;
        }
    }
    return count;
}

// 逆序打印
void printReverse(int num)
{
    int digitNum = getDigitNum(num);
    int digitArr[digitNum];
    int i = 0;
    for (i = 0; i < digitNum; i++)
    {
        digitArr[digitNum - 1 - i] = num / (int)pow(10, digitNum - 1 - i);
        num = num % (int)pow(10, digitNum - 1 - i);
    }
    printf("逆序：");
    for (i = 0; i < digitNum; i++)
    {
        printf("%d", digitArr[i]);
    }
    printf("\n");
}
