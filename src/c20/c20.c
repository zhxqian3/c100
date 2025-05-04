// 题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
// 再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

#include <stdio.h>

int main()
{
    double pass = 0.0, height = 100.0;
    for (int j = 1; j <= 10; j++)
    {
        if (j == 10)
        {
            pass = pass + height;
            height = height / 2;
        }
        else
        {
            pass = pass + height + height / 2;
            height = height / 2;
        }
    }
    printf("经过%lf米，第10次反弹%lf米\n", pass, height);
    return 0;
}