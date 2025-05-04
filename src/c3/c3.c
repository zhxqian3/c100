// 题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

#include <stdio.h>

int main()
{
    int n, con1, con2 = 0;
    for (n = 0, con1 = 0, con2 = 0; con1 == 0 || con2 == 0; n++)
    {
        for (int i = 0; i <= (n + 100); i++)
        {
            if (i * i == n + 100)
            {
                con1 = 1;
                break;
            }
            else
            {
                con1 = 0;
            }
        }
        for (int j = 0; j <= (n + 268); j++)
        {
            if (j * j == n + 268)
            {
                con2 = 1;
                break;
            }
            else
            {
                con2 = 0;
            }
        }
        if (con1 == 1 && con2 == 1)
        {
            printf("n: %d\n", n);
        }
    }
    return 0;
}

// #include <stdio.h>
 
// int main (void)
// {
//     int  i, j, m, n, x;
//     for (i = 1; i < 168 / 2 + 1; i++)
//     {
//         if (168 % i == 0)
//         {
//             j = 168 / i;
//             if ( i > j && (i + j) % 2 == 0 && (i - j) % 2 == 0)
//             {
//                 m = (i + j) / 2;
//                 n = (i - j) / 2;
//                 x = n * n - 100;
//                 printf ("%d + 100 = %d * %d\n", x, n, n);
//                 printf ("%d + 268 = %d * %d\n", x, m, m);
//             }
//         }
//     }
//     return 0;
// }