// 题目：求 s=a+aa+aaa+aaaa+aa...a 的值，
// 其中 a 是一个数字，例如 2+22+222+2222+22222 (此时共有5个数相加)，
// 几个数相加有键盘控制。

#include <stdio.h>
#include <math.h>

int main()
{
    // 输入
    printf("输入数字：");
    int a = 0;
    scanf("%d", &a);
    printf("几个数相加：");
    int num = 0;
    scanf("%d", &num);

    // 计算
    int sum = 0;
    int tempSum = 0;
    int i = 0, j = 0;
    for (i = 1; i <= num; i++)
    {
        tempSum = 0;
        for (j = 0; j < i; j++)
        {

            tempSum = tempSum + a * pow(10, j);
        }
        printf("%d", tempSum);
        if (i != num)
        {
            printf("+");
        }
        sum = sum + tempSum;
    }
    printf("=%d", sum);
    printf("\n");

    return 0;
}