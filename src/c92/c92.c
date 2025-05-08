// 题目：时间函数举例2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    time_t start, end;
    start = time(NULL);
    system("sleep 10");
    end = time(NULL);

    // 输出执行时间
    printf("时间间隔为 %6.3f\n", difftime(end, start));
}
