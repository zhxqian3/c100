// 题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"，
// 例如 6=1＋2＋3 ，请编程找出 1000 以内的所有完数。

#include <stdio.h>
int main(void)
{
    for (int i = 1; i < 1000; i++)
    {
        int temp = i;
        int facSum = 0;
        int facArr[1000] = {0};
        for (int j = 1, k = 0; j < i; j++)
        {
            if (temp % j == 0)
            {
                facSum = facSum + j;
                facArr[k] = j;
                k++;
            }
        }
        if (facSum == temp)
        {
            printf("%d=", temp);
            for (int k = 0; k < 1000; k++)
            {
                if (facArr[k] != 0 && facArr[k + 1] != 0)
                {
                    printf("%d+", facArr[k]);
                }
                else if (facArr[k] != 0 && facArr[k + 1] == 0)
                {
                    printf("%d\n", facArr[k]);
                }
                else
                {
                    break;
                }
            }
        }
    }
    return 0;
}
