// 题目：求100之内的素数。

#include <stdio.h>
#include <math.h>

int isPrime(int num)
{
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

int main()
{
    int i = 0;
    for (i = 2; i <= 100; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}