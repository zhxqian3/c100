// 题目：时间函数举例2 

#include <stdio.h>
#include <time.h>

int main(void)
{
    long i=10000000L;
    clock_t start,finish;
    double TheTimes;
    printf("做%ld次空循环需要的时间为",i);
    start=clock();
    while(i--);
    finish=clock();
    TheTimes=(double)(finish-start)/CLOCKS_PER_SEC;
    printf("%f秒。\n",TheTimes);
    return 0;
}
